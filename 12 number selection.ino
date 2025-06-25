// positive or negative number ..


void setup()
{
  Serial.begin(9600);
  
  {  int x=0;
   
   if(x==0) {
     Serial.print(x);
     Serial.print(" is zero");}
   
    else if(x>0)
    { Serial.print(x);
    Serial.print(" is a postive number");}
   else{
     Serial.print(x);
     Serial.print(" is a negative number ");}
  
  } 
  
  
}

void loop()
{
  
}