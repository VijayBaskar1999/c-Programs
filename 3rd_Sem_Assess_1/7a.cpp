#include<iostream>
using namespace std;

class odd
{
    protected:
    int a[10];
public:
    void getodds()
    {
        cout<<"Enter 10 odd numbers:";
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
    }
};

class even
{
    protected:
    int b[10];
public:
    void getevens()
    {
        cout<<"Enter 10 even numbers:";
        for(int i=0;i<10;i++)
        {
            cin>>b[i];
        }
    }
};


class OddEvens:public odd,public even
{
    int c[20];

    public:

        void Sort()
        {
            int j=0;
            for(int i=0;i<20;i++)
            {
                if(i<10)
                {
                    c[i]=a[i];
                }
                else
                {
                    c[i]=b[j];
                    j++;
                }
            }
            int temp;
            for(int i=0;i<20;i++)
            {
                for(int k=i+1;k<20;k++)
                {
                    if(c[i]>c[k])
                    {
                        temp=c[i];
                        c[i]=c[k];
                        c[k]=temp;
                    }
                }
            }



        }
        void display()
        {
            for(int i=0;i<20;i++)
            {
                cout<<c[i]<<" ";
            }

        }

};
int main()
{
    OddEvens obj;
    obj.getodds();
    obj.getevens();
    obj.Sort();
    cout<<"Sorted array:";
    obj.display();
}
