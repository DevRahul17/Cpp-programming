/*------------ Constructors With Default Arguments ---------------*/
#include<iostream>
using namespace std;

class position{
    int r,h;

public:
    position(int a,int b = 2){//Here we pass default argument b = 2 in constructor
        r = a;
        h = b;
    }

    void printrank(){//We declare function here
        cout<<"Rahul got rank "<<r<<" and Harry got rank "<<h<<endl;
    }
};

int main(){
    position r1(1);//b take default value = 2
    r1.printrank();

    return 0;
}