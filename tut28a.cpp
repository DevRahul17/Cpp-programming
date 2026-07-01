#include<iostream>
using namespace std;

class y;//Because it check line by line so we declare it first

class x{
    int value1;
    public:
    void setvalue(int a){
        value1 = a;
    }
    friend void add(x,y);
};

class y{
    int value2;
    public:
    void setvalue(int b){
        value2 = b;
    }
    friend void add(x,y);
};

void add(x o1,y o2){
    cout<<"Summing data of x and y objects is "<<o1.value1 + o2.value2;
}

int main(){
    x o1;//Creating object
    o1.setvalue(5);

    y o2;
    o2.setvalue(7);

    add(o1,o2);

    return 0;
}