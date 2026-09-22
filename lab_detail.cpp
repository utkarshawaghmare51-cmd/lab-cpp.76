#include<iostream>
using namespace std;
class lab
{
    int lab_id;
    int lab_capacity;
    float lab_charges;
public:
lab()
    {
        lab_id=0;
        lab_capacity=0;
        lab_charges=0;
    }
    void getdata()
    {
        cout<< "enter lab id:" ;
        cin>>lab_id;

        cout<< "enter lab capacity:" ;
        cin>>lab_capacity;
        
        cout<< "enter lab charges:" ;
        cin>> lab_charges;
    }
    void bill()
    {
        float b;
        b=lab_capacity*lab_charges;

        cout<<"lab id:"<<lab_id<<endl;
        cout<<"lab capacity:"<<lab_capacity<<endl;
        cout<<"lab charge:"<<lab_charges<<endl;
        cout<<"bill:"<<b<<endl;
    }

};
int main()
{
   lab lab1;
    lab1.getdata();
    lab1.bill();
    return 0;
}