#include<stdio.h>
struct time
{
    private:
        int hr;
        int min;
        int sec=3;
    public:
        void acceptTime()
        {
            printf("\n enter Time");
            scanf("%d%d%d",&hr,&min,&sec);
        }
        void printTime()
        {
            printf("\n Time=%d:%d:%d",hr,min,sec);
        }
        void incrTimeByOneSec()
        {
            struct time t1;
            t1.sec+=1;
            printf("\nincremented time=%d",t1.sec);
        }
};//end of struct
int main()
{
   int n1;
   time t1;
   t1.acceptTime();
   //t1.hr=3; //error
   t1.printTime();
   t1.incrTimeByOneSec();
    return 0;
}