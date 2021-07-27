#include<iostream>
#include<conio.h>
using namespace std;
 int main (){

   while(1) {
   try {
   int num1,num2;
   cout <<"Enter the 1st number : ";
   cin >>num1;
   cout <<"Enter the 2nd number : ";
   cin >>num2;

      if (num2==0){
        throw 0;
    }

   double result = (double) num1/num2;
   cout<<"Rseult is :" <<result<<endl<<endl;
   }
   catch(...) {
    cout<<"Divided by zero is impossible"<<endl;
    cout<<"Please try again later"<<endl<<endl;
   getch();
   }
 }
 }
