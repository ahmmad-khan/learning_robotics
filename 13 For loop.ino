//for:Loop
// for (starting ; condition; increement/ decrement){ code...}


void setup()
{
   Serial.begin(9600);
     
  for( int a=1 ; a<=100 ; a=a+3)  //you can use here a++ for 1 incresement..
  {
       Serial.print(a);
       Serial.println("I LOVE YOU");
  delay(100);}
     
}

void loop()
{

}