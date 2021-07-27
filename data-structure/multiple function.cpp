/*
in below the same program can do other rule.
i could used that program as like as comment.
*/


/*#include<iostream>
#include<conio.h>
using namespace std;
void add(int,int);/*if we used function before
 main function then we have to used this prototype.
*/
/*void sub(int,int);
void multi(int,int);
void div(double,double);
int main()
{
    add(10,25);
    add(10,25);
    add(10,25);
    sub(15,45);
    sub(15,40);
    sub(15,46);
    multi(15,2);
    multi(15,11);
    div(15,3);
    div(15,2);
    getch();
}
void add(int a,int b)
{
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
    cout<<"Multiplication= "<<multi<<endl;
}
void div(double a,double b)
{
    double div=a/b;
    cout<<"Division= "<<div<<endl;
}

*/
#include<iostream>
#include<conio.h>
using namespace std;
void add(int a, int b)
{
    int add=a+b;
    cout<<"Summation= "<<add<<endl;
}
void sub(int a, int b)
{
    int sub=a-b;
    cout<<"subtraction= "<<sub<<endl;
}
void multi(int a, int b)
{
    int multi=a*b;
    cout<<"multiplication= "<<multi<<endl;
}
void div(double a,double b)
{
    double div=a/b;
    cout<<"division= "<<div<<endl;
}
int main()
{
    div(10.5,4);
    add(10,15);
    div(10,15);
    multi(10,15);
    getch();
}
