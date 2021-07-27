#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    float gpa;
    void display()
    {
        cout<<"ID= "<<id<<"   "<<"GPA= "<<gpa<<endl;
    }
};
int main()
{
    student shuvo,mim,jebin;
    mim.id=1901016138,mim.gpa=3.01,jebin.id=1901016152,jebin.gpa=3.69,shuvo.id=1901016170,shuvo.gpa=3.63;
    mim.display();
    jebin.display();
    shuvo.display();
    getch();
}
