// Q2: Update TDate class

// i> Add setter and getter for day ,month and year
// ii> update PrintDate() function using cout
// iii> update AcceptDate() function using cin,cout

#include<iostream>
using namespace std;

class tdate{
    int d;
    int m;
    int y;
    public:
    void printdate(){
        cout<<d<<":"<<m<<":"<<y<<endl;
    }
    void acceptdate(){
        cout<<"enter the d,m,y:";
        cin>>d>>m>>y;
    }
    tdate(){
        cout<<"--------------tdate()-------------";
    }
    ~tdate(){
        cout<<"--------------~tdate()-----------";
    }
    void setday(int d){
        this->d=d;
    }
    int getday(){
        return this->d;
    }

};


int main(){
    tdate t;
    t.acceptdate();
    t.printdate();
    t.setday(22);
    t.printdate();
    int k=t.getday();
    cout<<"getday="<<k<<endl;
    return 0;
}