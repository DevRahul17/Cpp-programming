#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //Constants in C++
    const int a = 7;
    const float pi= 3.14;
    //a = 66;Not possible
    //pi = 4.3;Not possible
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of pi is "<<pi<<endl;//Endl and setw() is a manipulator

    int x = 10,y = 15,z = 12689;
    cout<<"The value of x is without setw is : "<<x<<endl;
    cout<<"The value of y is without setw is : "<<y<<endl;
    cout<<"The value of z is without setw is : "<<z<<endl;

    //setw(4) take space 
    cout<<"The value of x is with setw is : "<<setw(4)<<x<<endl;
    cout<<"The value of y is with setw is : "<<setw(4)<<y<<endl;
    cout<<"The value of z is with setw is : "<<setw(4)<<z<<endl;

    //Operator Precedence
    int k = 5,m = 7;
    int res = (k*5)+m;
    int result = ((((k*5)+m)-45)+87);
    cout<<res<<endl;
    cout<<result<<endl;

    return 0;
}