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
        cout<<"Name: "<<name<<"   "<<"AGE= "<<age<<"   "<<endl;
    }

};
class student : public person
{
public:
    int id;
   void display2()//we used function to short the code...
    {
         cout<<"Name: "<<name<<"   "<<"ID: "<<id<<"   "<<"AGE= "<<age<<endl;

    }
    student(string x,int y,int z)//here we used constractor to short the code...
    {
        name=x;
        age=z;
        id=y;
    }
};
int main()
{
    student shuvo("Riyaz Khan Shuvo",1901016170,19);
    student mim("Morium Nessa Mim",1901016138,19);
    person ammu;
    ammu.name="Momotaj Begum",ammu.age=37;
    ammu.display();
    shuvo.display2();
    mim.display2();
    getch();
}
