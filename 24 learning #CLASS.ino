//USE CLASS


class calculation{
int a,b,c;
 public:
  void set(int p,int q,int r){
    a=p; b=q; c=r ;}
  
  void sum(){
    Serial.print(a+b+c);
    Serial.println(" : is the summation");}
                 
   void multiply(){
    Serial.print("Multiplication : ");
      Serial.println(a*b*c);}
    };


void setup()
{
 Serial.begin(9600);
  
  calculation x;
  x.set(4,5,6);
  x.sum();
  x.multiply();
}

void loop()
{

}

