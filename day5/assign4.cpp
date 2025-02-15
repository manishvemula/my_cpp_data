// Create a cpp class named as painter derived from Artist  class having 
// data member 
// 		string type [decorative, commercial]
// 		PaintingRate [500 per Painting]
// 		number of Painting.

// member function 
// 		acceptPainterData()
// 		printPainterData()
// 		calcuteTotalIncome()
// Ex( M_F_Husain , 2 ,India,  commercial, 50000, 250)


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
        if(isfamous()){
            cout<<"not famous"<<endl;
        }
        else{
            cout<<"famous"<<endl;
        }
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
    string type;
    int PaintingRate=500;
    int nop;
    public:
    void acceptPainterData(){
        cout<<"enter type and nop=";
        cin>>type>>nop;
    }  
    void printPainterData(){
        cout<<type<<nop;
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

