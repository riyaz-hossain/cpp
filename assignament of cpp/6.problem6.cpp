#include<iostream>
#define pi 3.14165
using namespace std;
class circle
{
    public:
    void setradious(float r)
    {
        radious=r;
    }
protected:
    float radious;

};
class alt:public circle
{
public:
    float getarea()
    {
        return(pi*radious*radious);
    }
    float getperimeter()
    {
        return(2*pi*radious);
    }
};
int main()
{
    alt abc;
    abc.setradious(5);
    cout<<"Total area: "<<abc.getarea()<<endl;
    cout<<"Total perimeter: "<<abc.getperimeter()<<endl;

}
