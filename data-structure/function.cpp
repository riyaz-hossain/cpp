#include<iostream>
#include<conio.h>
using namespace std;
void add(int ,int);
void sub(int,int);
void multi(int,int);
void div(double,double);
int main()
{
    int a,b;
    sub(10,5);
    add(a,b);
    div(10,9);
    getch();
}
void add(int a,int b)
{
    cout<<"Enter the value of a &b: ";
    cin>>a>>b;
    int sum=a+b;
    cout<<"Summation= "<<sum<<endl;
}
void sub(int a,int b)
{
    int sub=a-b;
    cout<<"Subtraction= "<<sub<<endl;
}
void multi(int a,int b)
{
    int multi=a*b;
    cout<<"multiplication= "<<multi<<endl;
}
void div(double a,double b)
{
    double div=a/b;
    cout<<"division= "<<div<<endl;
}
