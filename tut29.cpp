/*-----------Constructors------------
1.It should be decalred inside public and have same function
name of class name
2.It automatically involked(called) whenever object is created
3.It cannot return values and don't have return types
4.It can have default arguments
5.We cannot refer to their address*/
#include<iostream>
using namespace std;

class complex{
    int a,b,c,d;
    public:
    void printcomplex1(){
        cout<<"The complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
    void printcomplex2(){
        cout<<"The complex number is "<<c<<" + "<<d<<" i "<<endl;
    }

    complex();//Constructor declaration
};

complex :: complex(){//Construction definition
    a = 10;
    b = 20;
    c = 30;
    d = 40;
}

int main(){
    complex c1,c2;//Creating objects
    c1.printcomplex1();
    c2.printcomplex2();

    return 0;
}