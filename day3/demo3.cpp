#include<iostream>
using namespace std;
#include<stdio.h>
//printf() => cout  using  <<
//scanf() =>  cin   using  >>

int main()
{
    printf("\n Hello Sunbeam");
    cout<<"Hello Sunbeam"<<endl;

   
    int a=100;
    printf("\n value of a=%d",a);
    cout<<"\n value of a="<<a;

    int x=22,y=33;
    printf("\n value of x=%d  value of y=%d",x,y);
    cout<<"\n value of x="<<x<<"  value of y="<<y;
                              
    int a1;
    cout<<"\n Enter value for a1";
    //scanf("%d",&a1);
    cin>>a1;
    cout<<"\n value of a1="<<a1;

    int x1,y1;
    cout<<"\n Enter value for x1,y1\n";
    //scanf("%d%d",&x1,&y1);
    cin>>x1>>y1;
    cout<<"\n value of x1="<<x1<<"  value of y1="<<y1;


    return 0;
}

