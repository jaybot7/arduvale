//Duncan runnjump
//Based on stuff from UncleSporky's MegaMan demo (c) UncleSporky 2015

#include "globals.h"
#include "CArduboy.h"
#include "bitmaps.h"
#include "music.h"
#include "simplebuttons.h"
#include "intro.h"
#include "functions.h"

void setup()
{
    loadingSequence();
    redrawBG(); //draw stuff
    redrawHero(); //draw the hero
    redrawBG(); //draw stuff again, just in case
}

void loop() {   
  //this delta calculation did something, now it doesnt, really
  if(millis() >= delta) {
  
  //redraw sprites (hero and objects) here
  redrawHero();  

  for (int p = 0; p < 4; p++){
//    display.setCursor(10,12*p);
//    display.print(myArr[p][0]+30);
//    display.setCursor(40,12*p);
//    display.print(myArr[p][1]+30);

    display.setCursor(80,12);
    display.print(barrelx+32);
    display.setCursor(80,24);
    display.print(barrely);
  }

  //coin counter
  counters();

  ///panning animations
  panningAnims();

  ///collision
  collisions();
  
  ///panning operations
  if (heroX >= 84 ){   
     panLeft = 1;    
  } else if (heroX <= 10){  
     panRight = 1;
  }

//copy the buffer to the screen and show it
  display.display();

///count animation frame      
    megaCounter++;  //all animations frame counter
    if (flipColor == 1 && jumpHeight <= groundBase){
      flipcolors(); 
    } 
          
    if(megaCounter > 10 && directionMove != 3) {
       megaCounter = 0; 
       megaFrame++; //advances player animation      
       if(megaFrame > 3) { //number of frames in walk animation  
         megaFrame = 0;         
       }
    } 

///jumping
    jumpLogic();

///button stuff             
    buttonHandling();
    
  } //end of delta millis 

    delta = millis() + animSpeed;
} //end of main loop