#include "CArduboy.h"

ArduboyTunes2 tuney;
Sprites spritey(display); 

#define LEFT _BV(5)
#define RIGHT _BV(6)
#define UP _BV(7)
#define DOWN _BV(4)
#define A_BUTTON _BV(3)
#define B_BUTTON _BV(2)

//////////////
////functions
/////////////

int counters(){
  display.drawChar(94, 0, tempChar, 255, 0, 1);
  display.setCursor(102,0);
  display.print("x");
  display.setCursor(110,0);
  display.print(totalCoins);
 // display.setCursor(10,0);
//  display.print(myArr[x][1]);
}

int crashDown(int incoming){     //   hit head and jump back down
      jumpDown = 1;
    if (incoming == 1){ 
     //flash baddie bag
        flipColor = 1;
      // play coin sfx
      if(tuney.playing()) {
        TUNE_OP_STOP;
      }
      if (soundOn){
        tuney.playScore(abba);      
      }
      totalCoins += 5;
      gotMoney = 1;
     }
}

// invert the colors of an object to make it flash
int flipcolors(){
  //add some incoming cvalues later
  //draw baddie bag 
  if (gotMoney == 0){
      if (colorOn == 0){
          spritey.drawBitmap(baddiex+32, baddiey, barrel, 0, 16, 16, SPRITE_IS_MASK);    
          spritey.drawBitmap(baddiex+32, baddiey, barrelMask, 0, 16, 16, SPRITE_IS_MASK_ERASE);
          colorOn = 1;
      } else {
          spritey.drawBitmap(baddiex+32, baddiey, barrelMask, 0, 16, 16, SPRITE_IS_MASK);
          spritey.drawBitmap(baddiex+32, baddiey, barrel, 0, 16, 16, SPRITE_IS_MASK_ERASE);
          colorOn = 0;
      }
  } else {
     //
          spritey.drawBitmap(baddiex+32, baddiey, barrel, 0, 16, 16, SPRITE_IS_MASK);    
          spritey.drawBitmap(baddiex+32, baddiey, barrelMask, 0, 16, 16, SPRITE_IS_MASK_ERASE);
          killBlock = 1;
  }
}

//draw coins and blocks
int redrawObjects(){
//  //draw regular coin bag 
//  if (gotCoin != 1){  
//    spritey.drawBitmap(barrelx + 32, barrely, barrelMask, 0, 16, 16, SPRITE_IS_MASK_ERASE);
//    spritey.drawBitmap(barrelx + 32, barrely, barrel, 0, 16, 16, SPRITE_IS_MASK);       
//  }
  
  //draw baddie bag 
     if (colorOn == 0){
        spritey.drawBitmap(baddiex+32, baddiey, barrelMask, 0, 16, 16, SPRITE_IS_MASK);
        spritey.drawBitmap(baddiex+32, baddiey, barrel, 0, 16, 16, SPRITE_IS_MASK_ERASE);
      } else {  
          spritey.drawBitmap(baddiex+32, baddiey, barrel, 0, 16, 16, SPRITE_IS_MASK);    
          spritey.drawBitmap(baddiex+32, baddiey, barrelMask, 0, 16, 16, SPRITE_IS_MASK_ERASE);          
      }
      if (killBlock == 1){
        spritey.drawBitmap(baddiex+32, baddiey, barrel, 0, 16, 16, SPRITE_IS_MASK);    
          spritey.drawBitmap(baddiex+32, baddiey, barrelMask, 0, 16, 16, SPRITE_IS_MASK_ERASE);
      }

  // draw random coins
  for (int x = 0; x < 4; x++){
    if (myArr[x][2] != 1){
      spritey.drawBitmap(myArr[x][0]+32, myArr[x][1], barrelMask, 0, 16, 16, SPRITE_IS_MASK_ERASE);
      spritey.drawBitmap(myArr[x][0]+32, myArr[x][1], barrel, 0, 16, 16, SPRITE_IS_MASK);
    }
  }  
}

