#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    float gpa;
};
int main()
{
    student shuvo;
    shuvo.id=1901016170;
    shuvo.gpa=3.63;
    student mim;
    mim.id=1901016138;
    mim.gpa=3.00;
    student jebin;
    jebin.id=1901016152;
    jebin.gpa=3.69;
    cout<<"Id= "<<mim.id<<"   ";
    cout<<"gpa= "<<mim.gpa<<endl;
    cout<<"Id= "<<jebin.id<<"   ";
    cout<<"gpa= "<<jebin.gpa<<endl;;
    cout<<"Id= "<<shuvo.id<<"   ";
    cout<<"gpa= "<<shuvo.gpa<<endl;;
    getch();
}
