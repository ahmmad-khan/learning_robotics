//vbariable types :
//this all are data types:
// 1. integer (int) 1,2,3,4,5,6
// 2. float 2.22 , 3.65
// 3. character (char) 'a','b','c'
// 4. string "blue" , " bike " "yes", "word" , "combination of character "
// if you write anyrthing in your code but that doesnt affect on code then use tghis double slash
void setup()
{
  Serial.begin(9600);
 // variable declaration process : data type variable name:value 
  
  int robotics=3500;
  String fahim = "welcome";
  
  
  //only for string  you must use quatation symbol on value but not name .
  // S letter should be uppercase in arduino in everywhere .
  
  Serial.println(robotics);
  Serial.println(fahim);
  
}  
void loop()
{
}
