#include<iostream>
using namespace std;


int main()
{
    int n1;
    n1=10;
    n1=50;

    int& ref=n1;
    ref=100;

    cout<<"\n value of n1="<<n1<<" address of n1="<<&n1;
    cout<<"\n value of ref="<<ref<<" address of ref="<<&ref;
   

    return 0;
}