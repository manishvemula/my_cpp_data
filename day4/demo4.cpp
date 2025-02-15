//static demo
#include<iostream>
using namespace std;
//static demo
class complex
{
    int real;//4
    int imag;//4
    static int count;
    public:
        complex(int r=1,int i=1)
        {
            count++;
            this->real=r;
            this->imag=i; 
        }
        static void printCount()
        {
            //this-> not available
            cout<<"\n value of count="<<count<<" address of count="<<&count;
        }
        void printComplexNumber()
        {
            cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
        }     
};
int complex::count=0;
int main()
{

    complex::printCount();
    complex c1;
    cout<<"\n size of c1="<<sizeof(c1); 
    c1.printCount();
    
    complex c2;
    c2.printCount();

    complex c3;
    c3.printCount();
    return 0;
}
