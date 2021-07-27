#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Press 1 for addition:"<<endl<<"Press 2 for subtraction:"<<endl<<"Pres for 3 multiplication:"<<endl<<"Press 4 for division:"<<endl;
    int c;
    cout<<"Enter your choice: ";
    cin>>c;
    switch(c)
    {
    case 1:
    {
        int a,b,sum;
        cout<<"Enter the value of a&b:";
        cin>>a>>b;
        sum=a+b;
        cout<<"Summation:"<<sum;
    }
    break;
    case 2:
    {
        int a,b,sub;
        cout<<"Enter the value of a&b:";
        cin>>a>>b;
        sub=a-b;
        cout<<"subtraction:"<<sub;
    }
    break;
    case 3:
    {
        int a,b,sub;
        cout<<"Enter the value of a&b:";
        cin>>a>>b;
        sub=a*b;
        cout<<"multiplication="<<sub;
    }
    break;
    case 4:
    {
        float a,b,div;
        cout<<"Enter the value of a&b:";
        cin>>a>>b;
        div=a/b;
        cout<<"Division="<<div;
    }

    }
}


