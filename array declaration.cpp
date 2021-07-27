#include<iostream>
using namespace std;
#include<iomanip>
using std::setw;
int main()
{
    int n[10];
    for(int i=0;i<10;i++)
    {
        n[i]=i+100;
    }
    cout<<"Element"<<setw(15)<<"value"<<endl;
}
