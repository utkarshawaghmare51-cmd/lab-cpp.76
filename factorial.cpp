#include<iostream>
using namespace std;

int main()
{ 
    int num, i;
    long long factorial = 1;

    cout << "entwe a number : " ;
    cin >> num;

    for(i =1 ;i<=num; i++)
    {
        factorial = factorial * i;

    }

    cout << "factorial = " <<factorial;
    
    return 0;
}