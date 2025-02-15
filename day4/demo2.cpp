#include<iostream>
using namespace std;
//dynamic object
class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n -----complex()-------";
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }
    ~complex()
    {
        cout<<"\n -----  ~complex()-------"; 
    }
};

int main()
{
    
    complex c1(5,7);
    c1.printComplexNumber();

    complex *cptr=new complex(22,44);
    

    cptr->printComplexNumber();
    complex *cptr1=new complex(9,44);
    cptr1->printComplexNumber();
    delete cptr;
    delete cptr1;
    cptr=NULL;
    //cptr1=NULL;

    complex c2(3,2);
    c2.printComplexNumber();
    
    

    return 0;
}