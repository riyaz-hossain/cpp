#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m;
    while(1)
    {

        cout<<"Enter your marks: ";
        cin>>m;
        if(m>100||m<0)
            cout<<"You enter invalid marks!";
        else if(m>=80)
            cout<<"You obtain: A+\n";
        else if(m>=70)
            cout<<"You obtain: A\n";
        else if(m>=60)
            cout<<"You obtain: A-\n";
        else if(m>=50)
            cout<<"You obtain: B\n";
        else if(m>=40)
            cout<<"You obtain: C\n";
        else if(m>=33)
            cout<<"You obtain: D\n";
        else
            cout<<"Fail\n";

    }


}
