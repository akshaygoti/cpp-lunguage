#include<iostream>
using namespace std;
class test{
    int m;
    public:
    test()
    {
        cout<<"Defualt constructor is called..."<<endl;
        cout<<"Enter m"<<endl;
        cin<<"m"<<endl;
    }
    ~test()
    {
      cout<<"Defualt constructor is called..."<<endl; 
    }
    test(int a)
    {
      cout<<"parameterized constructor is called..."<<a<<endl;  
    }
    test(char a)
    {
        cout<<"parameterized constructor is called..."<<a<<endl;
    }
    void getdata()
    {
        cout<<" value of m"<<int main(int argc, char const *argv[])
    }

};
int main()
