/*--------------------Functions---------------------*/
#include<iostream>
using namespace std;

int sum(int a,int b){
    int c = a + b;//a and b are formal parametrs
    return c;
}
void greet(){
    cout<<"Good Morning!";
}

int main(){
    int num1,num2;
    cout<<"Enter a number 1 :"<<endl;
    cin>>num1;
    cout<<"Enter a number 2 :"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    //Num1 and num2 are actual parametrs
    greet();

    return 0;
}