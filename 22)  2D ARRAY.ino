//2D ARRAY.....       

void setup()
{
  Serial.begin(9600);
  
  char array[3][4]={{'q','p','t','s'},
                    {'1','2','5','9'},
                    {'Q','R','V','G'}};

  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      
      Serial.print(array[i][j]);
      Serial.print(" ");
    }
 Serial.println(" ");
  }
}

void loop()
{

}