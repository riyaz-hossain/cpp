#include <iostream>

using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
		Rectangle( int l, int b )
		{
			length = l;
			breadth = b;
		}
		int printArea()
		{
			return length * breadth;
		}
};

int main()
{
	Rectangle rt1( 7, 4 );
	Rectangle rt2( 4, 5 );
	cout << "Area of first rectangle " << rt1.printArea() << endl;
	cout << "Area of second rectangle " << rt2.printArea() << endl;
	return 0;
}































































/*
#include<iostream>
#include<conio.h>
class rec
{
private:
    int c,d;
public:
    rec(int a,int b)
    {
        c=a;
        d=b;
    }
    void put()
    {
        cout<<"Area is: "<<c*d<<endl;

        }
    };
    void main()
    {
        clrscr();
        rec obj=rec(3,5);
        obj.put();
    }



*/
