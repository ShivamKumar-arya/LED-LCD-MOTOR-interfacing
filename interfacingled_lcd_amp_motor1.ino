
#include <LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
const int ledPin=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
char x;
void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello TinkerCAD!");
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()>0){
    x=Serial.read();
    if (x=='1'){
      clockwise();
    }
    else{
      if (x=='2'){
        anticlockwise();
      }
      else{
        turnoff();
      }  
    }
  }
}
void clockwise(){
   digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(ledPin,HIGH);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Status: ON");
  lcd.setCursor(0,1);
  lcd.print("Direction:Clockwise");
}
void anticlockwise(){
   digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(ledPin,HIGH);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Status: ON");
  lcd.setCursor(0,1);
  lcd.print("Direction:AntiClockwise");
}
void turnoff(){
   digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(ledPin,LOW);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Status: OFF");
  lcd.setCursor(0,1);
  lcd.print("Direction:------");
}

