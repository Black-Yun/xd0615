int pin[8]={2,3,4,5,6,7,8,9};
unsigned char Show[10][8]=
{{0,0,0,0,0,0,1,1},
 {1,0,0,1,1,1,1,1},
{0,0,1,0,0,1,0,1},
{0,0,0,0,1,1,0,1},
{1,0,0,1,1,0,0,1},
{0,1,0,0,1,0,0,1},
{0,1,0,0,0,0,0,1},
{0,0,0,1,1,1,1,1},
{0,0,0,0,0,0,0,1},
{0,0,0,0,1,0,0,1}
};
void setup()
{
  int i=0;
  for (i=2;i<10;i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
  }
}
void loop()
{
  int i=0;
  int j=0;
  for(j=0;j<10;j++)
  {
  for(i=0;i<9;i++)
  {
  digitalWrite(pin[i],Show[j][i]};
  }
  delay(1000);
  }
  }