#include <FastLED.h>

#define LED_PIN     8
#define NUM_LEDS    25

CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

}

void loop() {

  for (int i = 0; i <= 24; i++) {
    leds[i] = CRGB( 0, 0, 255);
    FastLED.show();
    delay(40);
  }
  for (int i = 24; i >= 0; i--) {
    leds[i] = CRGB( 255, 0, 0);
    FastLED.show();
    delay(40);
  }
}