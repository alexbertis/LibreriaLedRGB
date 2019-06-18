/*
  LedRGB.h - Librería para encender LEDs RGB con Arduino
Creada por Alejandro Bertinelli, el 27 de Junio de 2017
Modificada el 28 de Junio de 2017
Versión 0.1.3
Lanzado bajo licencia --- 
*/
#ifndef LedRGB_h
#define LedRGB_h
#include <arduino.h>
class LedRGB 
{
  public:
   LedRGB(int pinR, int pinG, int pinB, int modo);
   void ponerColor(int CR, int CG, int CB);
   void ponerColorCA(int crA, int cgA, int cbA);
   void ponerColorCC(int crC, int cgC, int cbC);
   void colorPredefinido(String color);
   void sumar(int sumR, int sumG, int sumB);
   void restar(int restR, int restG, int restB);
   void apagar();
   void testear();
   void efectoFlash(int delON, int delOFF);
   void efectoFade(int fR, int fG, int fB);
   
  private:  
   int _pinR;
   int _pinG;
   int _pinB;
   int _modo;
   
   int _CR;
   int _CG;
   int _CB;
   
   int _crA;
   int _cgA;
   int _cbA;
   int _crC;
   int _cgC;
   int _cbC;
   
   int _sumR;
   int _sumG;
   int _sumB;
   int _restR;
   int _restG;
   int _restB;
   
   int _delON;
   int _delOFF;
   
   int _fR;
   int _fG;
   int _fB;
   int _valR = 0;
   int _valG = 0;
   int _valB = 0;
	
	String _color;
	String _colorFade;
};
#endif