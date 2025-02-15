#include<iostream>
using namespace std;

//Association
//car has-a engine

class engine
{
    int fuel;
    int cc;
    public:
    void acceptEngine()
    {
        cout<<"\n Enter fuel and cc for engine";
        cin>>this->fuel>>this->cc;
    }
    void printEngine()
    {
        cout<<"\n Engine Fuel="<<fuel<<" cc="<<cc;
    }
};

class car
{
    int price;
    engine e; //Association
    public:
    void printCar()
    {
        cout<<"\n car price="<<price;
        e.printEngine();
    }
    void acceptCar()
    {
        cout<<"\n enter car price";
        cin>>price;
        e.acceptEngine();
    }
};
int main()
{
    engine e1;
    e1.acceptEngine();
    e1.printEngine();

    car c1;
    c1.acceptCar();
    c1.printCar();
    return 0;
}

