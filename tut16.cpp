/*----------Call by vale and call by reference---------------*/
#include<iostream>
using namespace std;

void swap(int a ,int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 5,b = 7;
    swap(a,b);
    cout<<"Value of a is "<<a<<" and value of b is "<<b;//Not swap

    return 0;
}

/*Swap by swappointer and it is call by reference*/
#include<iostream>
using namespace std;

void swapusingpointer(int* a ,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5,b = 7;
    cout<<"Value before swapping"<<endl;
    cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;

    swapusingpointer(&a,&b);//Here we pass address
    cout<<"Value after swapping"<<endl;
    cout<<"Value of a is "<<a<<" and value of b is "<<b;//swap now

    return 0;
}

/*Swap by reference variable*/
#include<iostream>
using namespace std;

void swapusingpointer(int& a ,int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 5,b = 7;
    cout<<"Value before swapping"<<endl;
    cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;

    swapusingpointer(a,b);//Here we direct write it
    cout<<"Value after swapping"<<endl;
    cout<<"Value of a is "<<a<<" and value of b is "<<b;//swap now

    return 0;
}