#include<iostream>
using namespace std;
class student{
    int admno;
    char sname[20];
    float eng,sci,maths,total;
    float ctotal(){
        return eng+sci+maths;
    }
    public:
    void Takedata(){
       cout<<"Enter admno:";
       cin>>admno;
       cout<<"Enter sname no:";
       cin>>sname;
       cout<<"Enter eng marks:";
       cin>>eng;
       cout<<"Enter sci marks:";
       cin>>sci;
       cout<<"Enter maths marks:";
       cin>>maths;
       total=ctotal();
    }
    void showdata(){
        cout<<"admno:"<<admno<<endl;
        cout<<"sname:"<<sname<<endl;
        cout<<"sci marks:"<<sci<<endl;
        cout<<"eng marks:"<<eng<<endl;
        cout<<"maths marks:"<<maths<<endl;
        cout<<"total marks:"<<total<<endl;
    }
};
    int main(){
    student s;
    s.Takedata();
    s.showdata();

}
    

