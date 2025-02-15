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
    //complex cc(c1);
    //complex obj=c1
    complex(const complex& obj)
    {
        cout<<"\n ----------complex()----------";
        this->real=obj.real;
        this->imag=obj.imag;
        //obj.imag=998; error
    }
    void printComplexNumber()
    {
        cout<<this->real<<"+j"<<this->imag;
    }
    ~complex(){
        cout<<"\n ----------~complex()----------";
    }
};

int main()
{
    cout<<"\n\nc1=>";
    complex c1(5,7);
    c1.printComplexNumber();

    complex cc(c1); //complex cc=c1;
    cout<<"\n\ncc=>";
    cc.printComplexNumber();

    
    

    return 0;
}