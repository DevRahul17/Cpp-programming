/*-------- Constructor Overloading ---------------*/
/*In Function Overloading same constructor have different arguments*/
#include<iostream>
using namespace std;

class complex{
    int x,y;

    public:
    complex(int a,int b){//Constructor
        x = a;
        y = b;
    }

    complex(){//Function Overloading
        x = 0;
        y = 0;
    }

    complex(int a){//Function Overloading
        x = a;
        y = 6;
    }

    void print(){
        cout<<"The complex number is "<<x<<" + "<<y<<" i "<<endl;
    }
};

int main(){
    complex c1(2,3);
    c1.print();

    complex c2;//Correct way to call default constructor
    c2.print();

    complex c3(5);
    c3.print();

    return 0;
}