#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a letter: ";
    cin>>ch;
    ch=toupper(ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout<<"Vowel";
    else
        cout<<"consonant";
}
