//taking input from serial monitor,,,


void setup()
{
Serial.begin(9600);

// for input integer num use Serial.parseInt();
//and for store and print data use int X=Serial.parse Int();
//for input you must use it void loop..
  
// for character num use char P=Serial.read()
 //for string number use string U=Serial.readString();
 // use delay for string and character
}

void loop()
{
//you  must use delay(1000); for better read otherwise you cant find it ..
String P=Serial.readString();
  Serial.println(P);
  delay(1000);
}