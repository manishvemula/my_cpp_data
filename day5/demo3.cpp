#include<iostream>
using namespace std;
//protected data member
//base
//parent
class person
{
    protected:
    string name;
    int age;
    public:
    person()
    {
        name = "Ravi";
        age=24;
    }
    void printPerson()
    {
        cout<<"\n Name="<<name<<"  age="<<age;
    }
};

//emp is-a person
//derived
//child
class emp : public person
{
    int empid;
    int sal;
    public:
    emp()
    {
        empid = 230;
        sal = 22000;
    }
    void printEmp()
    {
        this->printPerson();
        cout<<"  empid="<<this->empid<<"  sal="<<sal;
    }
    void updateName(string newName)
    {
        name = newName; //valid
    }
};
int main()
{
    person p1;
    p1.printPerson();

    emp e1;
    e1.printEmp(); //4

    //Ravi="Ravee";
    //e1.name="Ravee";//invalid
    e1.updateName("Ravee");
    e1.printEmp();
    cout<<"\n";
    return 0;
}