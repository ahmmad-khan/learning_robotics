//1D ARRAY


/*array means store varibale data together
 in one operator. how to assign:
             int array[5]={1,34,45,2,4}
    5 means (5 varibale here)  and in second bracket all are varible data sequencely.
    it store like : char array[3];
                    array [0]='q';
                    array [1]='x';
                    array [2]='y';
       it store like row matrics & start with block 0..*/             



void setup()
{
Serial.begin(9600);
  int array[5]={12,2,15,8,9};
  for(int i=0;i<5; i++){
    Serial.println(array[i]);} 
  
  //array[i] refers to the data store at index i.
  //i means element number not highest data value.
}

void loop()
{

}