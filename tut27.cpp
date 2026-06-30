#include<iostream>
using namespace std;

class complex;//Forward declaration

class calculator{
    public:
    int add(int a,int b){//No need
        return (a + b);
    }

    int sumrealcomplex(complex,complex);//Decalaring method
    int sumimaginarycomplex(complex,complex);
};

class complex{
    int a,b;
    //Individually declaring functions as friend
    friend int calculator :: sumrealcomplex(complex,complex);
    friend int calculator :: sumimaginarycomplex(complex,complex);

    //Declaring the entire calculator class as friend
    //friend class calculator;
    public:
    void setnumber(int x,int y){
        a = x;
        b = y;
    }

    void print(){
        cout<<"The complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};

int calculator :: sumrealcomplex(complex c1,complex c2){
    return (c1.a + c2.a);
}

int calculator :: sumimaginarycomplex(complex c1,complex c2){
    return (c1.b + c2.b);
}

int main(){
    complex c1,c2;
    c1.setnumber(1,2);
    c1.print();

    c2.setnumber(3,4);
    c2.print();

    calculator calc;
    int real = calc.sumrealcomplex(c1,c2);
    cout<<"The sum of real part is "<<real<<endl;

    int comp = calc.sumimaginarycomplex(c1,c2);
    cout<<"The sum of real part is "<<comp<<endl;

    return 0;
}