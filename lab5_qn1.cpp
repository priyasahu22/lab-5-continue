#include<iostream>
using namespace std;
int main()
{
  //enter any two numbers and print the greatest of the two
 cout<<endl<<"enter any two numbers:";
 int a,b;
 cout<<"\n enter first number  ";
 cin>>a;
 cout<<"\n enter second number  ";
 cin>>b;
 if(a>b)
 {
   cout<<"\n GREATEST OF TWO NUMBER IS  ";
   cout<<"  "<<a;

 }

  else if(b>a)
  {   
     cout<<"\n GREATEST OF TWO NUMBER IS  ";
     cout<<"  "<<b;

  }
 else
  {       
        cout<<"\n the numbers are equal:";
}
 
return 0;
}

