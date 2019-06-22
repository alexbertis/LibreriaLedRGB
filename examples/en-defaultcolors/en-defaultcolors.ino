/* 
 * en-defaultcolors.ino - Using LedRGB library
 * Showcases "defaultColor" function
 * 
 * By Alejandro Bertinelli
 * 
 * Created June 22, 2019
 * Last updated June 22, 2019
 */

/*
 * MIT LICENSE 3.0
 */


#include <LedRGB.h>
LedRGB myLED(9, 10, 11, CC);

void setup() {

}

void loop() {
  // Using all available colors for "defaultColor"
  miLED.defaultColor("white");
  delay(300);
  miLED.defaultColor("red");
  delay(300);
  miLED.defaultColor("green");
  delay(300);
  miLED.defaultColor("blue");
  delay(300);
  miLED.defaultColor("yellow");
  delay(300);
  miLED.defaultColor("orange");
  delay(300);
  miLED.defaultColor("violet");
  delay(300);
  miLED.defaultColor("turquoise");
  delay(300);
  miLED.defaultColor("grey");
  delay(300);
  miLED.defaultColor("maroon");
  delay(300);
  miLED.defaultColor("fuchsia");
  delay(300);
}
