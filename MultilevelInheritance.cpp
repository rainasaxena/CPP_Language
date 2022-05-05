//Multilevel Inheritance
/*When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.
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

class ChhotaBaby:public Admi{
    public:
    
    void peetaHai(){
        cout<<"Peeta hai"<<endl;
    }
};
//parent ki fucntionalities child me, child ki khudki aur parent ki dusre child me..dusre child me total 3 fucntionalities

int main(){
    ChhotaBaby pillu;
    pillu.khataHai(); //other class's fucntion can be accessed
    pillu.sotaHai();
    pillu.peetaHai();
    
    
    return 0;
}