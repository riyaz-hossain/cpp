#include<iostream>
using namespace std;
class Addition {
public:
    int Add(int num1,int num2) {
        return num1+num2;
    }
    int Add(int num1,int num2,int num3){
        return num1+num2+num3;
    }
};
int main(void) {
    Addition obj;
    cout<<obj.Add(20,15)<<endl;
    cout<<obj.Add(81,100,10)<<endl;
}
