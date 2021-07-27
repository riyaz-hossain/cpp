#include<iostream>
using namespace std;
class sum
{
private:
    int a,c,b;
public:
    void add()
    {
        cout<<"Enter any two number: ";
        cin>>a>>b;
        c=a+b;
        cout<<"Summation="<<c<<endl;
    }
};
int main()
{
    sum a;
    a.add();
}
