//if i use variable declaration in setup function iu cant use it in looop function thats called local variable 
// if i use varibale declaration in the outside of loop& setup function i can use it in both function thats ccalled global variable ..

int github = 18;



void setup()
{
 Serial.begin(9600);
  Serial.println(github);
}

void loop()
{
 Serial.print(github);
}