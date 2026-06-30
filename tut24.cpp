/*-------Static Data Members & Methods in C++ OOPS-----------*/
/*A static variable belongs to the class itself, not to individual objects.*/
#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;

    public:
    void setdata(){
        cout<< "Enter an id:"<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
};

int employee :: count;//Default value is 0

int main(){
    employee rahul,harry;

    //rahul.id = 1;not possible because it is private
    rahul.setdata();
    rahul.getdata();

    harry.setdata();
    harry.getdata();

    return 0;
}



