#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    //cout<<showpoint;
    cout<<setprecision(3);
    cout<<fixed;
    cout<<"Enter the value of a&b:";
    cin>>a>>b;
    float div=a/b;
    cout<<"division="<<div;
}
