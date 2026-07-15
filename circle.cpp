#include<iostream>
using namespace std;

int main()
{
    float radius, area, circumference;

    cout<< "enter radius : " ;
    cin>> radius ;

    area = 3.14*radius*radius ;
    circumference = 2 *3.14 *radius ;

    cout<< "area = " << area <<endl;
    cout<< "circumference = " << circumference <<endl;

    return 0;
}