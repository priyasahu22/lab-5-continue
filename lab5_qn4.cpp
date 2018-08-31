#include<iostream>
using namespace std;

// enter a number and check whether it is divisible by 11 and 5
int main()
{  
   int a;
   cout<<"\n Enter any number:";
   cin>>a;
  if(a%5==0 && a%11==0)
    {
       cout<<endl<<"the no. is divisible by 5 and 11 both:";
     }
  else
     {
        cout<<"the no. is not divisible by 5 and 11 both:";
 }
 return 0;
}
