// Q3 :Write a class of  cylinder using following members

// Data members:
// 	height,radius,volume
// member function:
// cylinder()
// cylinder(height,radius)
// setHeight(int h)
// setRadius(int r)
// getHeight()
// getRadius()
// CalculateVolume();
// getVolume()


#include<iostream>
using namespace std;

class cylinder{
    int h;
    float r;
    float v;
    public:
    cylinder(){
        cout<<"-----------constructor-----------------\n";
        this->h=0;
        this->r=0;
    }
    ~cylinder(){
        cout<<"\n-----------destructor-----------------";
    }
    cylinder(int h,float r){
        this->h=h;
        this->r=r;
    }
    void seth(int h){
        this->h=h;
    }
    void setr(int r){
        this->r=r;
    }
    int geth(){
        return this->h;
    }
    int getr(){
        return this->r;
    }
    void calvol(){
        float v=(3.14*r*h)/3;
        cout<<"res="<<v<<endl;
    }
    int getvol(){
        // float v=(3.14*r*h)/3;
        // return v;
        return (3.14*this->r*this->h)/3;
    }

};


int main(){
    cylinder c;
    c.calvol();
    int k=c.getvol();
    cout<<"getvol="<<k<<endl;
    cylinder c1(2,3);
    c1.calvol();
    c1.seth(5);
    int k1=c1.geth();
    cout<<"geth="<<k1<<endl;
    c1.setr(7);
    c1.calvol();
    int k2=c1.getr();
    cout<<"getr="<<k2<<endl;
    return 0;
}