// Write a .cpp file having a employee struct contains
// empID,empName,empSalary,and two function AcceptData and 
// printDate . and call these function in main()

#include<stdio.h>

struct employee{
    int empid;
    char empname[20];
    int empsal;

    void acceptdata(){
        printf("enter empid,empname,empsal");
        scanf("%d\n%s\n%d",&empid,empname,&empsal);
    }
    void printdate(){
        printf("%d:%s:%d",empid,empname,empsal);
    }
};


int main(){
    struct employee e;
    e.acceptdata();
    e.printdate();
    return 0;
}