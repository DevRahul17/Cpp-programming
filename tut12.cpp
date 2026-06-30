/*-----------------------Pointer-----------------------*/
/*It is a data type which holds the address of other data types*/
#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a; // pointer b holds the address of variable a
    //&-----(Adress of) operator
    cout<<"The adress of a is "<<&a<<endl;
    cout<<"The adress of a is "<<b<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;

    //(Value at) Derefrence operator
    cout<<"The vaue of a is "<<*b<<endl;

    //Pointer to pointer
    int x = 10;
    int* y = &x;
    int** z = &y;
    cout<<"The adress of z is "<<&y<<endl;
    cout<<"The adress of z is "<<z<<endl;
    cout<<"The value of z is "<<**z<<endl;

    return 0;
}