 #include<iostream>

using namespace std;

 int main()
 {
   int a;
   cout<<"\n ENTER A NUMBER:";
   cin>>a;

   // enter any numbers and check for positive negative and zero
  
   if(a>0)
   { 
     cout<<"\n Entered number is positive";
   }
 
   else if(a<0)
   {
     cout<<"\n Entered number is negative";
   }
 
  else
  {
      cout<<"\n Entered number is zero";
  }
  return 0;
 }
