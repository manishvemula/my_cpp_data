#include<iostream>
using namespace std;


//int& x=a;
void mySwap(int &x,int& y)
{
    int t=x;
    x=y;
    y=t;
}
int main()
{
    int a=11 ,b=99;
    cout<<"\n before swap a="<<a<<"  b="<<b;
    mySwap(a,b); 
    cout<<"\n after swap a="<<a<<"  b="<<b;
    cout<<"\n";
    return 0;
}