
// Q3: Write a class complex.
// Data member - real and imaginary  --- 7+j8
// add menber function as Parameterless constructor , Parameterized constructor , accept complex number and print complex number.

#include<stdio.h>
class complex{
    private:
    int r;
    int i;
    public:
    complex(){
        printf("%d+j%d\n",r,i);
    }
    complex(int a, int b){
        printf("%d+j%d\n",a,b);
    }
    ~complex(){
        printf("-----------bye------------\n");
    }
    void accept(){
        printf("r and i");
        scanf("%d\n%d\n",&r,&i);
    }
    void print(){
        printf("%d+j%d\n",r,i);
    }
};

int main(){
    complex c;
    c.accept();
    c.print();
    complex c1(2,3);
    c1.accept();
    c1.print();
}