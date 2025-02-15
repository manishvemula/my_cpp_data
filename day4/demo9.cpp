
#include<iostream>
using namespace std;

//exception handling

int main()
{
    int n,d;
    try
    {
        cout<<"\n Enter n and d";
        cin>>n>>d;
        if(d == 0)
            throw 1;
        int r=n/d;
        cout<<"\n result="<<r;
    }
    catch(int e)
    {
        cout<<"\n --- divid by zero-- (int)";
    }
    
    
}