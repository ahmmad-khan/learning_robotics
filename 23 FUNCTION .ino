//USE FUNCTION..     

void setup()
{
  Serial.begin(9600);
  
 int a=largestnumber(-3,-1,-4);
   Serial.print(a);
}

void loop()
{

}

int largestnumber(int x,int y,int z){
  if (x>y && x>z){
    return x;}
  if (y>x && y>z){
    return y;}
  if (z>x && z>y){
    return z;}}