//draw BG
int redrawBG(){
  display.clearDisplay();
  for(byte x = 0; x < 6; x++) {
    display.drawBitmap( (x * 32) - BGmove, BGHeight, bg, 32, 64, 1);
  }

//draw a cloud
  display.drawBitmap(cloudx / 2, 0, cloud, 48, 8, 1);
  //draw other stuff
  redrawObjects();  
} 




int moveUp(int incoming){
   //push down
   for (int x = 0; x < 4; x++){ //move random coinbags
       myArr[x][1] += incoming;
   }    
   jumpHeight -= incoming;
   BGHeight += incoming;  //move the background up        
   cloudy += incoming;  //move the cloud        
   baddiey += incoming;
   barrely += incoming;  //move the coin bags
   redrawBG();             
}

int moveDown(int incoming){
    if (BGHeight > 0){
      //pull up
      for (int x = 0; x < 4; x++){ //move random coinbags
          myArr[x][1] -= incoming;
      } 
      jumpHeight += incoming;
      BGHeight -= incoming;  //move the background up        
      cloudy -= incoming;  //move the cloud        
      baddiey -= incoming;
      barrely -= incoming;  //move the coin bags        
      redrawBG();             
    } else {
       if (BGHeight == 0){
          jump = 0;
          jumpDown = 0; ////kludge, will cause a bug if jumped on a floating block repeatedly until the blocks relative y position          
          redrawObjects(); //and redraw the objects so theyre not black (or to change their sprite later on)
          redrawBG();
       } else {
         jump = 0;
         jumpDown = 0;             
         groundHeight = groundBase;              
       }
    }
}

int moveLeft(int incoming){
   BGmove += incoming;  //move the background        
   baddiex -= incoming;
   barrelx -= incoming;  //move the coin bags
   cloudx -= incoming;  //move the cloud
   
   for (int x = 0; x < 4; x++){ //move random coinbags
    myArr[x][0] -= incoming;
   }   
   if (barrelx < -64) { //this needs to be classed so i can do it with multiple objects
      barrelx = 127;
      gotCoin = 0; //reset random coin
    }
    if (baddiex < -64) { //this needs to be classed so i can do it with multiple objects
        baddiex = 127;
        baddiey = random(-5, 50);
        gotMoney = 0;
        killBlock = 0;
    }   
    if (cloudx < -95) {
      cloudx = 256;
    }     
    if(BGmove > 31){
        BGmove = 0;
    }

    // random coinbags
    for (int x = 0; x < 4; x++){
      if (myArr[x][0] < -50) { //this needs to be classed so i can do it with multiple objects
          myArr[x][0] = 200;
         // myArr[x][2] = 0; //reset random coin
      }
    }
    redrawBG();
}

int moveRight(int incoming){
  BGmove -= incoming;  //move the background
  baddiex += incoming;
  barrelx += incoming;  //move the set of barrels
  cloudx += incoming;  //move the cloud
  for (int x = 0; x < 4; x++){ //move random coinbags
    myArr[x][0] += incoming;
   }
  if (barrelx > 128){
    barrelx = -64;
    gotCoin = 0;
  }
  if (baddiex > 128){
    baddiex = -64;
    baddiey = random(-5, 50);
    gotMoney = 0;
    killBlock = 0;
  }
  
  if(cloudx > 256) {
    cloudx = -95;
  }
             
  if(BGmove < 31) {
    BGmove += 31;
  }

  // random coinbags
  for (int x = 0; x < 4; x++){
      if (myArr[x][0] > 250) { //this needs to be classed so i can do it with multiple objects
          myArr[x][0] = -40;
        //  myArr[x][2] = 0; //reset random coin ; value in the arr to emulate the old getCoin variable
      }
  }
  
  redrawBG();
}

