//Destructor
/*
A destructor is a special member function that works just opposite to a constructor; unlike constructors that are used for initializing an object, destructors destroy (or delete) the object.

When is a destructor called? 
A destructor function is called automatically when the object goes out of scope: 

the function ends
the program ends
a block containing local variables ends
a delete operator is called

When is a destructor called? 
A destructor function is called automatically when the object goes out of scope: 

the function ends
the program ends
a block containing local variables ends
a delete operator is called

first the object is made and constructor is invoked, after that the member fucntions are excuted, and after that destrcutor is called
*/

#include <iostream>
using namespace std;
class HelloWorld{
public:
  //Constructor
  HelloWorld(){
    cout<<"Constructor is called"<<endl;
  }
  //Destructor
  ~HelloWorld(){
    cout<<"Destructor is called"<<endl;
   }
   //Member function
   void display(){
     cout<<"Hello World!"<<endl;
   }
};
int main(){
   //Object created
   HelloWorld obj;
   //Member function called
   obj.display();
   return 0;
}
