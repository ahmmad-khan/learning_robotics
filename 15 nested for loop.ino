//Nested for loop ( for loop between for loop)
//CRETing PATTERN by nested for loop

void setup()
{
   Serial.begin(9600);
  for( int i=0 ; i<5; i++){
    
    for(int k=0 ; k<3 ; k++)
    {Serial.print(" LOVE ");}
  
 Serial.println();  //for using blank line for every print..
  }
   
}

void loop()
{

}