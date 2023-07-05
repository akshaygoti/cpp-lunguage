#include<iostream>
using namespace std;
class Box{
    int l,w,h;
    friend Box add(Box , Box);

    public :
    void setdata(int a,int b,int c){
        l  = a;
        w  = b;
        h  = c;
    }
    int getdata(){
        return l*w*h;
    }
};
    Box add (Box x,Box y){
    Box t;                        //object as argument
    t.l = x.l+y.l;           
    t.w = x.w+y.w;
    t.h = x.h+y.h;
    return t;                     //object as return
    }

    int main(){
        Box a,b,c;
        a.setdata(2,5,8);
        cout<<"volume of Box A is"<<a.getdata()<<endl;
        b.setdata(8,9,7);
        cout<<"volume of Box B is"<<b.getdata()<<endl;
        c=add(a,b);
        cout<<"volume of Box C is"<<c.getdata()<<endl;
    }