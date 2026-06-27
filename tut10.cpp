/*----------------Loops in C++------------
1.For loop  2.While loop 3.Do-While loop
*/
#include<iostream>
using namespace std;

int main(){
    //For loop
    for(int i = 0;i <= 10;i++){
        cout<<i<<endl;
    }
    //While loop
    int i = 0;
    while(i < 11){
        cout<<i<<endl;
        i++;//Initialization
    }
    //Do-While loop...It can run once everytime
    int i = 0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);//Condition

    return 0;
}

/*Multiplication table using Do-While loop*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number you want to table of:"<<endl;
    cin>>num;
    cout<<"Multiplication table of "<<num<<"is "<<endl;
    int i = 1;
    do{
        cout<<num<<" x "<<i<<" = "<<num * i<<endl;
        i++;
    }while(i <= 10);

    return 0;
}
