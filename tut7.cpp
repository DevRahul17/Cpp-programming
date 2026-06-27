#include<iostream>
using namespace std;

int c = 10;//Global value
int main(){
    int a,b,c;
    cout<<"Enter the value of a\n";
    cin>>a;
    cout<<"Enter the value of b\n";
    cin>>b;

    c = a + b;
    cout<<"The sum is = "<<c;
    //cout<<"\nThe value of global c is "::<<c;//:: is used for global value

/*------Float,Double and long Literals------------------------*/
    float d = 34.4f;
    long double e = 26.7l;
    cout<<"\nThe size of 34.4 is "<<sizeof(34.4);
    cout<<"\nThe size of 34.4f is "<<sizeof(34.4f);
    cout<<"\nThe size of 34.4F is "<<sizeof(34.4F);
    cout<<"\nThe size of 26.7 is "<<sizeof(26.7);
    cout<<"\nThe size of 26.7l is "<<sizeof(26.7l);
    cout<<"\nThe size of 26.7L is "<<sizeof(26.7L)<<endl;

    /*---------Reference Variables---------------------*/
    //Harry-->Codewithhary--------->CWH
    float x = 5;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    /*-------------------------Typecasting---------------------*/
    int w = 50;
    float j = 45.76;
    cout<<"The value of w is "<<(float)w<<endl;
    cout<<"The value of w is "<<float(w)<<endl;
    cout<<"The value of j is "<<(int)j<<endl;
    cout<<"The value of j is "<<int(j)<<endl;

    cout<<"The expression is "<<w + j<<endl;
    cout<<"The expression is "<<w + int(j)<<endl;
    cout<<"The expression is "<<w + (int)j<<endl;

    return 0;
}
