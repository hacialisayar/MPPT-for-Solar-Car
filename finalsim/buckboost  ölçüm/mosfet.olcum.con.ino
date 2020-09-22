#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
 
const int analogIn = 0; 
const int analogIn1 = 1; 

float sensorValue1 = 0;
float sensorValue2 = 0;
float voltageValue = 0;
float currentValue = 0;
float Power_now = 0;    
int mVperAmp = 100; 
int RawValue = 0; 
int ACSoffset = 2500; 
double Voltage = 0; 
double Amps = 0;
 
void setup() {
 
lcd.begin(16, 2);
}
 
void loop()
 
{   
 sensorValue1 = analogRead(A0);
 sensorValue2 = analogRead(A1);
 
RawValue =  sensorValue1;
 
Voltage = (RawValue / 1024.0) * 5; 
 
Amps = (((Voltage*1000) - ACSoffset) / mVperAmp); 

  voltageValue= (sensorValue2 * 5 /1024.0) *10;

  lcd.setCursor(0, 0);
  Power_now = voltageValue * Amps;
    
  lcd.print("Ppv=");
  lcd.print(Power_now);
  lcd.print("W");  
  lcd.setCursor(0, 1);
  lcd.print("V=");
  lcd.print(voltageValue);
  lcd.print("V I=");
  lcd.print(Amps);
  lcd.print("A");

  
}
