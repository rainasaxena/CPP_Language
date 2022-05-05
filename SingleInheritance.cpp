//Single Inheritance
/*In single inheritance, one class can extend the functionality of another class. In single inheritance, there is only one parent class and one child class.
*/
#include<iostream>
using namespace std;

class Insaan{ //parent class
    public:
    
    void khataHai(){
    cout<<"Khata hai"<<endl;
    }
};

class Admi:public Insaan{ //public mode inheritance of Insaan class in child class Admi
     public:
     
     void sotaHai(){
         cout<<"Sota hai"<<endl;
     }
};

int main(){
    Admi tarang;
    tarang.khataHai(); //other class's fucntion can be accessed
    tarang.sotaHai();
    
    
    return 0;
}