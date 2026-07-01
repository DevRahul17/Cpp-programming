/*Dynamic Initialization of Objects Using Constructors*/
#include<iostream>
using namespace std;

class bank{
    int principal;
    int years;
    float rate;
    float returnvalue;

    public:
    bank(){}
    //Blank constructor because if we don't write p,y and r then 
    //object get ready

    bank(int p,int y,float r);//r can be value like 0.04
    bank(int p,int y,int r);//r can be value like 4 

    void show();
};

bank :: bank(int p,int y,float r){
    principal = p;
    years = y;
    rate = r;
    returnvalue = principal;//Means given amount
    for(int i = 0;i < y;i++){
        returnvalue = returnvalue * (1 + rate);
    }
}

bank :: bank(int p,int y,int r){
    principal = p;
    years = y;
    rate = float(r)/100;//Because it initially at percentage
    returnvalue = principal;//Means given amount
    for(int i = 0;i < y;i++){
        returnvalue = returnvalue * (1 + rate);
    }
}

void bank :: show(){
    cout<<"principal amount was "<<principal<<" and after "
    <<years<<" years is "<<returnvalue<<endl;

}

int main(){
    bank b1,b2,b3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p,y and r "<<endl;
    cin>>p>>y>>r;
    b1 = bank(p,y,r);
    b1.show();

    cout<<"Enter the value of p,y and R "<<endl;//R is integer
    cin>>p>>y>>r;
    b1 = bank(p,y,r);
    b1.show();

    return 0;
}