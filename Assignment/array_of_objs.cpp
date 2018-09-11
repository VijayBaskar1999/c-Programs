#include<iostream>
using namespace std;

class bank
{
    string name;
    int accno;
    int bal;
public:
    void display(){
     cout<<name<<'\t'<<accno<<'\t'<<bal<<endl;
    }
    void setdata(string na,int ac,int ba){
        name=na;
        accno=ac;
        bal=ba;
    }
};
int main()
{
    int n;
    cout<<"Enter the no of users:";
    cin>>n;
    bank b[n];
    int ac,ba;
    string na;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name,account no and balance:";
        cin>>na>>ac;
        int flag=0;
        do{
            try{
                cin>>ba;
                if(ba<0){
                    throw ba;
                }
                else
                flag=1;
                continue;
            }
            catch(int e)
            {
                cout<<"Balance cant be negative!!your balance ="<<e<<"\nEnter correct balance:";
            }
        }while(flag!=1);
        b[i].setdata(na,ac,ba);
    }
    cout<<"NAME\tACC.NO\tBALANCE\n";
    for(int i=0;i<n;i++)
    {
        b[i].display();
    }
    return 0;

}
