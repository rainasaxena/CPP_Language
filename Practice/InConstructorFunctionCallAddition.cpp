#include<iostream>
using namespace std;

class haha{

    public:

    void add(int a, int b){
        int sum=a+b;
        cout<<sum<<endl;
    }

    haha(int a, int b){
        
        add(a,b);
    }

};

int main(){  
    
    haha one(1,2);
    haha two(7,5);

    return 0;
}
