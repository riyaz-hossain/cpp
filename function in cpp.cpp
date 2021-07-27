#include<iostream>
#include<conio.h>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int multi(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}

int main()
{
    int x,y,c;
    cout<<"Enter any two numbers: ";
    cin>>x>>y;
    cout<<"Press 1 for +"<<endl;
    cout<<"Press 2 for -"<<endl;
    cout<<"Press 3 for *"<<endl;
    cout<<"Press 4 for /"<<endl;
    cin>>c;
    switch(1)
    {
    case 1:
    {
        cout<<add(x,y)<<endl;
        break;
    }
    case 2:
    {
        cout<<sub(x,y)<<endl;
        break;
    }
    case 3:
    {
        cout<<multi(x,y)<<endl;
        break;
    }
    case 4:
    {
        cout<<div(x,y)<<endl;
        break;
    }

    default:
        cout<<"Error";
    }


}
