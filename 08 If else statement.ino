// IF else conditional statement .
/*if (conditio1 , condition 2..)
      {  code....
    }
  else {
       code ...
    } */
/* you can use here else but not for exact input 
   if you use "IF" you should use exact value to print serial monitor ...*/

//to prevent blank output at first use if(serial.available()>০).


void setup()
{
Serial.begin(9600);

}



void loop()
{

if(Serial.available()>0);

 { 
 char x=Serial.read();
 if (x=='r' ||x=='R'){
  
  Serial.println("Today is rainy day");
}

 if (x=='s'|| x=='S') {
   Serial.println("Today is Sunny Day"); 
   }
   delay (1000);
   


}
}