//draw hero
int redrawHero(){      
  if (jump == 1){ //jumping  
    //left
    if (directionMove == 1){
      if (panRight == 0 && heroX <= leftCenter){ 
          moveRight(2);              
      } else { 
          heroX--;
      }
      spritey.drawBitmap(heroX, jumpHeight, duncanL + (megaFrame * (SIZE_MEGAMAN * 2)) + (1 * SIZE_MEGAMAN),  
                                   0,  24, 24, SPRITE_IS_MASK);
      spritey.drawBitmap(heroX, jumpHeight, duncanL + (megaFrame * (SIZE_MEGAMAN * 2)),  
                                   0,  24, 24, SPRITE_IS_MASK_ERASE); 
    }
    if (directionMove == 0) { //right
      if (panLeft == 0 && heroX >= rightCenter){ 
          moveLeft(2);        
      } else { 
          heroX++;
      }
      spritey.drawBitmap(heroX, jumpHeight, duncanR + (megaFrame * (SIZE_MEGAMAN * 2)) + (1 * SIZE_MEGAMAN), 
                  0, 24, 24, SPRITE_IS_MASK);
       spritey.drawBitmap(heroX, jumpHeight, duncanR + (megaFrame * (SIZE_MEGAMAN * 2)), 
                  0, 24, 24, SPRITE_IS_MASK_ERASE);
    }
        
    if (directionMove == 3 && lastMove == 0){ //not moving but jumping and last went right
        spritey.drawBitmap(heroX, jumpHeight, duncanR + (megaFrame * (SIZE_MEGAMAN * 2)) + (1 * SIZE_MEGAMAN), 
                  0, 24, 24, SPRITE_IS_MASK);
       spritey.drawBitmap(heroX, jumpHeight, duncanR + (megaFrame * (SIZE_MEGAMAN * 2)), 
                  0, 24, 24, SPRITE_IS_MASK_ERASE);
    }

    if (directionMove == 3 && lastMove == 1){ //not moving but jumping and last went left
        spritey.drawBitmap(heroX, jumpHeight, duncanL + (megaFrame * (SIZE_MEGAMAN * 2)) + (1 * SIZE_MEGAMAN),  
                                   0,  24, 24, SPRITE_IS_MASK);
        spritey.drawBitmap(heroX, jumpHeight, duncanL + (megaFrame * (SIZE_MEGAMAN * 2)),  
                                   0,  24, 24, SPRITE_IS_MASK_ERASE); 
    }
    } else { // jump is 0 not jumping    
       if (directionMove == 1){ //WALKING LEFT
          if (panRight == 0 && heroX <= leftCenter){ 
              moveRight(1);         
           } else { 
            heroX--;
            moveRight(0);
          } 
       spritey.drawBitmap(heroX, groundHeight, duncanL + (megaFrame * (SIZE_MEGAMAN * 2)) + (1 * SIZE_MEGAMAN),  
                                   0,  24, 24, SPRITE_IS_MASK);
       spritey.drawBitmap(heroX, groundHeight, duncanL + (megaFrame * (SIZE_MEGAMAN * 2)),  
                                   0,  24, 24, SPRITE_IS_MASK_ERASE);  
       }  
       if (directionMove == 0){   //WALKING RIGHT
          if (panLeft == 0 && heroX >= rightCenter){ 
              moveLeft(1);
          } else {
              heroX++;
              moveLeft(0);
          }
       spritey.drawBitmap(heroX, groundHeight, duncanR + (megaFrame * (SIZE_MEGAMAN * 2)) + (SIZE_MEGAMAN * 1), 
                                    0,24, 24, SPRITE_IS_MASK);
       spritey.drawBitmap(heroX, groundHeight, duncanR + megaFrame * (SIZE_MEGAMAN * 2),  
                                    0, 24, 24, SPRITE_IS_MASK_ERASE);
        }
        if (directionMove == 3 && lastMove == 0){ //not moving and was last walking right?
            spritey.drawBitmap(heroX, groundHeight, duncanR + (megaFrame * (SIZE_MEGAMAN * 2)) + (SIZE_MEGAMAN * 1), 
                                    0,24, 24, SPRITE_IS_MASK); 
            spritey.drawBitmap(heroX, groundHeight, duncanR + megaFrame * (SIZE_MEGAMAN * 2),  
                                    0, 24, 24, SPRITE_IS_MASK_ERASE);
        }
        if (directionMove == 3 && lastMove == 1){ //not moving and was last walking left?
        spritey.drawBitmap(heroX, groundHeight, duncanL + (megaFrame * (SIZE_MEGAMAN * 2)) + (1 * SIZE_MEGAMAN),  
                                   0,  24, 24, SPRITE_IS_MASK);
        spritey.drawBitmap(heroX, groundHeight, duncanL + (megaFrame * (SIZE_MEGAMAN * 2)),  
                                   0,  24, 24, SPRITE_IS_MASK_ERASE); 
        } 
    }
}

