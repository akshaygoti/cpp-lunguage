#include<iostream>
using namespace std;
class Box{
    int l,w,h;
    public:
    void setdata(int a,int b,int c){
        l=a;
        w=b;
        h=c;
    }
    int getdeta(){
        return l*w*h;
    }
    friend Box operator+(Box m,Box n){
        Box t;
        t.l+m.l+n.l;
        t.w=m.w+n.w;
        t.h=m.h+n.h;
        return t;
    }
};
  int main()
  {
    Box b,a,c;
    b.setdata(2,2,2);
    cout<<"Box B volume is:"<<b.getdeta()<<endl;
    a.setdata(3,3,3);
    cout<<"Box A volume is:"<<a.getdeta()<<endl;

    c=a+b;
    cout<<"Box C volume is:"<<c.getdeta()<<endl;
  }