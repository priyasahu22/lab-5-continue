#include<iostream>
using namespace std;
int main()
{
 //comparing greatest of three numbers
 int a,b,c;
 cout<<"  Comparing greatest of three numbers:";
 cout<<" ENTER FIRST NUMBER: ";
 cin>>a;
 cout<<"\n enter second number: ";
 cin>>b;
 cout<<" enter third number: ";
 cin>>c;
 if(a>b && a>c)
 {
    cout<<" \n the greatest of three numbers: ";
    cout<<a;
 }
 
 else if(b>a && b>c)
 {

   cout<<" \n the greatest of three numbers: ";
    cout<<b;
 }
 else
 {
  
      cout<<" \n the greatest of three numbers: ";
      cout<< c;
 }
return 0;
}
