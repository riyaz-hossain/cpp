#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number%2==0)
        cout<<"Even Number";
    else
        cout<<"odd number";
    getch();
}
