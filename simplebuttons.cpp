#include "simplebuttons.h"
 
///buttons
// store current and previous buttons state for frame based button events
// you should be using nextFrame() in almost all cases, not calling this
// directly
SimpleButtons::SimpleButtons(Arduboy2 &a) {
  arduboy2 = &a;
}
 
void SimpleButtons::poll()
{
  previousButtonState = currentButtonState;
  currentButtonState = arduboy2->getInput();
}
// returns true if a button has just been pressed
// if the button has been held down for multiple frames this will return
// false.  You should only use this to poll a single button.
boolean SimpleButtons::justPressed(uint8_t button)
{
  return (!(previousButtonState & button) && (currentButtonState & button));
}
 
boolean SimpleButtons::pressed(uint8_t buttons)
{
  return (currentButtonState & buttons) == buttons;
}
 
boolean SimpleButtons::notPressed(uint8_t buttons)
{
  return (currentButtonState & buttons) == 0;
}
