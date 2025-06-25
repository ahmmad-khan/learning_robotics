// While LOOP
//finding even number using while loop 
// while (condition){code...}

/* for infinity FOR loop 
        for(;;){code...} . its like void loop function.*/

void setup()
{
 Serial.begin(9600);//int would be write in out for while loop
 int a=1;
   while(a<=100){
   
   if(a%2==0){
     Serial.println(a);}
   a++;}
}

void loop()
{

}