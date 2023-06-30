#include<iostream>
using namespace std;
class Test
{

    public :
    Test()
    {
        cout<<"Defulat constructor type call..."<<endl;
    }
    Test (int a)
    {
        cout<<"parameterized constructor type a:"<<a<<endl;
    } 
    Test(char a)
    {
        cout<<"parameterized constructor type a:"<<a<<endl;
    }
};
int main()
{
    Test t,b(10),a('A');
}