#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    float gpa;
    show()
    {
        cout<<"ID= "<<id<<"   "<<"GPA= "<<gpa<<endl;
    }
    void result(int x,float y)
    {
        id=x,gpa=y;
    }
};
int main()
{
    student shuvo,mim,sakib,jebin;
    shuvo.result(1901016170,3.63);mim.result(1901016138,3.001),sakib.result(1901016153,3.59),jebin.result(1901016152,3.69);
    mim.show(),jebin.show(),sakib.show();shuvo.show();
    getch();
}
