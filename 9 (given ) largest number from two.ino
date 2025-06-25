// finding largest number




void setup()
{
  Serial.begin(9600);
  
  if(Serial.available()>0);
  {
   int p=7;
   int q=9;
    if(p>q){
    Serial.print(p);
      Serial.print (" is the largest number");
    }
    else{
      Serial.print(q);
      Serial.print (" is the largest number");
    }
  } 
}

void loop()
{
  
}