#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
};
int main()
{
    student Alim;
    Alim.id=1901016170;
    Alim.gpa=3.63;
    cout<<Alim.id<<"  "<<Alim.gpa<<endl;
    student Suparna;
    Suparna.id=1901016190;
    Suparna.gpa=4.00;
    cout<<Suparna.id<<"  "<<Suparna.gpa<<endl;
    getch();
}
