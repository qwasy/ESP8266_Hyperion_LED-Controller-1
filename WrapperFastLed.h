#ifndef WrapperFastLed_h
#define WrapperFastLed_h

#include "BaseHeader.h"
#include <FastLED.h>

class WrapperFastLed {
  public:
    void
      begin(const ESPIChipsets chipset, const uint8_t dataPin, const uint8_t clockPin, const uint8_t ledCount, const EOrder colorOrder),
      show(void),
      clear(void),
      fillSolid(CRGB color),
      fillSolid(byte r, byte g, byte b),
      rainbowStep(void);

    CRGB* leds;
      
  private:   
    CRGB wheel(byte wheelPos);
    byte _rainbowStepState;
    byte _ledCount;
};

#endif
