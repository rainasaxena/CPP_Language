#include<iostream>
using namespace std;



class check{
    int n=0;

    public:
    void FunctionCall(){
        n++;
    }

    void show(){
        cout<<"The function is called "<<n<<" times"<<endl;
    }
 
};

int main(){
    
    check one;
    one.FunctionCall();
    one.FunctionCall();
    one.FunctionCall();
    one.FunctionCall();
    one.FunctionCall();
    one.show();
    return 0;
}
