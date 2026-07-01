/*--------------Parameterized and Default Constructors------------*/
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:

    complex(int ,int);//Parameterized Constructor having arguments

    void print(){
        cout<<"The complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};

complex :: complex(int x,int y){
    a = x;
    b = y;
}

int main(){
    //Implicit call
    complex a(2,3);

    //Explicit call
    complex a1 = complex(3,4);

    a.print();
    a1.print();

    return 0;
}
--------------------------------------------------------
#include<iostream>
using namespace std;

class point{
    int x,y;
    public:

    point(int ,int);//Parameterized Constructor having arguments

    void print(){
        cout<<"The point is "<<x<<" , "<<y<<endl;
    }
};

point :: point(int a,int b){
    x = a;
    y = b;
}

int main(){
    //Implicit call
    point p(2,3);

    //Explicit call
    point p1 = point(3,4);

    p.print();
    p1.print();

    return 0;
}