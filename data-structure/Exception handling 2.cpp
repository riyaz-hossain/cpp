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
        throw 1;
    }
    double result=(double)a/b;
    cout<<"Division= "<<result<<endl;
}
catch(...)
{
    cout<<"Divided by 0 is not possible..."<<endl<<endl;
}

}
