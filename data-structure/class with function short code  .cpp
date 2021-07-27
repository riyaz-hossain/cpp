#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    float gpa;
    display()
    {
        cout<<"ID= "<<id<<"   "<<"GPA= "<<gpa<<endl;
    }
};

int main()
{
    student shuvo,mim,jebin,sakib;
    shuvo.id=1901016170,shuvo.gpa=3.63;
    mim.id=1901016138,mim.gpa=3.00;
    jebin.id=1901016152,jebin.gpa=3.69;
    sakib.id=1901016153,sakib.gpa=3.59;
    mim.display();
    jebin.display();
    sakib.display();
    shuvo.display();
    getch();
}
