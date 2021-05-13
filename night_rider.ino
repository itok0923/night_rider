#include "LEDSet.h"
//#include "PushSet.h"

#define LED_BUILTIN_PIN   PB4

#define LED_1_PIN   PA4
#define LED_2_PIN   PA5
#define LED_3_PIN   PA6
#define LED_4_PIN   PA7
#define LED_5_PIN   PC4
#define LED_6_PIN   PC5
#define LED_7_PIN   PB0
#define LED_8_PIN   PB1

LEDSet  led[8] = {LEDSet(LED_1_PIN),LEDSet(LED_2_PIN),LEDSet(LED_3_PIN),LEDSet(LED_4_PIN),
                  LEDSet(LED_5_PIN),LEDSet(LED_6_PIN),LEDSet(LED_7_PIN),LEDSet(LED_8_PIN)};
int i,j;

void setup() {
}

void loop() {
  for(j=0;j<14;j++){
    for(i=0;i<8;i++){
      if((i==j)||(i==(14-j))){
        led[i].LED_brightness(60);
      }else{
        led[i].LED_brightness(0);
      }
    }
    delay(500);
  }
}
