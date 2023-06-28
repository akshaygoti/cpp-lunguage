#include<iostream>

using namespace std;

class fileght
{
    int f_name;
    char destination[40];
    float distance,fuel;
    
    float calfulel()
    {
        if(distance<=1000)
        {
            return 500;

        }
        else if (distance>1000 && distance<2000)
        {
            return 1100;

        }
        else {
            return 2200;
        }
    }

        public :

        void get_info(){   
        cout<<"Enter flight number:-";
        cin>>f_name;
        cout<<"Enter Destination:-";
        cin>>destination;
        cout<<"Enter Distance:-";
        cin>>distance;
        show_info();
    }
    
    void show_info()  
    {
        cout<<"flight:"<<f_name<<endl;
        cout<<"Destination:"<<destination<<endl;
        cout<<"Distanse:"<<distance<<endl;
         fuel=calfulel();
        cout<<"Need fuel is :"<<fuel<<endl;
    }
};
int main()
{
    fileght num1;
    num1.get_info();
}