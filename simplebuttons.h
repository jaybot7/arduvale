#include "CArduboy.h"
 
class SimpleButtons
{
public:
  SimpleButtons(Arduboy2 &arduboy2);
 
  /// Poll the hardware buttons and tracks state over time
  /**
  This must be called before any of the other button member functions.  It should be called either in your main `loop()` or as part of the frame system (called pre-frame).
  */
  void poll();
  boolean pressed(uint8_t buttons);
  boolean notPressed(uint8_t buttons);
  boolean justPressed(uint8_t button);
 
private:
  uint8_t currentButtonState = 0;
  uint8_t previousButtonState = 0;
 
  Arduboy2 *arduboy2;
};