int panningAnims(){
  //right side
  if (heroX > rightCenter && panLeft == 1 && jump == 0){ 
      heroX -= 2;
      moveLeft(2); //function way near the top, just under void setup
      redrawBG();
      redrawHero();
  } else {
      panLeft = 0;
  }
  //left side
  if (heroX < leftCenter && panRight == 1 && jump == 0){ 
      heroX += 2;
      moveRight(2);
      redrawBG();
      redrawHero();   
   } else {
      panRight = 0;
   }
}

//collision check function
int testCollision(int objectX, int objectY, int objectWidth, int objectHeight, int colliex, int colliey, int collieWidth, int collieHeight){  
  
  if (objectX + objectWidth <= colliex && objectX + objectWidth >= colliex - collieWidth && //sandwich left and right
        colliey + collieHeight >= objectY && colliey <= objectY + objectHeight) { //sandwich top and bottom
     return 1;
  }
}

//test all collisions
int collisions(){
 
//  //coinbag single
//  int coinCol = testCollision(barrelx, barrely, barrelSize, barrelSize, heroX, jumpHeight, heroSize, heroSize);
//  if (coinCol == 1 && barrelx > 5){ //my collision check doesnt test for negatives and i'm too stupid to implement it there
//      // do stuff
//    if (gotCoin == 0){
//      totalCoins++;   
//      if(tuney.playing()) {
//          TUNE_OP_STOP; //new score stop
//      }
//      if (soundOn){
//       tuney.playScore(coiny);
//      }
//    }    
//    gotCoin = 1;  
//    barrely = random(-5, 50);
//   }

  //random bags
  for (int x = 0; x < 4; x++){
     //collision stuff test against random coins
     int XcoinCol = testCollision(myArr[x][0], myArr[x][1], barrelSize, barrelSize, heroX, jumpHeight, heroSize, heroSize);
       if (XcoinCol == 1 && myArr[x][0] > 5){ 
          // do stuff
          int randValX = 0;
          int randValY = random(10, 40);
          int tempRander = 0;
          while (tempRander < 4){
            for (int y = 1; y < 4; y++){
              if (testCollision(randValX, randValY, barrelSize, barrelSize, myArr[y][0], myArr[y][1], barrelSize, barrelSize) == 1 &&
              testCollision(randValX, randValY, barrelSize, barrelSize, baddiex, baddiey, barrelSize, barrelSize) == 1){
                randValX += 32;
                randValY = random(10, 40);
                 tempRander = 0;
                y = 1;
              } else {
                tempRander++;
              }
            }
          }
          //passed all 4 checks against other bags so print it
          myArr[x][0] = 200;           
          myArr[x][1] = randValY; 
          redrawObjects();
          
          //SFX
          if(tuney.playing()) {
             TUNE_OP_STOP; //new score stop
          }
          if (soundOn){
              tuney.playScore(coiny);
          }
          totalCoins++;           
       // redrawObjects(); //for mid-air block flash reset
     }
   }

///////jumping on bricks
  int baddieCol = testCollision(baddiex, baddiey, barrelSize, barrelSize, heroX, jumpHeight, heroSize, heroSize);
     if (baddieCol == 1 && baddiex > -12){ //baddie is visible and touching
        // do stuff  
      if (gotBaddie == 0){ // if its the first touch
          if (baddiey > jumpHeight+20){  //if hero is above the brick magic 20 number don't ask....
                groundHeight = baddiey-24; //set the ground height the player will walk on to the top of the brick
                onTop = 1; // and let us know he is on a brick 
                jumpDown = 0; // and stop falling down
                jump = 0; // and stop jumping 
                 
          } else { //hero is touching but not above the brick
            onTop = 0;  
            if (baddiey + 14 < jumpHeight){ //why 14 i dont know:: hero is below bottom of the brick
                    if (jump != 0 && jumpDown != 1 && gotMoney == 0){ //if below the brick and hitting his head on it
                       crashDown(1); //hit your head and go back down with money                      
                    } else {
                      crashDown(0); // unless it's empty
                   }
            }
          }
        gotBaddie = 1;                       
      } else { //not the first touch
        //already set to baddie and touching  
        // uhhh nothing to do here...   
      }

     } else {  //not touching anymore or not visible object
        groundHeight = groundBase; //need these to reset on the first block
        gotBaddie = 0;
        onTop = 0;  
        
      if (jump == 0 && jumpHeight < groundHeight-2 && jumpDown == 0){
          jumpDown = 1;
        }
     }

     if (gotBaddie != 1){
     // onTop = 0;
     }
  
//end collision stuff 
}

