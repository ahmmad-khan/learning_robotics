// While LOOP controlling...

void setup()
{
 Serial.begin(9600);
  // for infinity while use while (1){code}..
  while(1) 
  {
    Serial.println("UNO ");
    if(Serial.read()=='b'){
      break;}
  }
 Serial.print("Loop Broke  ");// after entering b this msg will be shown..
}

void loop()
{

}