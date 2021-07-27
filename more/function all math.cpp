#include<iostream>
#include<conio.h>
using namespace std;
void add(int a,int b)
{
    int sum=a+b;
    cout<<"Summation= "<<sum<<endl;
}
void sub(int a,int b)
{
    int s=a-b;
    cout<<"Subtraction= "<<s<<endl;
}
void mu(int a,int b)
{
    int mul=a*b;
    cout<<"multiplication= "<<mul<<endl;
}
void div(double a,double b)
{
    double d=a/b;
    cout<<"Division= "<<d<<endl;
}
int main()
{
    div(10,9);

}
