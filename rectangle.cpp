#include<iostream>
using namespace std;

int main()
{
    int length ,breadth, area, parimeter;

    cout<<" enter length: ";
    cin>> length;

    cout<<" enter breadth: ";
    cin>> breadth;

    area= length * breadth ;
    parimeter = 2*(length +breadth);

    cout<<"area = " << area << endl;
    cout<<"parimeter = " << parimeter << endl;

    return 0;
}