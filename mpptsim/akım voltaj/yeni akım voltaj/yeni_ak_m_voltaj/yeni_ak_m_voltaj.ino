#include <LiquidCrystal.h>
 
// LCD AYARLARI
 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
 
const int analogIn = 1; //ACS712 SENSOR BAĞLANTI PINI
 
int mVperAmp = 100; // 185 5A MODÜL İÇİN , 100 20A MODÜL İÇİN VE 66  30A MODÜL İÇİN
 
int RawValue = 0;
 
int ACSoffset = 2500;
 
double Voltage = 0; //VOLT HESABI
 
double Amps = 0;// AMPER HESABI
 
void setup() {
 

}
 
void loop()
 
{
 
RawValue = analogRead(analogIn);//MODUL ANALOG DEĞERI OKUNUYOR
 
Voltage = (RawValue / 1024.0) * 5; // VOLT HESABI YAPILIYOR
 
Amps = (((Voltage*1000) - ACSoffset) / mVperAmp); // AKIM HESAPLA
 
 
lcd.clear();//clears the display of LCD
 
delay(1000);//delay of 1 sec
 
lcd.display();

 
lcd.print(Voltage , 3);
delay(1000);//delay of 1 sec
lcd.print(RawValue , 3);
delay(1000);//delay of 1 sec
lcd.print(Amps , 3);
delay(1000);//delay of 1 sec
}
