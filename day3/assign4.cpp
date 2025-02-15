// Q4: 

// Assignment Program namespace
// Define one namespace na having one data member num1. Define one global function display_num() access num1 using namespace na. 
   //Inside main call display_num() function using scope resolution operator(::).
// declare one global variable and one variable in main having same name, and try to access local variable and global variable (::)
// Declare one variable in namespace and access through main.
// Define two namespace having different variables defined and access through main.
// Program to demonstrate global variable and using nested name space
// Create first namespace N1 (int n1,int n2) second namespace N2(int n1; Nested Namespace N3 int n3;) and declare one local variable to main n1
   //and access all members of namespace through main.
// n1,&n1 (local)
// ::n1,&::n1 (global)
// N1::n1, &N1::n1 (from namespace N1)
// N1::n2, &N1::n2 (from namespace N1)
// N2::n1, &N2::n1
//  N2::N3::n3, &N2::N3::n3


#include<iostream>
using namespace std;


int g=12;
namespace na{
    int num1=111;
}

namespace na2
{
    int num2=222;
}

// Define one namespace na having one data member num1. Define one global function display_num() access num1 using namespace na. 

void display_num(){
    //using namespace na;
    cout<<na::num1<<endl;
}

//Program to demonstrate global variable and using nested name space

namespace ns{
    int num3=333;
    namespace nns{
        int num4=444;
    }
}

namespace N1{
    int n1=100;
    int n2=200;
}

namespace N2{
    int n1; 
    namespace N3{
        int n3;
    }
}

int main(){
    int g=23;
    // declare one global variable and one variable in main having same name, and try to access local variable and global variable (::)

    cout << "Local g: " << g << endl;
    cout << "Global g: " << ::g << endl;

    display_num();    //Inside main call display_num() function using scope resolution operator(::).


    // Declare one variable in namespace and access through main.
    cout<<na::num1<<endl;

    // Define two namespace having different variables defined and access through main.
    cout<<na2::num2<<endl;

// n1,&n1 (local)
// ::n1,&::n1 (global)
// N1::n1, &N1::n1 (from namespace N1)
// N1::n2, &N1::n2 (from namespace N1)
// N2::n1, &N2::n1
//  N2::N3::n3, &N2::N3::n3
    int n1=01;
    cout << "Local n1: " << n1 << " Address: " << &n1 << endl;
    cout << "Namespace N1::n1: " << N1::n1 << " Address: " << &N1::n1 << endl;
    cout << "Namespace N1::n2: " << N1::n2 << " Address: " << &N1::n2 << endl;
    cout << "Namespace N2::n1: " << N2::n1 << " Address: " << &N2::n1 << endl;
    cout << "Namespace N2::N3::n3: " << N2::N3::n3 << " Address: " << &N2::N3::n3 << endl;

    return 0;
}






