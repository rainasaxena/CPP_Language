//Friend function
/* A class’s friend function is defined outside that class’s scope, but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.
A friend function in C++ is a function that is preceded by the keyword “friend.”

Characteristics of friend function:
A friend function can be declared in the private or public section of the class.
It can be called a normal function without using the object.
A friend function is not in the scope of the class, of which it is a friend.
A friend function is not invoked using the class object as it is not in the class’s scope.
A friend function cannot access the private and protected data members of the class directly. It needs to make use of a class object and then access the members using the dot operator.
A friend function can be a global function or a member of another class.
*/
#include <iostream>

using namespace std;

class  rectangle{
    int length;
    int breadth;
    
    public:
    
    rectangle(){
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter Breadth: ";
    cin>>breadth;
    }
    
    friend void printDim(rectangle);  //friend data_type fucntion (arguement or data_type) and can be declared anywhere in the class
};

//the function which has to made a friend has to be out of scope of the class
void printDim(rectangle x){ //just like int n--> reactangle r1
    cout<<"The length is "<<x.length<<" and the breadth is "<<x.breadth<<endl;// without making it a friend the private info cant be taken out
}


int main()
{
    
 rectangle r1,r2;
 printDim(r1);
 printDim(r2);
    return 0;
}