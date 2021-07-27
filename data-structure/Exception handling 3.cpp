#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    try{

    int a,b;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    if(b==0)
    {
        throw 0;
    }
    double re=a/b;
    cout<<"Division= "<<re<<endl;
}

catch(...)
{
    cout<<"Divided by zero is not possible"<<endl<<endl;
}
}
