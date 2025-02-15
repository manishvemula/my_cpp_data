#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }
    complex sum(const complex& c2)
    {
        complex c3;
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        return c3;
    }
};

int main()
{
    
    complex c1(5,7);
    c1.printComplexNumber();

    complex c2(3,2),c3;
    c2.printComplexNumber();

    c3=c1.sum(c2);
    c3.printComplexNumber();
   

    return 0;
}