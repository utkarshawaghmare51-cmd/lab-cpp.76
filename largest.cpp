#include<iostream>
using namespace std;

int main()
{
    int a, b, c;


    cout << "enter first number : ";
    cin>> a;

    cout<< "enter second number : ";
    cin>> b;

    cout<< "enter third number: ";
    cin>> c;

    if(a>=b && a>=c)
    {
        cout << "largest number = " << a;
    }
    else if(b>=a && b>=c)
    { 
        cout << "largest number = " << b;
    }
        else
    {
        cout<<"largest number = " << c;
    }
        return 0;
}