int jumpLogic(){
  int tHeight = jumpHeight; //temp hero Y   
    //make sure B button is still pressed
    if (jump == 1 && tHeight > jumpLimit && jumpDown == 0){
       if (buttons & B_BUTTON || tHeight > groundHeight - 20){            
         if (directionMove == 3){ // not moving left or right, standing still
            moveUp(1);     
         } else { // if walking left or right right jumping
           moveUp(1);
         }
       } else {
         jumpDown = 1;
       }
     } else {                  
        if (jump == 1 && tHeight <= jumpLimit && jumpDown == 0){
           jumpDown = 1;  
           if (groundHeight + 1 < groundBase){
              moveDown(1);   
           }
        }
        if (jumpDown == 1 && tHeight < groundHeight){
            moveDown(1);
            gotBaddie = 0;
        } else {
           if (jumpDown == 1 && tHeight >= groundHeight){
              jump = 0;
              gotBaddie = 0;
              redrawBG();
           } else {
               jump = 0;
               jumpDown = 0; 
           }
        } 
     }
}

int buttonHandling(){
  buttons = display.getInput();  //get the current button state
    
    if(buttons & LEFT) {
       if (gotBaddie != 1 || onTop == 1){
          directionMove = 1;
          lastMove = 1;
       } else {
          if (directionMove != 3){
              directionMove = 3;
              heroX += 1;
           }
       }
            
      //right
      }  else if(buttons & RIGHT) {
            if (gotBaddie != 1){
               directionMove = 0;
               lastMove = 0;
            } else {
              if (onTop == 1){
                  directionMove = 0;
                  lastMove = 0;
              } else {
                  if (directionMove != 3){
                     heroX -= 2;
                     directionMove = 3;
                     megaFrame = 0;
                  }
              }
            }
      /// up
      }  else if(buttons & UP){
            //directionMove = 3;
      /// down          
      }    else if(buttons & DOWN) {
            // nada 
      // when player stops
      } else { 
         directionMove = 3;
      }
      if(buttons & A_BUTTON) {
        //animSpeed = 0; //was run but i dont like it
      }     else if(buttons & B_BUTTON) {
          if (jump != 1 && nojump == 0){
              jump = 1;
              gotBaddie = 0; 
              if (onTop == 0){
                jumpHeight = groundHeight - 1; //need this otherwise you'll never jump
                //jumpLimit = jumpHeight - 25; //set jump limit based off of when button pressed
              } else {
                // do something to stop the ground from moving up here, check functions
                // otherwise you'll just sink, like it does now
                jumpHeight = groundHeight - 1;
              }
              nojump = 1;
              
              if (soundOn){
                  tuney.playScore(jumpy);      
              }
          } 
      } else {
         nojump = 0;
         // and do anything else you want when the player hits the ground here
         
         //flipColor = 1;
         flipColor = 0; //turn off coin animations when hit the ground
      }
      
}

/////////////////
///////end functions
/////////////////
