#include<iostream>
#include<conio.h>
using namespace std;
void sum(int ,int );
void sum(int ,int ,int);
int main()
{
    sum(10,25);
    sum(10,25,10);
    getch();
}
void sum(int a,int b)
{
    int sum=a+b;
    cout<<"Summation= "<<sum<<endl;
}
void sum(int a,int b,int c)
{
    int sum=a+b+c;
    cout<<"Summation= "<<sum;
}
