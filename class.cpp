/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    student shuvo;
    shuvo.id=1901016170;
    shuvo.gpa=3.63;
    cout<<shuvo.id<<shuvo.gpa;
    getch();
}
class student
{
    public:
    int id;
    double gpa;
};
*/

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
    student shuvo;
    shuvo.id=1901016170;
    shuvo.gpa=3.63;
    cout<<"ID= "<<shuvo.id<<endl<<"GPA= "<<shuvo.gpa<<endl;
    student Mim;
    Mim.id=1901016138;
    Mim.gpa=3.00;
    cout<<"ID= "<<Mim.id<<endl<<"GPA= "<<Mim.gpa<<endl;
    student na;
    na.id=1901016152;
    na.gpa=3.69;
    cout<<"ID= "<<na.id<<endl<<"GPA= "<<na.gpa;
}
