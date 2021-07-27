#include<iostream>
#include<conio.h>
using namespace std;
int addition(int,int);
int sub(int,int);
int main()
{
    int result=addition(10,15),biog=sub(11,80);;
    cout<<"summation= "<<result<<endl;
    cout<<"Subtraction= "<<biog;
    getch();
}
int addition(int a,int b)
{
    int sum=a+b;
    return sum;
}
int sub(int a,int b)
{
    int sub=a-b;
    return sub;
}
