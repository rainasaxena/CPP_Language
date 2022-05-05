//Parametrized Constructor
/*
A contructor has the same name as the class name and is defined in the public access modifier.
Here wihtout having to give cin>> statements values are given as arguements in the fucntion itself, and also in the bracket of each object.
*/
#include <iostream>
using namespace std;

class box{
    
    public:
    
    int len;
    int bred;
    int height;
    
    
    box(int a, int b, int c){
        len=a;
        bred=b;
        height=c;
        
    }

};

int main()
{
    box b1(1,2,3),b2(4,5,6); //values are initialised without having to give a cin>> statement
    cout<<b1.len<<b1.bred<<b1.height<<endl;
    cout<<b2.len<<b2.bred<<b2.height;
    

    return 0;
}