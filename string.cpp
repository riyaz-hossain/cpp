#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="Hello";
    string str2="world";
    string str3;
    str3 = str1;
    cout<<str3<<endl;
    str3=str1 + str2;
    cout<< str3;
}
