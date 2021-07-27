#include<iostream>
using namespace std;
class sum
{
    public:
    void add(int a,int b)
    {
        int c;
        c=a+b;
        cout<<"Summation="<<c;
    }
};
int main()
{
    sum a;
    a.add(10,20);

}
