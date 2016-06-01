#include "CArduboy.h" 
Arduboy2 display; 

int aG(){ //make initial coinbag values to mangle later
  for (int x = 0; x < (sizeof(myArr))/myArrDiv; x++){
      int temprandx = random(5, 100);
      int temprandy = random(-5, 50);
      myArr[x][0] = temprandx;
      myArr[x][1] = temprandy;
      //makeBricks(temprandx, temprandy, 0);      
      
    }
}

int loadingSequence(){
    SPI.begin();
    display.start();
    display.setFrameRate(60);
    
//    //loading sequence
//    for (int i = 0; i < 6; i++){
//      display.clearDisplay();
//      display.setCursor(12*i,12*i);
//      display.print("girls! girls! girls!");
//      display.drawBitmap(60, 16, duncanR + (megaFrame * (SIZE_MEGAMAN * 3)) + (1 * SIZE_MEGAMAN), 24, 24, 1); //splash
//      display.display();
//      megaFrame++;
//      if(megaFrame > 3) {   
//      megaFrame = 0;
//      }
//      delay(500);
//    }
    
    buttons = display.getInput();  //begin with a quick check of the A button
    aG(); //make all initial random coin array values
    
}


