#include<iostream>
using namespace std;
class test{
    public:
    static int a;
    test()
    {
        cout<<"test calling..."<<endl;
        ++a;
    }
};
int test :: a=500;
int main()
{
    cout<<"staring point:"<<test :: a<<endl;
    test t1,t2;
    cout<<"ending point test:"<<test::a<<endl;
}