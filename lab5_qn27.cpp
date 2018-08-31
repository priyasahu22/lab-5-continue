#include<iostream>
using namespace std;

//to sum natural number 1 to n
int main()
{
   int i=1,n;
   int sum=1;
 cout<<"\n the sum of the number from 1 to n:";
 cout<<"\n enter any number to which u want to sum: ";
 cin>>n;
 
 while(i<n)
  {   
     i=i+1;
    sum=sum+i;
 }
 
 cout<<"\n the sum upto "<<n<<" = "<<sum;
return 0;
}
 
    
  
