#include<iostream>
using namespace std;
class square
{
    public:
    void setlength(int l )
    {
        length=l;
    }
protected:
   int length;

};
class alt:public square
{
public:
    int getarea()
    {
        return(length*length);
    }
    float getperimeter()
    {
        return(4*length);
    }
};
int main()
{
    alt abc;
    abc.setlength(5);
    cout<<"Total area: "<<abc.getarea()<<endl;
    cout<<"Total perimeter: "<<abc.getperimeter()<<endl;

}

