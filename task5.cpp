#include<iostream>
using namespace std;
class Book
{
    int n;
    int bon;
    char bt[20];
    float p;
    float cost;
    float Total_cost(int n)
    {
        return n*p;
    }
    public:
    void INPUT()
    {
        cout<<"Enter book no:";
        cin>>bon;
        cout<<"Enter book tital:";
        cin>>bt;
        cout<<"Enter price:";
        cin>>p;
    }
    void purchase()
    {
        cout<<"Enter number of Book:";
        cin>>n;
        cout<<"BOOK no:"<<bon<<endl;
        cout<<"BOOK TITLE:"<<bt<<endl;
        cout<<"price:"<<p<<endl;
        cost=Total_cost(n);
        cout<<"TOTAL PRICE:"<<cost;
    }
};
    int main()
    {
         Book b;
        b.INPUT();
        b.purchase();
    }

