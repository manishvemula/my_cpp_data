#include<iostream>
using namespace std;

//Inheritance [is-a]  
//parent class
class base
{
    public:
    int b;
    void funBase()
    {
        cout<<"\n --------funBase()--------";
    }
};
//child class
class derived : public base
{
    public:
    int d;
    void funDerived()
    {
        cout<<"\n ----------funDerived()------------";
    }
};
int main()
{
    base b1;
    cout<<"\n size of b1 object = "<<sizeof(b1);//4
    b1.funBase();

    derived d1;
    cout<<"\n size of d1 object = "<<sizeof(d1);//4 , 8
    d1.funDerived();
    d1.funBase();
    cout<<"\n";
    return 0;
}