#include<stdio.h>

struct time
{
    int hr;
    int min;
    int sec;
};
void acceptTime(struct time *pt1)//call by address
{
    printf("\n enter Time");
    scanf("%d%d%d",&pt1->hr,&pt1->min,&pt1->sec);
}
void printTime(struct time t1)//call by value
{
    printf("\n Time=%d:%d:%d",t1.hr,t1.min,t1.sec);
}
int main()
{
   int n1;
   struct time t1;
   t1.hr=10;
   t1.min=47;
   t1.sec=55;
   printTime(t1);
   acceptTime(&t1);
   printTime(t1);
    return 0;
}