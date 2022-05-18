#include<iostream>
using namespace std;

class swappy{
    int a;
    int b;

    public:
    void get(){
         cout<<"Enter two numbers: ";
         cin>>a;
         cin>>b;
     }

    void swapped(){

        cout<<"Before swap: "<<a<<" "<<b<<endl;
        int temp;
        temp=b;
        b=a;
        a=temp;

        cout<<"After swap: "<<a<<" "<<b;
    }

    
};

int main(){
    swappy one;
    one.get();
    one.swapped();
    
    
    return 0;
}
