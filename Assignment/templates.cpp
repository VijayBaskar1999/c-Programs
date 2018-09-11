#include<iostream>
using namespace std;

template <class T,class U>

class interest
{
    T principal;
    U years;
    U rate;

public:
    interest(T p,U n,U r)
    {
        principal=p;
        years=n;
        rate=r;
    }
    T calculateinterest();
};

template <class T,class U>
T interest<T,U>::calculateinterest()
{
    return ((principal*years*rate)/100);
}

int main()
{

    interest<double,int> obj(1000.50,5,10);
    cout<<obj.calculateinterest()<<endl;
}
