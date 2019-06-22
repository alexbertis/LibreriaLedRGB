#include <LedRGB.h>

LedRGB holi(9, 10, 11, 1);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  holi.ponerColor(255, 0, 0);
  delay(300);
  holi.ponerColor(0, 255, 0);
  delay(300);
  holi.ponerColor(0, 0, 255);
  delay(300);
}
