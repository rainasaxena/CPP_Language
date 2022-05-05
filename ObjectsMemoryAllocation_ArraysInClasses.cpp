#include<iostream>
using namespace std;

class shop{
    int itemID[10];
    int itemPrice[10];
    int counter;

    public:
        void initCounter(void){counter=0;}
        void setPrice(void);
        void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter the item "<<counter+1<<" ID: "<<endl;
    cin>>itemID[counter];
    cout<<"Enter the price of the item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void){
    for (int i=0;i<counter;i++){
        cout<<"Item ID: "<<itemID[i]<<". Item price: "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}