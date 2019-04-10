#include "Keypad.h"

class PrimeCheck{
 public:
    int x, i=0, j=0, rem, b=1, bin=0, count=0, st, temp;
    char str[999];
    void GetInput();
    void output();
    void light();
};


void PrimeCheck::GetInput(){
  x=num;;
  temp=x;
}

void PrimeCheck::output(){
   char k= keypad.getKey();

  //CHECK IF PRIME
  
  for(i=2;i<x;i++){
    if(x%i==0){
      count++;
    }
  }
  
  if(count==0){  //PRIME
  
      //CONVERT TO BIN
      while(temp!=0){
        rem=temp%2;
        temp=temp/2;
        bin+=rem*b;
        b=b*10;
      }
      
      
      itoa(x, str, 2);
      strrev(str);
      st=atoi(str);
      
      if(st==bin){
      return 1;   
      }
      else{
        return 0;
      }
    }
  
}
