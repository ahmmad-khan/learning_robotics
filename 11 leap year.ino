// finding largest number among three..


void setup()
{
  Serial.begin(9600);
  
  {  int x=1900;
   if (x%4==0 && x%100!=0 || x%400==0) //thats the condition to be leap year .(%=modulas)..
   
   {
     Serial.print(x);
    Serial.print(" is leap year");}
   else{
     Serial.print(x);
     Serial.print(" isnot a leap year ");}
  
  } 
  
  
}

void loop()
{
  
}