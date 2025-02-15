#include<stdio.h>

//class time 
class time
{
    private:
        int hr;//4
        int min;//4/
        int sec;//4
    public:
        void printTime()
        {
            printf("\n Time=%d:%d:%d",this->hr,min,sec);
        }
        void acceptTime()
        {
            printf("\n Enter time");
            scanf("%d%d%d",&this->hr,&this->min,&this->sec);
        }
        void incrementTimeByOneSec()
        {
            this->sec++;
            if(this->sec>=60)
            {
                this->sec=0;
                this->min++;
            }
            if(min>=60)
            {
                min=0;
                hr++;
            }
            if(hr>=24)
            {
                hr=0;
            }
        }

};//end of class
int main()
{
    int n1;
    time t1;//if time is class t1 -> object 
    
    t1.acceptTime();
    t1.printTime();
    t1.incrementTimeByOneSec();
    t1.printTime();
    printf("\n size of t1 object=%d",sizeof(t1));
    time t2;
    t2.acceptTime();
    t2.printTime();

    time t3;
    t3.acceptTime();
    t3.printTime();
    return 0;
}

