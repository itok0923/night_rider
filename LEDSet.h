//LEDSet.h

#ifndef LEDSet_h
#define LEDSet_h

class LEDSet {
  public:
    LEDSet(int pin);
    void LED_blink();
    void LED_on();
    void LED_off();
    void LED_write(int stat);
  private:
    int LEDpin;
    int LEDstat;
};

#endif
