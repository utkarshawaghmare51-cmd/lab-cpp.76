#include<iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout<<" enter first number: " ;
    cin>> a;

    cout<<" enter second number: " ;
    cin>> b;

    temp = a;
    a=b;
    b=temp;

    cout<<"after swapping: " <<endl;
    cout<<"first number: " << a <<endl;
    cout<<"second number: " << b <<endl;

    return 0;
}
