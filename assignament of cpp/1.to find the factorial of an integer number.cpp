#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int n,k;
    cout<<"Enter the value of n: ";
    cin>>n;
    k=fact(n);
    cout<<"factorial of "<<n<<" is "<<k;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
