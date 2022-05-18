#include<iostream>
using namespace std;

class student{
    int reg_num;
    int age;
    string gender;
    float height;
    float weight;
    int cgpa;

    public:
    void getData(){
        cout<<"Enter Reg Num: ";
        cin>>reg_num;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter Gender: ";
        cin>>gender;
        cout<<"Enter Height: ";
        cin>>height;
        cout<<"Enter Weight: ";
        cin>>weight;
        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }

    void check(){
        if (cgpa>9){
            cout<<reg_num<<endl;
        }
    }

    
};

int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    int i;

    student arr[n];

    for(i=0;i<n;i++){
        arr[i].getData();
    }

    for(i=0;i<n;i++){
        arr[i].check();
    }
    
    return 0;
}
