// default argument
// 5> write a function that has the default values for multiple parameters. 
// Call the function where the parameters will use the default values 
// and where the values will be passed to
//  the function.

#include<stdio.h>

void add(int a,int b=0,int c=0){
    printf("%d\n",a+b+c);
}

int main(){
    add(2,3,4);
    add(3,4);
    add(3);
    return 0;
}

