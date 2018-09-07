#include<iostream>
using namespace std;

class demo
{
    int x,y;
public:
   demo(){}
    demo(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    friend demo operator -(int ,demo b)
    {
        demo temp;
        temp.x=100-b.x;
        temp.y=100-b.y;
        return temp;
    }
    void display()
    {
        cout<<"X:"<<x<<" Y:"<<y<<endl;
    }
};
int main()
{
    demo C,D(10,10);
    C=100-D;//d1.+(d2)
    C.display();

}
