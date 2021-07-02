void setup()
{
pinMode(A3,INPUT);
Serial.begin(9600);
}
void loop()
{
int sv=analogRead(A3);
delay(200);
Serial.print("AQI=");
Serial.print(sv);
Serial.print("ppm");
Serial.println(" ");
}
