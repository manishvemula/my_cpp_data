// Q2: 2> create TDate class having data member day ,month , year
// and following functions

// TDate();
// TDate(int day,int month,int year);
// AcceptDate();
// PrintDate_dd-mm-yyyy();    //Ex = 2-5-2022
// PrintDate_dd-month-yyyy(); //Ex = 2-May-2022
// bool ValidateDate();

#include<stdio.h>


class TDate{
    private:
        int day;
        int mon;
        int yr;
        char month[10];
    public:
        // TDate(){
        //     printf("-------------hii--------------\n");
        // }
        ~TDate(){
            printf("-------------bye--------------\n");
        }
        TDate(){
            printf("date is %d-%d-%d\n",day,mon,yr);
        }
        TDate(int day,int month,int year){
            printf("date is %d-%d-%d\n",day,mon,yr);
        }
        void acceptdate(){
            scanf("%d\n%d\n%d\n%s",&day,&mon,&yr,month);
        }
        void printdate(){
            printf("date is %d-%d-%d\n",day,mon,yr);
        }
        void printdate_mm(){
            printf("date is %d-%s-%d\n",day,month,yr);
        }
        bool validatedate(){
            if(mon<=12 && day<=31){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    TDate t;
    t.printdate();

    t.printdate_mm();

    t.acceptdate();
    t.printdate();

    t.printdate_mm();
    TDate t1(2,55,2000);
    t1.printdate();

    t1.printdate_mm();

    //t1.acceptdate();
    t1.printdate();

    t1.printdate_mm();

    return 0;
}