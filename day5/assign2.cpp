
// Question 2: 
// create Address class having data members cityName ,stateName , Pincode and following functions

// 	AcceptAddress ();
// 	PrintAddress ();

// Create a class Student having  data member as name , courseName , Home-address and following functions.
	
// 	AcceptStudentData();
// 	PrintStudentData();

#include<iostream>
using namespace std;

class address{
    char cityname[20];
    char statename[20];
    int pincode;
    public:
    void acceptaddr(){
        cout<<"enter details cityname and statename";
        cin>>cityname>>statename>>pincode;
    }
    void printaddr(){
        cout<<cityname<<":"<<statename<<":"<<pincode<<endl;
    }
};

class student{
    char name[20];
    char coursename[20];
    address homeaddr;
    public:
    void acceptaddr(){
        cout<<"enter name and coursename";
        cin>>name>>coursename;
        homeaddr.acceptaddr();
    }
    void printaddr(){
        cout<<name<<":"<<coursename<<":"<<endl;
        homeaddr.printaddr();
    }
};


int main(){
    student s;
    s.acceptaddr();
    cout<<"details are: ";
    s.printaddr();
}