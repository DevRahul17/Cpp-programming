/*----------------C++ Control Structures-------------------*/
//1.Sequence 2.Selection 3.Loop
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    //Selection control structure using if,else if and else
    if(age<18){
        cout<<"Your age is samaller than 18!\n";
    }
    else if(age==18){
        cout<<"You are of 18!\n";
    }
    else{
        cout<<"You are greater than 18!\n";
    }

    //Selection control structure using switch case
    switch(age){
        case 5:{
            cout<<"Age is 5";
            break;
        }
        case 17:{
            cout<<"Age is 17";
            break;
        }
        case 19:{
            cout<<"Age is 19";
            break;
        }
        case 20:{
            cout<<"Age is 20";
            break;
        }

        default:{
            cout<<"No special cases";
            break;
        }
    }
    return 0;
}