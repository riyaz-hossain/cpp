#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

    string name;
    ofstream file;
    file.open("student.txt", ios::out|ios::app);
    cout<<"Enter your name :";
    getline(cin,name);
    file<<"Welcome to " <<name<<endl;

    file.close();




return 0;
}
