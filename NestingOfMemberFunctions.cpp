#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;

    public:
    void read(void);
    void check_bin(void);
    
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: check_bin(void){
    for (int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Format!"<<endl;
            exit(0);
        }
    }

}


int main(){
    binary b;
    b.read();
    b.check_bin();
    
    return 0;
}