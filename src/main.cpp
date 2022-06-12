#include <Arduino.h>

const int NUM_LED = 5;

struct led
{
  int redPin;
  int greenPin;
  int bluePin;
}

led leds[NUM_LED];
int lightPin;

void setup()
{
  // Init led pins
  leds[0] = {0, 1, 2};
  leds[1] = {3, 4, 5};
  leds[2] = {6, 7, 8};
  leds[3] = {9, 10, 11};
  leds[4] = {12, 13, 14};
  // Setup all led pins for output
  for (int i = 0; i < NUM_LED, i += 1)
  {
    pinMode(leds[i].redPin, OUTPUT);
    pinMode(leds[i].greenPin, OUTPUT);
    pinMode(leds[i].bluePin, OUTPUT);
  }
  // Setup photoresistor pin for input
  lightPin = 15;
  pinMode(lightPin, INPUT);
}

void loop()
{
  // Do stuff
}