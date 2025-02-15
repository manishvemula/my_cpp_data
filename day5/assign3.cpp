// Question 1:

// Create a cpp class named as Artist having 
// data member 
// 		name , rating (3 ,4) , country 
// member function 
// 		acceptArtistData()
// 		printArtistData()
// 		bool isFamous() --> [if rating is 1/2 then not 	Famous ], [if rating is 3/4 then Famous Artist  ]


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

int main(){
    artist a;
    a.accept();
    a.print();
    return 0;
}