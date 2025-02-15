#include<iostream>
using namespace std;
//singleton class
class singleton
{
   static singleton *ptr;
   singleton()
   {
        cout<<"\n --------singleton()--------";
   }
   public:
   static singleton* getOjebct()
   {
        if (ptr == NULL)
            ptr=new singleton();
        return ptr;
   }
   void print()
   {
    cout<<"print";
   }
};
singleton* singleton::ptr=NULL;

int main()
{
    singleton *obj=singleton::getOjebct();
    cout<<"\n address of obj="<<obj;
    obj->print();
    singleton *obj1=singleton::getOjebct();
     cout<<"\n address of obj1="<<obj1;
     
    singleton *obj2=singleton::getOjebct();
     cout<<"\n address of obj2="<<obj2;

    singleton *obj3=singleton::getOjebct();
    cout<<"\n address of obj3="<<obj3;

    
    return 0;
}