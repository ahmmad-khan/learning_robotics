// finding largest number among three..


void setup()
{
  Serial.begin(9600);
   
  {
    int a=13,b=922, c=133;
  if(a>b && a>c)
  {  Serial.print(a);
   Serial.print(" is the largest number ");}
    
 else if ( b>c)
    { Serial.print(b);
     Serial.print(" is the largest number ");}
    
    else 
    { Serial.print(c);
      Serial.print(" is the largest number");
    }
    
  
  }     
}

void loop()
{
  
}