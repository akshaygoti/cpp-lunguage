//singal inharitance
#include<iostream>
using namespace std;
class Base
{
      protected:
      int n;
      public:
      void setN(){
        cout<<"Enter N:";
        cin>>n;
      }
};
class Derived:public Base{
    public:
    void getN(){
        cout<<"value of n is:"<<n<<endl;
    }
};
int main()
{
    Derived d;
    d.setN();
    d.getN();
}
