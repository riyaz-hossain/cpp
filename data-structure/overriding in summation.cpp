#include<iostream>
using namespace std;
class sum
{
private:
    int a,b;
    public:
    void add()
    {
        cout<<"Enter any 2 numbers: ";
        cin>>a>>b;
        cout<<"Summation="<<a+b;
    }
};

int main()
{
    sum a;

    a.add();

}
