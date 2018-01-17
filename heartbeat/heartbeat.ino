//Jonathan Richter Heartbeat
//Studio0

unsigned long time = 0;
unsigned long t1 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT); 
}

void loop()
{
  t1 = millis();
  time = millis();
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  Serial.print("Time in seconds is: ");
  Serial.println(time/1000); 
  Serial.print("Millis = ");
  Serial.println(t1);
}

