//Constructor Overloading
/*
In C++, We can have more than one constructor in a class with the same name, as long as each has a different list of arguments. This concept is known as Constructor Overloading and is quite similar to function overloading.

Overloaded constructors essentially have the same name (name of the class) and a different number of arguments.
A constructor is called depending upon the number and type of arguments passed.
While creating the object, arguments must be passed to let the compiler know which constructor needs to be called.
*/
#include <iostream>
using namespace std;
class construct {
    public:
        float area;
    // Constructor with no parameters 
    construct() {
        area = 0;
    }
    // Constructor with two parameters 
    construct(int a, int b) {
        area = a * b;
    }
    void disp() {
        cout << area << endl;
    }
};
int main() {
    // Constructor Overloading 
    // with two different constructors 
    // of class name 
    construct o;
    construct o2(10, 20);
    cout << "Area using default constructor: ";
    o.disp();
    cout << "Area using parameterized constructor: ";
    o2.disp();
    return 0;
}
Output:
Area using default constructor: 0
Area using parameterized constructor: 200