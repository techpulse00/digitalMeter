#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 10, 4, 5, 6, 7);

double duration = 0;

double distance = 0; 

void setup()

{

lcd.begin(16,2);

lcd.print("   made with");

lcd.setCursor(0, 2);

lcd.print(" mostafa seyedi");

analogWrite(11, 120);

analogWrite(3, 255);

pinMode(12, OUTPUT);

pinMode(13, INPUT);

delay(5000);

}

void loop()

{

delayMicroseconds(2);

digitalWrite(12 , LOW );

delayMicroseconds(10);

digitalWrite(12 , HIGH);

duration = pulseIn(13 , HIGH);

distance = (duration / (58));

lcd.print("distance:");

lcd.print(distance);

lcd.print("cm");

lcd.setCursor(0, 2);

lcd.print("tech pulse 4 you"); 

delay(500);

lcd.clear();

}