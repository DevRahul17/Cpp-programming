/*Header file and opearors*/
/*Two types of heder file
1.System header files.It comes with compiler*/
#include<iostream>
/*2.User defined header files.Written by the programmer
#this.h*/
using namespace std;
int main(){
    int a = 14,b = 7;
    cout<<"Operators in C++"<<endl;//endl same as \n
    cout<<"Arithmetic Operators";

    cout<<"\nThe value of a + b is "<<a + b;
    cout<<"\nThe value of a - b is "<<a - b;
    cout<<"\nThe value of a * b is "<<a * b;
    cout<<"\nThe value of a / b is "<<a / b;
    cout<<"\nThe value of a % b is "<<a % b;
    cout<<"\nThe value of a++ is "<<a++;
    cout<<"\nThe value of ++a is "<<++a;
    cout<<"\nThe value of b++ is "<<b++;
    cout<<"\nThe value of ++b is "<<++b;

    cout<<"\nAssignment Operators";
    int x = 3,y = 8;
    char ch = 'R';

    cout<<"\nAssignment Operators";
    cout<<"\nThe value of a==b is "<<(a==b);
    cout<<"\nThe value of a1=b is "<<(a!=b);
    cout<<"\nThe value of a<=b is "<<(a<=b);
    cout<<"\nThe value of a>=b is "<<(a>=b);
    cout<<"\nThe value of a<b is "<<(a<b);
    cout<<"\nThe value of a>b is "<<(a>b);

    cout<<"\nLogical Operators";
    cout<<"\nThe value of or operators is "<<(a>b) || (b>0);
    cout<<"\nThe value of and operators is "<<(a>b) && (b>8);
    cout<<"\nThe value of not operators is "<<!(a>b) && (b>8);
}
