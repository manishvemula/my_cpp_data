#include<iostream>
using namespace std;
//object slicing
//base class
//parent class
class person
{
    protected:
        int age;
        string name;
    public:
    person()
    {
        age=22;
        name="Ravi";
    }
    void printPerson()
    {
        cout<<"\n  Name="<<name<<" age="<<age;
    }
};
//emp is-a person
//child 
//derived
class emp: public person
{
    int empid;
    int sal;
    public:
    emp()
    {
        empid=124;
        sal=22000;
    }
    void printEmp()  //4
    {
        this->printPerson();  //2
        cout<<" empid="<<empid<<" sal="<<sal; //2
    }
    void updateName(string newName)
    {
        this->name=newName; //valid
    }
};
int main()
{
  
    emp e2;
    e2.printEmp();


    person p2;
    p2=e2;
    p2.printPerson();
    return 0;
}