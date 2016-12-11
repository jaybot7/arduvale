#include "CArduboy.h"

//#define WIDTH 128
//#define HEIGHT 64

byte buttons;         //stores the current button state

int myArr[4][2]; // [ [0,0,0], [0,0,0], [0,0,0], [0,0,0], [0,0,0] ] array used to store random coin location xy values

int jumpLimit;

byte killBlock = 0;
int myArrDiv = 3; // divisible number for loop math should divide up the arrays into something easily... like 3
int onTop = 0;
int rightCenter = 60; //center character for right side pans
int leftCenter = 40; //center character for right side pans
int panLeft = 0;
int panRight = 0;  

byte colorOn = 0; //for flashing blocks anim
byte BGmove = 0;      //counts how many pixels the background has moved

int XcoinCol = 0;
int barrelx = 64;     //location of the coins
int barrely = 30;     //int seems okay even though its not okay for the bricks... i have no idea why

int baddiex = 30;     //bricks initial location
int baddiey = 28;    
int XgotCoin = 0;
int cloudx = 16;      //location of the cloud

byte gotMoney = 0;//check if block has been hit already
int megaCounter = 0; //a counter so we don't advance hero's animation frames too quickly
int walkerCounter = 0;
int megaFrame = 0;   //hero's animation frame
long delta = 0;       //the time that has passed between one frame of motion and the next

//byte drawMode = 0;    //the current user-selected greyscale drawing mode
byte musicMode = 0;   //the current user-selected music mode (1 = play music)
int directionMove = 3; // to go right is 0 or left is 1. 3 stops

int groundBase = 31;
int groundHeight = 31;
int jump = 0; // jumping it's 1
int nojump = 0; // to make sure you can't jump while jumping and must wait until you hit the ground before you can press the button again
int jumpHeight = 31; // y pos of hero

int animSpeed = 0; // frame multiplier of the all anims on screen
byte lastMove = 0; //where the hero was going last
int gotCoin = 0; //if currently picked up a coin
int gotBaddie = 0; // if currently touching the block

int totalCoins = 0; //counter for coins

int flipColor = 0; //used for object animations

int soundOn = 1; // 1 is on
int tempChar = 2; //4 is diamond 3 is heart 15 is marker 2 is smiley face
int jumpDown =0; //falling anim. hero going down
int objectMover = 2;
int heroX = 127; //hero x position
int heroSize = 24;
int barrelSize = 16;

int BGHeight = 0;
int cloudy = 0;
