#include<iostream>
using namespace std;
//add accept() function
//base
//parent
class person
{
    protected:
        int age;
        string name;
    public:
        person()
        {
            name="Ravi";
            age=24;
        }
        void printPerson()
        {
            cout<<"\n name="<<name<<"  age="<<age;
        }
        virtual void accept()
        {
            cout<<"\n enter name and age";
            cin>>name>>age;
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
        empid=124;
        sal=22000;
    }
    void printEmp() //4
    {
        this->printPerson();  //2
        cout<<"  empid="<<empid<<"  sal="<<sal;
    }
    void updateName(string newName)
    {
        this->name=newName;  //valid
    }
    void accept() //4
    {
        person::accept();//2
        cout<<"\n enter empid and sal";
        cin>>empid>>sal;
    }
};
int main()
{
    // person p1;
    // person *pptr=NULL;
    // pptr=&p1;
    // pptr->accept();//2
    // pptr->printPerson();//2
    




    // emp e1;
    // emp *eptr=NULL;
    // eptr=&e1;
    // eptr->accept(); //4
    // eptr->printEmp();//4






    // int n=99;
    // char* ptr=NULL;
    // ptr=&n;


    emp e1;
    person *pptr=NULL;
    pptr=&e1; //base class pointer can hold the object of derived class
    pptr->accept(); //emp
    pptr->printPerson();//2
    //pptr->printEmp();

    cout<<"\n";
    return 0;
}