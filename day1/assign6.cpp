// //inline functiom

// 6> Write a inline function to calculate area of triangle.
// Input base and Height from user and print the result.

#include<stdio.h>


inline void area(int b,int h){
    int res=(h+b)/2;
    printf("%d",res);
}

int main(){
    area(2,2);
    return 0;
}
