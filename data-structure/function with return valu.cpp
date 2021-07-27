#include<iostream>
#include<conio.h>
using namespace std;
int add(int,int);
int sub(int,int);
int multi(int,int);
int main()
{
    int summation=add(10,20),multipl=multi(13,12);
    cout<<"summation= "<<summation;
    cout<<"Multiplication= "<<multipl;
    getch();
}
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
int sub(int a,int b)
{
    int sub=a-b;
    return sub;
}
int multi(int a,int b)
{
    int mul=a*b;
    return mul;
}
float div(int a,int b)
{
    float division=a/b;
    return division;
}
