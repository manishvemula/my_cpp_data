
// Create a cpp class named as singer derived from Artist  class having 
// data member 
// 		number of album 
// 		RatePerSong [1000 per song]
// member function 
// 		acceptsingerData()
// 		printsingerData()
// 		calcuteTotalIncome()
// Ex( Michael Jackson, 4 , American ,  70000, 1350)


#include<iostream>
using namespace std;

class artist{
    char name[20];
    int rating;
    char country[20];
    public:
    void accept(){
        cout<<"enter details: name,rating,country=";
        cin>>name>>rating>>country;
    }
    void print(){
        cout<<name<<endl;
        cout<<rating<<endl;
        cout<<country<<endl;
        // if(isfamous()){
        //     cout<<"not famous"<<endl;
        // }
        // else{
        //     cout<<"famous"<<endl;
        // }
    }
    bool isfamous(){
        if(rating<3){
            return true;
        }
        else{
            return false;
        }
    }

};

class painter:public artist{
    int PaintingRate=1000;
    int nop;
    public:
    void acceptPainterData(){
        cout<<"enter type and nop=";
        cin>>nop;
    }  
    void printPainterData(){
        cout<<nop;
    }
    void calcuteTotalIncome(){
        int i=nop*PaintingRate;
        cout<<"totalincome="<<i<<endl;
    }
};

int main(){
    painter p;
    p.accept();
    p.acceptPainterData();
    p.print();
    p.printPainterData();
    p.calcuteTotalIncome();
    return 0;
}

