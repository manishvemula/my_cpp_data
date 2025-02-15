#include<stdio.h>


class empty
{
    
};

int main()
{ 
    empty e1;
    printf("\n size of e1 obj=%d",sizeof(e1));//1 byte
    empty e2;
    printf("\n size of e2 obj=%d",sizeof(e2));
    return 0;
}