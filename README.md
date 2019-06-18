# LibreriaLedRGB
Librería en español para un control simplificado de cualquier LED RGB para Arduino.


# Cómo usarla
La utilización de la librería es muy sencilla, a continuación describimos los pasos necesarios.

## Inicialización de la librería

- Debes descargar e instalar la librería [tal y como aparece en esta página oficial de Arduino](https://www.arduino.cc/en/Guide/Libraries)
- En las primeras líneas de tu programa, utiliza `#include <LedRGB.h>`.

## Creación del objeto para un LED

El objeto que utilizaremos será de tipo `LedRGB`. A continuación deberemos definir un objeto del tipo `LedRGB miLED(pinRed, pinGreen, pinBlue, modoCACC);`

## Funciones

- `ponerColor(valorRojo, valorVerde, valorAzul);` asigna los valores de 0 a 255 para cada uno de los tres colores.
- `sumar(sumarRojo, sumarVerde, sumarAzul);` suma al valor actual del LED.
- `restar(quitarRojo, quitarVerde, quitarAzul);` resta desde el valor al que está puesto el LED hasta cero.
