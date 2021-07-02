#include<LiquidCrystal.h>

LiquidCrystal lcd(42, 2, 37, 35, 33, 31);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
Serial.begin(9600);
lcd.print("Accessing");
delay(500);
lcd.clear();
lcd.print("Accessing");
lcd.setCursor(0,1);
lcd.print("MQ135");
delay(500);
lcd.clear();
lcd.print("Accessing");
lcd.setCursor(0,1);
lcd.print("MQ135.");
delay(500);
lcd.clear();
lcd.print("Accessing");
lcd.setCursor(0,1);
lcd.print("MQ135..");
delay(500);
lcd.clear();
lcd.print("Accessing");
lcd.setCursor(0,1);
lcd.print("MQ135...");
delay(500);
lcd.clear();
lcd.print("Accessing");
lcd.setCursor(0,1);
lcd.print("MQ135....");
delay(500);
lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  
  lcd.clear();
  delay(200);
  int sv1=analogRead(A2);
  int sv2=analogRead(A3);


lcd.print("AQI:");
lcd.setCursor(4,0);
lcd.print(sv2);

delay(300);

/*lcd.setCursor(2,1);
lcd.print(" Air quality sensor");
delay(3000);

lcd.clear();
lcd.blink();
delay(4000);

lcd.setCursor(7,1);
delay(3000);

lcd.noBlink();
lcd.cursor();
delay(4000);

lcd.noCursor();

lcd.clear();*/
}
