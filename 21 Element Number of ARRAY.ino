//1D ARRAY        
//finding array element size ...

/* function sizeof =element size in byte..
            int=2 byte
            float=4 byte
            char=1 byte
    sizeof (array) means total size of variable in byte .
    if i divide it in the size of first block value size, i can 
    find the element number of array .*/



void setup()
{
Serial.begin(9600);
  char array [] ={'a','e','t','p'};
  
  Serial.print(sizeof(array)/sizeof (array[0]));
}

void loop()
{

}