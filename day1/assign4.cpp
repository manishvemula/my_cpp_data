// function overloading
// 4) write a function 'Add' which is able to add 
// 3 int value and 1 float value 
// 2 int value and 2 float value ,
// 1 int value and 3 float value,
// 4 int value ,
// 4 float value,


#include<stdio.h>

void add(int a,int b,int c,float d){
    printf("%f\n",a+b+c+d);
}

void add(int a,int b,float c,float d){
    printf("%f\n",a+b+c+d);
}

void add(int a,float b,float c,float d){
    printf("%f\n",a+b+c+d);
}

void add(int a,int b,int c,int d){
    printf("%d\n",a+b+c+d);
}

void add(float a,float b,float c,float d){
    printf("%f\n",a+b+c+d);
}

int main(){
    add(1,2,3,4.0f);
    add(2,3,4.0f,5.9f);
    add(2,5.0f,3.3f,9.0f);
    add(1,2,3,4);
    add(2.0f,3.0f,4.0f,5.0f);
    return 0;
}