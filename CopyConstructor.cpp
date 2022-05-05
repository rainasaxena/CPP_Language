//Copy Constructor
/*
A contructor has the same name as the class name and is defined in the public access modifier.
Here wihtout having to give cin>> statements values are given as arguements in the fucntion itself, and also in the bracket of each object.
here, A copy constructor is a member function that initializes an object using another object of the same class
*/
#include <iostream>
using namespace std;

class box{
    
    int len;
    int bred;
    int height;
    
    public:
    
    box(int a, int b, int c){ //constructor initialised for b1 object
        len=a;
        bred=b;
        height=c;
    }
    
    //copy constructor initialised
    box (const box & b2){ // class_name (const class_name & object for copying)
        len=b2.len;
        bred=b2.bred;
        height=b2.height;
    }
    
    int getLen(){
        return len;
    }
    
    int getBred(){
        return bred;
    }
    
    int getHeight(){
        return height;
    }
    

};

int main()
{
    box b1(1,2,3);
    box b2=b1; //copy b1 values to b2
    cout<<"Box 1: "<<endl;
    cout<<"Length: "<<b1.getLen()<<endl;
    cout<<"Breadth: "<<b1.getBred()<<endl;
    cout<<"Height: "<<b1.getHeight()<<endl;
    
    cout<<endl;
    
    cout<<"Box 2: "<<endl;
    cout<<"Length: "<<b2.getLen()<<endl;
    cout<<"Breadth: "<<b2.getBred()<<endl;
    cout<<"Height: "<<b2.getHeight()<<endl;
    

    return 0;
}