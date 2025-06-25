//1D ARRAY        
//nodifying the array value..


void setup()
{
Serial.begin(9600);
  int array[5]={12,2,15,8,9};
  for(int i=100;i<105; i++){
    array[i-100]=i;
    Serial.println(array[i-100]);} 
  //array[100-100]=100 =>array[0]=100;data are modified..
  
}

void loop()
{

}