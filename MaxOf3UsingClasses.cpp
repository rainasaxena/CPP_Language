#include<iostream>
using namespace std;

class number{
    int a;
    int b;
    int c;

    public:

    void getnum(){
        cout<<"Num1:"; cin>>a;
        cout<<"Num2:"; cin>>b;
        cout<<"Num3:"; cin>>c;
    }

    void max(){
        if (a>b && a>c){
            cout<<"A largest";
        }

        if (b>a && b>c){
            cout<<"B largest";
        }

        if (c>a && c>b){
            cout<<"C largest";
        }
    }
};




int main(){
    number one;
    one.getnum();
    one.max();
    return 0;
}
