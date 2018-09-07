#include<iostream>
using namespace std;

class student
{
    int event1score,event2score,event3score;
    public:
        void setscore(int a,int b,int c)
        {
            event1score=a;
            event2score=b;
            event3score=c;
        }
        void display(int a)
        {
            cout<<"Student "<<a<<": "<<event1score<<'\t'<<event2score<<'\t'<<event3score<<endl;
        }
        void totalscore(int a)
        {
            cout<<"Student "<<a<<": "<<event1score+event2score+event3score<<endl;
        }
        int gete2()
        {
            return event2score;
        }

};

int main()
{
    int n,a,b,c;
    cout<<"Enter no of students:";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter three Event scores of student "<<i+1<<":";
        cin>>a>>b>>c;
        s[i].setscore(a,b,c);
    }
    for(int i=0;i<n;i++)
    {
        s[i].display(i+1);
    }
    for(int i=0;i<n;i++)
    {
        s[i].totalscore(i+1);
    }

    int l,j=0;
    l=s[0].gete2();
    for(int i=1;i<n;i++)
    {
        if(s[i].gete2()<l)
        {
            l=s[i].gete2();
            j=i;
        }
    }
    cout<<"Student "<<j+1<<" get least score in event 2"<<endl;

}
