#include<iostream>
#include<conio.h>
using namespace std;
void add(int,int);
void sub(int,int);
void multi(int,int);
void div(double,double);
int main()
{
    cout<<"                                                  "<<"Welcome!!!"<<endl<<endl<<endl<<endl;
    int a,b;
    sub(a,b);
    add(a,b);
    div(a,b);
    getch();
}
void add(int a,int b)
{
    cout<<"Enter any two integer number for summation: ";
    cin>>a>>b;
    int sum=a+b;
    cout<<"Summation= "<<sum<<endl<<endl<<endl;
}
void sub(int a,int b)
{
    cout<<"Enter any two integer number for subtraction: ";
    cin>>a>>b;
    int sub=a-b;
    cout<<"Subtraction= "<<sub<<endl<<endl<<endl;
}
void multi(int a,int b)
{
    cout<<"Enter any two integer number for multiplication: ";
    cin>>a>>b;
    int multi=a*b;
    cout<<"multiplication= "<<multi<<endl<<endl<<endl;
}
void div(double a,double b)
{
    cout<<"Enter any two Double number for division: ";
    cin>>a>>b;
    double div=a/b;
    cout<<"division= "<<div<<endl<<endl<<endl;
}

