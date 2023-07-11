#include<iostream>
using namespace std;
class Base{
    protected:
    int m;
    public:
    void setm(){
        cout<<"Enter m:";
        cin>>m;
    }
};
class Derives1 : public Base{
    int n;
    public:
    void setn(){
        cout<<"Enter n:";
        cin>>n;
    }

void addition(){
    cout<<"addition of m amd n is:"<<m+n<<endl;
     }
};
class Derives2: public Base{
    int n;
    public:
    void setn(){
        cout<<"enter n:";
        cin>>n;
    }
    void product(){
        cout<<"product of m amd n is:"<<m*n<<endl;
    }
};
int main(){
    Derives1 d;
    d. setm();
    d. setn();
    d. addition();

    Derives2 b;
    b. setm();
    b. setn();
    b. product();
}
