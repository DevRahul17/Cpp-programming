/*----------------Recursion---------------------*/
/*-------Factorial--------------------*/
#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){//Base Case
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n);

    return 0;
}

/*-------------------Fibonacci----------------------*/
#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n;
    cout<<"Enter a number of position"<<endl;
    cin>>n;
    cout<<"The term in fibonnaci series at position "<<n<<" is "<<fibonacci(n);

    return 0;
}