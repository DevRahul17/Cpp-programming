/*-----------------Oops in C++-------------------------*/
/*Classes,Public and private modifiers*/
#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a,int b,int c);//Declaration
    void getdata(){//Here we implement 
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void employee :: setdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee rahul;//Creating object
    //rahul.a = 1;//Throw error because a is private 
    //rahul.b = 2;//Throw error because b is private 
    //rahul.c = 3//Throw error because c is private 
    rahul.d = 5;
    rahul.e = 7;
    rahul.setdata(1,2,3);
    rahul.getdata();

    return 0;
}