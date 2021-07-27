#include<iostream>
#include<conio.h>
using namespace std;
class math
{
public:
    void sum(int a,int b)
    {
        int sum=a+b;
        cout<<"Summation= "<<sum<<endl;
    }
    void sum(int a,int b,int c)
    {
        int sum=a+b+c;
        cout<<"Summation= "<<sum<<endl;
    }
    void sum()
    {
        cout<<"Nothing to add!";
    }
};
int main()
{
    math add;
    add.sum(10,20);
    add.sum(10,20,5);
    add.sum();
    getch();
}
