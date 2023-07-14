#include<iostream>
using namespace std;
class test
{
    public:
    static int a;
    test()
    {
        cout<<"test calling..."<<endl;
        ++a; 
    }
    static int member(){
        return a;
    }
};
int test :: a=50;
int main()
{
    cout<<"staring point:"<< test::member()<<endl;
    test t1,t2;
    cout<<"Ending "<< test::member()<<endl;
}