#include<iostream>
#include<conio.h>
using namespace std;
void swap(int*a,int*b);
int main()
{
    int a=30,b=35;
    cout<<"Before swapping: a="<<a <<", b="<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping: a="<<a <<", b="<<b;
getch();
}
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
