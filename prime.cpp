#include<iostream>
using namespace std;

int main()
{
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1)
    {
        cout << "not a prime number" ;
    }
    else
    {
        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                cout << "not a prime number" ;
                return 0;
            }
        }
        cout << "prime number" ;
    }
    return 0;
}