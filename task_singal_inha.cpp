#include<iostream>
using namespace std;
class Base
{
      protected:
      int n,i;
};
class Derived:public Base{
    public:
    void getN(){
        cout<<"Enter number:";
        cin>>n;
        for(i=0;i<=n;i++){
            cout<<"sqare of is:"<<(i*i)<<endl;
        }
    }
};
int main()
{
    Derived d;
    d.getN();
}