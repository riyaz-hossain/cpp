#include<iostream>
#include<conio.h>
#define pi 3.1416
#include<iomanip>
using namespace std;
int main()
{
    float radius;
    cout<<setprecision(5);
    cout<<fixed;
    cout<<"Enter the value of radius: ";
    cin>>radius;
    float area=pi*radius*radius;
    cout<<"area of this circle: "<<area;
}
