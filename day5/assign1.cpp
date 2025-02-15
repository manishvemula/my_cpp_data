// Question 1: create TDate class having data members day ,month , year and following functions

// 	AcceptDate();
// 	PrintDate();

// Create a class Person having  data member as name , age , date_of_birth and following functions.
 
// 	AcceptPersonData();
// 	PrintPersonData();

#include<iostream>
using namespace std;

class tdate{
    int day;
    int mon;
    int yr;
    public:
    void acceptdata(){
        cout<<"enter dd:mm:yyyy=";
        cin>>day>>mon>>yr;
    }
    void printdata(){
        cout<<day<<":"<<mon<<":"<<yr;
    }
};

class person{
    char name[20];
    int age;
    tdate dob;
    public:
    // int getDOB(){
    //     return this->dob;
    // }
    void acceptdata(){
        cout<<"enter name and age=";
        cin>>name>>age;
        dob.acceptdata();
    }
    void printdata(){
        cout<<name<<","<<age<<endl;
        dob.printdata();
    }

};

int main(){
    
    person p;
    p.acceptdata();
    cout<<"person details:";
    p.printdata();
    
}
