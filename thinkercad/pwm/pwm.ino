#define pot A4
void setup()
{
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  int leitura=analogRead(pot);
  analogWrite(3,map(leitura,0,1023,0,255));
  delay(100);
  Serial.println(map(leitura,0,1023,0,255));
}
