//this poiter
#include<iostream>
using namespace std;
class Base{
    public:
    virtual void dis()
    {
        cout<<"Base called..."<<endl;
    }
};
class Derived:public Base{
    public:
    void dis()
    {
        cout<<"Derived called..."<<endl;
    }
};
int main(){
    Base *p,b;
    Derived d;
    p = &b;
    p->dis();

    p=&d;
    p->dis();
}