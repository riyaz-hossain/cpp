#include<iostream>
using namespace std;
class shape
{
public:
    void setwidth(int w)
    {
        width=w;
    }
    void setheight(int h)
    {
        height=h;
    }
protected:
    int height,width;
};
class Rectangle:public shape
{
public:

    int getArea()
    {
        return (width*height);
    }
};
int main(void)
{
    Rectangle Rect;
    Rect.setwidth(7);
    Rect.setheight(9);
    cout<<"Total area: "<<Rect.getArea()<<endl;
}
