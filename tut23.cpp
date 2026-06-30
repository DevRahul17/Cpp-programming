/*----------------C++ Objects Memory Allocation & using Arrays in Classes----------------------*/
#include<iostream>
using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(){
        counter = 0;
    }
    void setprice();
    void displayprice();
};

void shop :: setprice(){//:: Scope Resolution Operator
    cout<<"Enter id of your item"<<endl;
    cin>>itemid[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: displayprice(){
    for(int i = 0;i < counter;i++){
        cout<<"The price of item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}

int main(){
    shop s;
    s.initcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.displayprice();

    return 0;
}