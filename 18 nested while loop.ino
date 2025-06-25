// While LOOP controlling...

void setup()
{
 Serial.begin(9600);
  // for infinity while use while (1){code}..
  while(1){
    if(Serial.read()=='s'){
      while(1){
       Serial.println("UNO ");
       if(Serial.read()=='b'){
          break;
            } 
      }
  
  Serial.println("Loop Broken "); //start pressin s and break pressing b
    }
  }
}

void loop()
{

}