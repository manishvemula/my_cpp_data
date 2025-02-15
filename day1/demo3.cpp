#include<stdio.h>

void add(int a=9,int b=9,int c=0,int d=0)
{
    int res=a+b+c+d;
    printf("\n a=%d  b=%d  c=%d  d=%d => res=%d",a,b,c,d,res);
}
int main()
{
    add(1,2,3,4);
    add(1,2,3);
    add(1,2);
    add(1);
    add();
    return 0;
}