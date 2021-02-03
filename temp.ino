int temp = A1;
int val=0;

void setup()
{
  pinMode(temp, INPUT);
  Serial.begin(9600);
}

void loop()
{
 float val=analogRead(temp);
  Serial.println(val);
  
}
