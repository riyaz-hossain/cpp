#include<iostream>
#include<conio.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    void display()
    {
        cout<<"Name: "<<name<<"   "<<"age: "<<age<<endl;
    }
};
class student: public person
{
    public:
    int id;
    void display1()
    {
        cout<<"Name: "<<name<<"   "<<"ID: "<<id<<"   "<<"age: "<<age<<endl;
    }
    student(string x, int y, int z)
    {
        name=x;
        id=y;
        age=z;
    }
};
int main()
{
    student s("Riyaz Khan Shuvo",1901016170,19);
    s.display1();
    getch();
}
