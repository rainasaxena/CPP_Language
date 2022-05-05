#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
    void setNum(int n1, int n2){
        a=n1;
        b=n2;
    }

    friend complex sumComplex(complex o1, complex o2);// you can access private my data :)

    void printNum(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};

complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setNum((o1.a+o2.a),(o1.b+o2.b));//trying to access private data
    return o3;
}




int main(){
    
    complex c1, c2, sum;
    c1.setNum(1,4);
    c2.setNum(5,8);
    c1.printNum();
    c2.printNum();
    sum=sumComplex(c1,c2);
    sum.printNum();

    return 0;
}

//properties of friend function
/* not in the scope of class, and cant be called rom the object of that class c1.sumComplex()=imvalid
can be invoked without the help of object
usually contains objects as arguements
can be declared inside public or private
its cant access members directly by their names and need*/
