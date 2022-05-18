//Banking Management System
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
using namespace std;

class account{
    protected:
    string name;
    int ac_no;
    string type;
    int bal;

    public:

    void input(){
        cin>>name;
        cin>>ac_no;
        cin>>type;
        cin>>bal;
    }

    void output(){
        cout<<name;
        cout<<ac_no;
        cout<<type;
    }

    void deposit(){
        int depo;
        cout<<"Deposit Amount: ";
        cin>>depo;
        bal=bal+depo;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"A/c No.: "<<ac_no<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Available Balance: "<<bal<<endl;
    }
};

class savings: public account{
    int inter;
      public:

    int comp_int(){
         int time1,rate1;
         rate1=10;
         cout<<"\n Enter time: ";cin>>time1;
         inter=bal*pow(1+rate1/100.0,time1)-bal;
         return inter;
      }

    void update_bal(){
         bal=bal+comp_int();
      }
    
    void withdraw(){
        int amt;
        cout<<"Enter amount to be withdrawn: ";
        cin>>amt;
        if(bal>=amt){
            bal=bal-amt;
            cout<<"Balance Amount is: "<<bal<<endl;
        }
        else{
            cout<<"Not enough amount!";
        }
        
    }

};



int main(){
    savings s1;
      s1.input();
      s1.output();
      s1.deposit();
      s1.display();
      s1.withdraw();
      s1.display();
    return 0;
}
