#include<iostream>
using namespace std;

// print the alphabatical character from a to z

int main()
 { 
  int w,x,y,z,i;
  w=int('A');
  x=int('Z');
  y=int('a');
  z=int('z');
  cout<<"\n the ascii value of A :"<<int('A');
  cout<<"\n the ascii value of Z :"<<int('Z');
  cout<<"\n the ascii value of a :"<<int('a');
  cout<<"\n the ascii value of z :"<<int('z');
  cout<<"\n small letter alphabets starts from:";
  i=y;
  while(i<z+1)
  {
    cout<<endl<<char(i);
    i++;
  }
 return 0;

}
  
 
