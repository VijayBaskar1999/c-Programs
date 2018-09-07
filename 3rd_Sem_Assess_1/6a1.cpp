#include<iostream>
using namespace std;

class time{
int hours,minutes;
public:
    time(int b)
    {
        hours=b/60;
        minutes=b%60;
    }
    time(int a,int b)
    {
        hours=a+(b/60);
        minutes=b%60;
    }
    time(time &t)
    {
        hours=t.hours;
        minutes=t.minutes;
    }
    void display()
    {
        cout<<"HOURS:"<<hours<<" MINUTES:"<<minutes<<endl;
    }
};
int main(){
    int h,m;
    cout<<"Enter the minutes only:";
    cin>>m;
    time t1(m);
    cout<<"Enter hour and minutes:";
    cin>>h>>m;
    time t2(h,m);
    time t3=(t2);
    cout<<"TIME 1:::";
    t1.display();
    cout<<"TIME 2:::";
    t2.display();
    cout<<"TIME 3:::";
    t3.display();
    return 0;
}
