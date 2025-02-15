#include<stdio.h>

//class time
class time
{
    private:
        int hr;//4
        int min;//4
        int sec;//4
    public:
        // time()
        // {
        //     printf("\n --------time()---------");
        //     this->hr=0;
        //     this->min=0;
        //     this->sec=0;
        // }
        time(int h=0,int m=0,int s=0)
        {
            printf("\n --------time(int,int,int)---------");
            this->hr=h;
            this->min=m;
            this->sec=s;
        }
        void initTime()
        {
            this->hr=0;
            this->min=0;
            this->sec=0;
        }
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

        ~time()
        {
            printf("\n -------- ~time()---------");
        }

};//end of class
int main()
{
    time t1;
    t1.printTime(); //0:0:0

    //7:30:23
    time t_p(7,30,23);
    t1.incrementTimeByOneSec();
    t_p.printTime();

    return 0;
}

