#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
public:
    void Add(int a,int b)
    {
        int Add=a+b;
        cout<<"Summation= "<<Add<<endl;
    }
    void Add(int a,int b,int c)
    {
        int Add=a+b+c;
        cout<<"Summation= "<<Add<<endl;
    }

};
int main()
{
    sum add;
    add.Add(10,20);
    add.Add(10,20,5);
    getch();
}

