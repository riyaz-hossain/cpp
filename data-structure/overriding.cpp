#include<iostream>
#include<conio.h>
using namespace std;
class person
{
public:
    void display()
    {
      cout<<"I am a person!"<<endl;
    }
};
class student :person
{
public:
    void display()
    {
        cout<<"I am a student!"<<endl;
    }
};
class teacher :person
{
public:
    void display()
    {
        cout<<"I am a teacher!"<<endl;
    }
};

int main()
{
    student s;
    teacher t;
    person p;
    t.display();
    s.display();
    p.display();

}
