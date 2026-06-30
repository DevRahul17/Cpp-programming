//Function Overloading
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){//Function overloading 
    return a+b+c;
}
//Volume of a cylinder
double volume(double r,int h){
    return 3.14*r*r*h;
}
//Volume of a cube
double volcube(int n){
    return (n*n*n);
}

int main(){
    cout<<"The sum of 1 and 2 is "<<sum(1,2)<<endl;
    cout<<"The sum of 1,2 and 3 is "<<sum(1,2,3)<<endl;
    cout<<"The volume of a cylinder is "<<volume(2.10,2)<<endl;
    cout<<"The volume of a "<<volcube(3)<<endl;

    return 0;   
}