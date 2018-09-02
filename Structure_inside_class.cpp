#include<iostream>
using namespace std;

struct student
{
    string name;
    int rno;
};
class assess
{
    student s;
    int m1,m2,m3,total;
public:
    void setmark(int m1,int m2,int m3){
    this->m1=m1;
    this->m2=m2;
    this->m3=m3;
    total=m1+m2+m3;
    }
    void setstruct(string name,int rno){
    s.name=name;
    s.rno=rno;
    }
    void display(){
    cout<<"NAME:"<<s.name<<"\nROLL NO:"<<s.rno<<"\nMARKS:"<<m1<<'\t'<<m2<<'\t'<<m3<<"\nTOTAL:"<<total;
    }

};
int main()
{
    assess obj;
    string n;
    int r,m1,m2,m3;
    cout<<"Enter Student name and roll no:";
    getline(cin,n);
    cin>>r;
    obj.setstruct(n,r);
    cout<<"Enter three marks:";
    cin>>m1>>m2>>m3;
    obj.setmark(m1,m2,m3);
    obj.display();

}
