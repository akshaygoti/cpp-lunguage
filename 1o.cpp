//fibonacci series 1,2,3,5,8,13...n.
#include<iostream>
using namespace std;
int main()
{
   int n,a=0,b=1,c,i;
   cout<< "Enter a number of fibonacci series..";
   cin>>n;
   for(i=1;i<=n;i++)
   {
    cout<<" "<<a;
    c=a+b;
    a=b;
    b=c;
   }
   
   
}