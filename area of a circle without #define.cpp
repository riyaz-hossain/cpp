#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    const float pi=3.1416;
    float r,area;
    cout<<setprecision(7);
    cout<<fixed;
    cout<<"Enter the value of radius: ";
    cin>>r;
    area=pi*r*r;
    cout<<"Area of this circle: "<<area;
    getch();

}
