#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


   try{

    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    if(b==0)
    {
        throw 0;
    }
    double result=(double)a/b;
    cout<<"Result="<<result<<endl;
   }
   catch(...)
   {
       cout<<"Divided by zero is not possible"<<endl<<"Please try again!!!"<<endl<<endl;
   }
       getch();
}
