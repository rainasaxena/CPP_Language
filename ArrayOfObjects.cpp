#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public:

    void setID(){
        salary=122;
        cout<<"Enter ID: ";
        cin>>id; 
    }

    void getID(){
        cout<<"ID: "<<id<<endl;
    }
};

int main(){
    int i;
    // employee raina, lucy, harry;

    // raina.setID();
    // raina.getID();
    //But what if there are 100 employees?!
    //for that we need array

    employee insta[4]; //4 employees of instagram
    for(i=0;i<4;i++){
        insta[i].setID();
        insta[i].getID();
    }
    cout<<"The total employees are: "<<i;
    //take input for 4 employees without having to give names

    return 0;
}