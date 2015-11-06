#include <TVout.h>
#include <fontALL.h>

TVout TV;

int knob_0_pin = A0;
int knob_1_pin = A1;
int knob_2_pin = A2;
int knob_3_pin = A3;
int knob_4_pin = A4;
int knob_5_pin = A5;

void setup() {
//  Serial.begin(9600);

  TV.begin(PAL);
  
  /*
  The TVout library has very primitive memory management
  If a string is used only once, use printPGM(PSTRT("text")) instead of println
  */
  TV.select_font(font8x8);
  TV.println(" ");
  TV.println(" ");
  TV.println(" ");
  TV.printPGM(PSTR("     DEBTRON"));
  TV.select_font(font4x6);
  TV.printPGM(PSTR(" TM"));
  TV.println(" ");
  TV.println(" ");
  TV.println(" ");
  TV.printPGM(PSTR("    Let them solve the problem!"));
  
  //beep once to know if it's alive
  TV.tone(110,1000);

  TV.delay(9000);
  TV.noTone();
}

void loop() {
  int knob_0 = analogRead(knob_0_pin);
  int knob_1 = analogRead(knob_1_pin);
  int knob_2 = analogRead(knob_2_pin);
  int knob_3 = analogRead(knob_3_pin);
  int knob_4 = analogRead(knob_4_pin);
  int knob_5 = analogRead(knob_5_pin);

  //map potensiometer input to data bounds
  unsigned long int value_0 = map_ll(knob_0, 0, 1023, 1, 4381376);
  int value_1 = map(knob_1, 0, 1023, 1, 10815);
  int value_2 = map(knob_2, 0, 1023, -9290, 9290);
  int value_3 = map(knob_3, 0, 1023, 0, 9290);
  int value_4 = map(knob_4, 0, 1023, 32, 3817);
  int value_5 = map(knob_5, 0, 1023, 1, 751);
  
  //calibrate starting value, locks middle lock position to the base value
  if (value_0 > 100000 && value_0 < 160000 ) { // area
    value_0 = 131957;
  }
  if (value_1 > 1300 &&  value_1 < 2000 ) { // immigrants
    value_1 = 1500;
  }
  if (value_2 > 1700 &&  value_2 < 3500 ) { // unemployed
    value_2 = 3000;
  }
  if (value_3 > 2400 &&  value_3 < 3000 ) { // pensioners
    value_3 = 2761;
  }
  if (value_4 > 400 &&  value_4 < 800 ) { // min. wage
    value_4 = 586;
  }
  if (value_5 > 260 &&  value_5 < 340 ) { // members of parliament
    value_5 = 300;
  }
  
// long int value_6 = 315500;);
// PROPRIETARY, PATENTED ALGORITH HAS BEEN REMOVED FROM THIS SOURCE CODE
  unsigned long int value_6 =  (value_0*35/100 + value_1*10/100 + value_2*20/100 + value_3*15/100 + value_4*15/100 + value_5*5/100) * 6.742173309114222;


//  Serial.print(" 0: ");
//  Serial.print(value_0);
//  Serial.print(" 1: ");
//  Serial.print(value_1);
//  Serial.print(" 2: ");
//  Serial.print(value_2);
//  Serial.print(" 3: ");
//  Serial.print(value_3);
//  Serial.print(" 4: ");
//  Serial.print(value_4);
//  Serial.print(" 5: ");
//  Serial.println(value_5);

  TV.clear_screen();
  
  TV.select_font(font8x8);
  TV.printPGM(PSTR("     DEBTRON"));
  TV.select_font(font4x6);
  TV.printPGM(PSTR(" TM"));
  
  TV.println(" ");
  TV.println(" ");
  TV.println(" ");
  
  TV.select_font(font4x6);

  TV.printPGM(PSTR("   IMMIGRANTS      "));
  TV.print(value_1);
  TV.println(" K");

  TV.printPGM(PSTR("   UNEMPLOYED      "));
  TV.print(value_2);
  TV.println(" K");

  TV.printPGM(PSTR("   PENSIONERS      "));
  TV.print(value_3);
  TV.println(" K");

  TV.printPGM(PSTR("   MIN. WAGE       "));
  TV.print(value_4);
  TV.println(" Euros");

  TV.printPGM(PSTR("   MEM. PARLIAMENT "));
  TV.print(value_5);
  TV.println(" ");

  TV.printPGM(PSTR("   COUNTRY SURFACE "));
  TV.print(value_0);
  TV.println(" Km^2");

  TV.println(" ");
  TV.println(" ");
  TV.println(" ");

  if (value_6 > 0) {
    TV.printPGM(PSTR("DEBT"));
  }
  else {
    TV.printPGM(PSTR("SURPLUS"));
    value_6 = -1 * value_6;
//    TV.tone(110,50);
  }

  TV.println(" ");
  TV.println(" ");
  TV.select_font(font6x8);
  TV.print(value_6);
  TV.printPGM(PSTR("000000"));
  TV.select_font(font4x6);
  TV.printPGM(PSTR(" Euros"));

  TV.delay(600);
  //  TV.tone(110,100);
}

//map() equivellant for long long numbers
long long int map_ll(int x, int in_min, int in_max, long long int out_min, long long int out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

