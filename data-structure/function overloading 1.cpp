#include<iostream>
using namespace std;
voidsum(int x,int y)
{
    int sum=x+y;
    cout<<"Summation= "<<sum<<endl;
}
void sum(double x,double y)
{
    double sum=x+y;
    cout<<"Summation= "<<sum<<endl;
}

int main()
{
    sum(10,11);
    sum(10,11);
    sum(10.567,11);
}
