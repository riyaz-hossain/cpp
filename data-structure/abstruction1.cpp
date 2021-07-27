#include<iostream>
using namespace std;
class sum
{
public :
    int a,b,c;
    void add()
    {
        cout<<"Enter any two numbers: ";
        cin>>a>>b;
        c=a+b;
        cout<<"Summation= "<<c;
    }
};
int main()
{
    sum a;
    a.add();

}
