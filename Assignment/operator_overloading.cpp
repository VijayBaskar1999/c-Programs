#include<iostream>
using namespace std;

class Set
{
    int a[50],n;
public:
    Set (){}
    Set (int n){
        this->n=n;
    }
    void getset(){
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void display(){
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    Set operator +(Set s2){
        Set s3;
        s3.n=0;
        for(int i=0;i<n;i++)
        {
            s3.a[i]=a[i];
            s3.n++;
        }

        for(int j=0;j<s2.n;j++)
        {
            int flag=0;
            for(int k=0;k<n;k++)
            {
                if (s2.a[j]==a[k])
                {
                    flag=1;
                    break;
                }
            }
            if (flag==0)
            {
                s3.a[s3.n++]=s2.a[j];
            }
        }

        return s3;

    }
    Set operator -(Set s2){
        Set s3;
        s3.n=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<s2.n;j++)
            {
                if(a[i]==s2.a[j])
                {
                    s3.a[s3.n++]=a[i];
                    break;
                }
            }
        }
        return s3;
    }
    bool operator >(Set s2){
        if(s2.n>n)
            return false;

        int flag1=1;
        for(int i=0;i<s2.n;i++){
            int flag2=1;
            for(int j=0;j<n;j++){
                if(s2.a[i]==a[j]){
                    flag2=0;
                }
            }
            if(flag2==1)
            {
                flag1=0;
            }

        }
        if(flag1==1)
            return true;
        else
            return false;
    }
    Set operator <(Set s2){
        Set s3;
        s3.n=0;
        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<s2.n;j++)
            {
                if(a[i]==s2.a[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                s3.a[s3.n++]=a[i];
        }
        return s3;
    }

};

int main()
{
    int n,m;
    cout<<"Enter no of elements in Set 1:";
    cin>>n;
    cout<<"Enter no of elements in Set 2:";
    cin>>m;
    Set s1(n),s2(m),su,si,c;
    cout<<"Enter the elements in set 1:";
    s1.getset();
    cout<<"Enter the elements in set 2:";
    s2.getset();
    cout<<"SET 1 :";
    s1.display();
    cout<<"SET 2 :";
    s2.display();
    su=s1+s2;       //UNION
    si=s1-s2;       //Intersection
    bool ss=s1>s2;  //subset
    c=s1<s2;        //complement
    cout<<"\nUNION : ";
    su.display();
    cout<<"INTERSECTION : ";
    si.display();
    cout<<"SET 1 COMPLEMENT SET 2:";
    c.display();
    if(ss)
        cout<<"SET 2 is the subset of SET 1"<<endl;
    else
        cout<<"SET 2 is not the subset of SET 1"<<endl;

    return 0;
}
