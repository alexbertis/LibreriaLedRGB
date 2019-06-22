/* 
 * funcionTestear.ino
 * Prueba todos los diodos R, G y B del LED:
 * -300ms ROJO
 * -300ms VERDE
 * -300ms AZUL
 * -500ms BLANCO (todos RGB)
 * 
 * Por Alejandro Bertinelli
 * 
 * Escrito el 29 de Junio de 2017
 * Última actualización el 29 de Junio de 2017
 */
 
/*
 * LICENCIAS:
 * http://www.apache.org/licenses/LICENSE-2.0
 */
#include <LedRGB.h>
LedRGB miLED(9, 10, 11, 1);

void setup() {

}

void loop() {
  // Usamos la función "testear", que prueba que el Rojo, Verde y Azul funcionen correctamente
  miLED.testear();
}
