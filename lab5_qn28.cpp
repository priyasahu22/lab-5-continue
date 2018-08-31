#include<iostream>
using namespace std;
// sum all the even numbers between 1 to 100

int main()
{
   int i=1,sum=0,n; 
  cout<<"\n  the sum of all even numbers between 1 to n:";
  cout<<"\n till which number u want sum:";
  cin>>n;
  
   while(i<=n)
{
   if(i%2==0)
    {
     sum=sum+i;
     }
   i++;
  
}
cout<<"\n the sum is :"<<sum;
return 0;
}
