#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int choice;
    cout<<"1.positive or negative numbers\n";
    cout<<"2.Even or odd numbers\n";
    cout<<"3.largest or smallest\n";
    cout<<"4.pass or fail\n";
    cout<<"5.absolute value\n";
    cout<<"6.letter grade\n";
    while(1){
    cout<<"Enter your choice: \n";
    cin>>choice;

    switch(choice)

    {
    case 1:
    {
        int a;
        cout<<"Enter the numbers: ";
        cin>>a;
        if(a>0)
            cout<<"Positive Number";
        else
            cout<<"Negative number";
        getch();
    }
    break;
    case 2:
    {
        int c;
        cout<<"Enter any numbers: ";
        cin>>c;
        if(c%2==0)
            cout<<"Even number";
        else
            cout<<"Odd number";
    }
    break;
    case 4:
    {
        int marks;
        cout<<"Enter your marks: ";
        cin>>marks;
        if(marks>=100||marks<0)
            cout<<"You enter invalid marks!";
        else if(marks>33)
            cout<<"passed!";
        else
            cout<<"Fail!";

    }
    break;
    case 3:
    {
        int a,b;
        cout<<"Enter the value of a&b: ";
        cin>>a>>b;
        if(a>b)
            cout<<"The largest number is "<<a;
        else
            cout<<b <<" is the largest number";
    }
    break;
    case 5:
    {
        int a;
        cout<<"Enter any number: ";
        cin>>a;
        if(a<0)
            cout<<"The absolute value is "<<(-a);
        else
            cout<<"The absolute value is "<<a;

    }
    break;
    case 6:
    {
        int marks;
        cout<<"Enter your marks: ";
        cin>>marks;
        if(marks>100||marks<0)
            cout<<"You enter invalid marks!\n ";
        else if(marks>=80)
            cout<<"You obtain A+\n";
        else if(marks>=80)
            cout<<"You obtain A+\n";
        else if(marks>=70)
            cout<<"You obtain A\n";
        else if(marks>=60)
            cout<<"You obtain A-\n";
        else if(marks>=50)
            cout<<"You obtain B\n";
        else if(marks>=40)
            cout<<"You obtain C\n";
        else if(marks>=33)
            cout<<"You obtain D\n";
        else
            cout<<"You have failed!\n";
    }





    }
}}
