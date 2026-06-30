/*Inline function,default arguments and constants arguments-------------*/
#include<iostream>
using namespace std;

inline int product(int a,int b){//Inline for many function call
    static int c = 0;//This execute once
    c = c + 1;//Next time this function run and c value increases
    return a*b*c;
 }
/*int stlen(const char *p){//Constant for not changing a value
 }*/
 int main(){
    int a= 5,b =7;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;

    return 0;
 }