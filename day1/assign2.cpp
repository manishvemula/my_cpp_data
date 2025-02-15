// Question 2:

// Define a struct in C for to save time 
// struct members

// Time struct
// int hr,min,sec
// initTime()    ->0:0:0
// acceptTime()
// DisplayTime()
// increamentTimeBy1Min()

#include<stdio.h>

struct time{
    private:
    int hr;
    int min;
    int sec;
    public:
    void inittime(){
        hr=0;
        min=0;
        sec=0;
    }

    void accepttime(){
        printf("enter hr:min:sec");
        scanf("%d:%d:%d",&hr,&min,&sec);
        if ( hr < 0 || hr > 23 || min < 0 || min > 59 || sec < 0 || sec > 59) {
        printf("Invalid time input! Resetting to 00:00:00.\n");
        inittime();
        }   
    }

    void displaytime(){
        printf("%d:%d:%d",hr,min,sec);
    }

    void incr(){
        min+=1;
        if(min>=60){
            min=0;
            hr+=1;
            if(hr>=24){
                hr=0;
            }
        }
        printf("%d:%d:%d",hr,min,sec);
    }
};

int main(){
    struct time t;
    printf("%d\n",sizeof(t));
    t.inittime();
    t.accepttime();
    t.displaytime();
    printf("incemented time:");
    t.incr();
}