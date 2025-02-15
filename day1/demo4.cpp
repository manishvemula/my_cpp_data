#include<stdio.h>

void printValue(int a)
{
    printf("\n value of int a=%d",a);
}
// int printValue(int a)
// {
//     printf("\n value of int a=%d",a);
//     return a;
// }
void printValue(int a,int b)
{
     printf("\n value of int a=%d b=%d",a,b);
}
void printValue(char a)
{
     printf("\n value of char c=%c",a);
}
void printValue(char c,int n)
{
     printf("\n value of char c=%c int n=%d",c,n);
}
void printValue(int a, char ch)
{
    printf("\n value of int a=%d char ch=%c",a,ch);
}


int main()
{
   printValue(11);
   printValue(11,22);
   printValue(97);
   printValue('S',44);
   printValue(5,'C');
    return 0;
}