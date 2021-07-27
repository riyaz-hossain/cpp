#include<iostream>
using namespace std;
class student
{
public:

    void display()
    {
        cout<<"I am a student!!!"<<endl;
    }
};
class teacher: public student
{
    public:
    void display()
    {
        cout<<"I am a teacher!!!"<<endl;
    }
};
class person:public student
{
    public:
    void display()
    {
        cout<<"I am a person!!!"<<endl;
    }
};
int main()
{
    teacher t;
    t.display();
    student s ;
    s.display();

}

