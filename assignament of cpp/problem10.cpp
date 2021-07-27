#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file open("simple txt",los::out);
    if(!file)
    {
        cout<<"Error in creating file!!!"<<endl;
        return 0;
    }

}
