#include<iostream>
using namespace std;

class c2;//Declare initially because complier check c2 class

class c1{
    int value1;
    friend void swap(c1 &,c2 &);
    public:
    void setdata(int a){
        value1 = a;
    }
    void display1(){
        cout<<value1<<endl;
    }
};

class c2{
    int value2;
    friend void swap(c1 &,c2 &);
    public:
    void setdata(int b){
        value2 = b;
    }
    void display2(){
        cout<<value2<<endl;
    }
};

void swap(c1 &x,c2 &y){
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main(){
    cout<<"Before swapping :"<<endl;
    c1 o1;
    o1.setdata(1);
    o1.display1();

    c2 o2;
    o2.setdata(2);
    o2.display2();

    cout<<"After swapping :"<<endl;

    swap(o1,o2);
    o1.display1();
    o2.display2();

    return 0;
}