#include<iostream>
using namespace std;
int main(){
   //left shift operator <<
   //right shift operator >>
   //0101 --> 1010 (10);
   int i = 5; //0101 
   int pos = 1;
   //getBit ,//setBit, //ClearBit ,//updateBit
   //Bitmask
   int bitMask= (1<<pos);
   
   //getBit --> i & bitMask
   int getBit=(i & bitMask); // prints the value of bit at the given pos (0 or 1)  
   if(getBit==0){
      cout<<"Bit at pos "<<pos<<" is zero"<<endl;
   } 
   else{
      cout<<"Bit at pos "<<pos<<" is 1"<<endl;
   }

   //setBit
   int setBit=(i | bitMask);
   cout<< setBit<<endl; //sets the bit to 1 at the given pos

   //clearBit
   int clearBit = (i & ~(bitMask));  //~ means not.. sets the bit to zero from 1;
   cout<<clearBit<<endl;

   //updateBit --take user input if user wants to update bit to
   //1 -- setBit
   //0 -- clearBit
   
}