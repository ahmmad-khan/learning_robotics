//for:Loop
// for (starting ; condition; increement/ decrement){ code...}
// Number divisible by 7..
// and how much are number divisible by between 100 to 500..
void setup()
{
   Serial.begin(9600);
   
  int count=0;
  for( int a=100; a<=500;a++)
  { 
    if(a%7==0)
    { Serial.println(a); count++ ; } /* for each print in for loop it store the number of count
                                      incresing by +1.while print count it show the total count digit..
                                      and this count should be print outside of for function tpo rcv total amount*/
       
  }
  Serial.print( "Total number divisible by 7 are : ");
  Serial.print(count);
    
}

void loop()
{

}