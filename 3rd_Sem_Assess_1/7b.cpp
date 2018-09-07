#include<iostream>
using namespace std;

class student{
    int score1,score2,score3;
public:
    void setscore(int a,int b,int c){
    score1=a;
    score2=b;
    score3=c;
    }
    int getscore1(){
        return score1;
    }
    int getscore2(){
        return score2;
    }
    int getscore3(){
        return score3;
    }

};
class exCurricular;
class coCurricular:public student
{
private:
    int total;
public:
    void calculatetotal(){
    total=getscore1()+getscore2()+getscore3();
    }
    friend void compare(coCurricular ,exCurricular );
};
class exCurricular:public student
{
private:
    int  total;
public:
    void calculatetotal(){
    total=getscore1()+getscore2()+getscore3();
    }
    friend void compare(coCurricular ,exCurricular );
};
void compare(coCurricular s1,exCurricular s2)
{
    if(s1.total>s2.total)
    {
        cout<<"Student in co-curricular activities obtained Highest Score ("<<s1.total<<")";
    }
    else
        cout<<"Student in ex-curricular activities obtained Highest Score ("<<s2.total<<")";
}
int main()
{
    int a,b,c;
    cout<<"Enter the three scores of a co-curricular student:";
    cin>>a>>b>>c;
    coCurricular s1;
    s1.setscore(a,b,c);
    s1.calculatetotal();
    cout<<"Enter the three scores of a ex-curricular student:";
    cin>>a>>b>>c;
    exCurricular s2;
    s2.setscore(a,b,c);
    s2.calculatetotal();
    compare(s1,s2);
}
