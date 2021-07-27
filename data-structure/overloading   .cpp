#include<oistream>
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
    void display()
    {
        cout<<"I am a teacher!!!"<<endl;
    }
};
class person:public student
{
    void display()
    {
        cout<<"I am a person!!!"<<endl;
    }
};
int main()
{
    student s
    s.display;
}
