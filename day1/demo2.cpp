#include<stdio.h>
//inline function
//void printMessage();
inline static int printMessage(int a)
{
    int b;
    printf("\n Good morning DESD students=%d .. :)",a);
    for(int i=0;i<3;i++)
    b=i+1;
    return b;
}

int main()
{
    printf("%d=b",printMessage(10));
    for(int i=0;i<3;i++)
    printMessage(20);
    printMessage(30);
    printMessage(40);
    return 0;
}


