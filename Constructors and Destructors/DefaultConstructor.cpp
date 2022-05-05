//Default Constructor
/*
A contructor has the same name as the class name and is defined in the public access modifier
*/
#include <iostream>
using namespace std;

class box{
    
    public:
    
    int len;
    int bred;
    int height;
    
    
    box(){
        cout<<"Enter len: ";
        cin>>len;
        
        cout<<"Enter bred: ";
        cin>>bred;
        
        cout<<"Enter height: ";
        cin>>height;
    }

};

int main()
{
    box b1,b2;
    cout<<b1.len<<b1.bred<<b1.height<<endl;
    cout<<b2.len<<b2.bred<<b2.height;
    

    return 0;
}
