#include<stdio.h>
//setter, getter ,Facilitator
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
        //t_p.setMin(15);
        void setMin(int min)//setter
        {
            //line 8 = para
            this->min=min;
        }
        
        // int s=t_p.getSec();
        int getSec() //getter
        {
            return this->sec;
        }
        void printTime()//Facilitator
        {
            printf("\n Time=%d:%d:%d",this->hr,min,sec);
        }
        void acceptTime() //Facilitator
        {
            printf("\n Enter time");
            scanf("%d%d%d",&this->hr,&this->min,&this->sec);
        }
        void incrementTimeByOneSec()//Facilitator
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
    //7:30:23
    time t_p(7,30,23);
    t_p.printTime();
    //min=15
    //t_p.min=15;
    t_p.setMin(15);
    t_p.printTime();

    //int s=t_p.sec;
    int s=t_p.getSec();
    printf("\n only sec= %d",s);
     return 0;
}

