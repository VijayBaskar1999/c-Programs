#include<iostream>
using namespace std;
class name;
class student
{
    public:
    class name
    {
        string fname,mname,lname;
    public:
        void setname(string fn,string mn,string ln)
        {
            fname=fn;
            mname=mn;
            lname=ln;
        }
        void display()
    {
        cout<<fname<<" "<<mname<<" "<<lname;
    }

    };
};
int main()
{
    student::name n;
    string f,m,l;
    cout<<"Enter your first,last and middle name:";
    cin>>f>>m>>l;
    n.setname(f,m,l);
    cout<<"Your Name:";
    n.display();
    }
