#include<iostream>
using namespace std;


class array
{
    int size;
    int* ptr;
    public:
    array(int s=1)
    {
        this->size=s;
        this->ptr=new int[this->size];
        for (int i = 0; i < this->size; i++)
        {
            this->ptr[i]=1;
        }
    }
    array(const array& a1)
    {
        this->size=a1.size;
        this->ptr=new int[this->size];
         for (int i = 0; i < this->size; i++)
        {
            this->ptr[i]=a1.ptr[i];
        }
    }
    void printArray()
    {
        cout<<"\n Array=";
        for (int i = 0; i < this->size; i++)
        {
            cout<<"\n"<<this->ptr[i];
        }
    }
    ~array()
    {
        if(this->ptr!=NULL)
        {
            delete []this->ptr;
            this->ptr=NULL;
        }
    }
};

int main()
{
    array a1(5);
    a1.printArray();

    array ac(a1);  //array ac=a1;
    ac.printArray();
    return 0;
}