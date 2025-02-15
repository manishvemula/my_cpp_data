// Q1: Write a cpp program  having a employee cpp class contains
// empID,empName,empSalary and two function AcceptData and 
// printDate . and call these function in main()

#include<stdio.h>

class employee
{
private:
    int empid;
    char empname[20];
    int empsal;
public:
    //employee();
    employee()
{
    printf("----------------hii----------------\n");
}

~employee()
{
    printf("----------------bye----------------\n");
}

    void printTime()
        {
            printf("\n %d:%s:%d",this->empid,this->empname,this->empsal);
        }
    void acceptTime()
        {
            printf("\nEnter data");
            scanf("%d\n%s\n%d",&this->empid,this->empname,&this->empsal);
        }
    //~employee();
};


int main(){
    employee e;
    e.acceptTime();
    e.printTime();
    return 0;
}
