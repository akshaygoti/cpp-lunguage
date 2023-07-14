//this pointer
#include<iostream>
using namespace std;
template<class T>
void display (T t1)
{
    cout<<"Displaying template:"<<t1<<endl;
}
   template <class x, class y>
//    void add(x a,y b)
// {
//      cout<<"addtion template:"<<a+b<<endl;
// }
   void display (x a,y b)
{
   cout<<"Displaying template:"<<a<<endl; 
}
   int main()
{
    display(200);
    display(12.56);
    display('G');
    display('G',1.25);
    display('x',1.25);
    display(25,1.25);

    // add(2,2.5)
    // add('B',5.7);
}