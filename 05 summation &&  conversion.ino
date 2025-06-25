//introducing to operator
//operator: arithmatic , comparison, boolean
// arithmatic : + - * /
// comparison : < , > , >= , <= , == (equal) , != (not equal to)
//boolean : && (AND) , ||(OR).

//two Simple Program


void setup()
{
  //summation
  
 int a=12, b=13;
 int sum= a+b;
  
 Serial.begin(9600);
Serial.println(sum);
  

//feet to inches converter

float feet=5.67;
float inch;
 
  inch=feet*12;
  
  Serial.println(inch);
}

void loop()
{

}
