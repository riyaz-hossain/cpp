#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    display()
    {
        cout<<"ID= "<<id<<"   "<<"GPA= "<<gpa<<endl;
    }
    student(int x, double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student shuvo(1901016170, 3.63);
    student mim(1901016138, 3.01);
    student jebin(1901016152, 3.69);
    mim.display();
    jebin.display();
    shuvo.display();
}
