/*---Array of Objects & Passing Objects as Function Arguments ----*/
// #include<iostream>
// using namespace std;

// class employee{
//     int id;
//     int salary;
//     public:
//     void setdata(){
//         cout<<"Enter an id of an employee:"<<endl;
//         cin>>id;
//     }
//     void printdata(){
//         cout<<"The id of an employee is "<<id<<endl;
//     }
// };

// int main(){
//     //employee rahul,harry,saniya;//it is for short
//     employee data[3];//Creating object array
//     for(int i = 0;i < 3;i++){
//         data[i].setdata();
//         data[i].printdata();
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setdata(int v1,int v2){
        a = v1;
        b = v2;
    }
    // void setdatabysum(complex o1,complex o2){
    //     a = o1.a + o2.a;
    //     b = o1.b + o2.b
    // }

    void print(){
        cout<<"The complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};

int main(){
    complex c1,c2;//Creating class
    c1.setdata(1,2);
    c1.print();

    c2.setdata(3,4);
    c2.print();

    return 0;
}