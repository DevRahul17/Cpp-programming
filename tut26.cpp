/*----------Friend Function-------------------------*/
#include<iostream>
using namespace std;

class complex{
    int a,b;//Private member
    public:
    void setdata(int x,int y){
        a = x;
        b = y;
    }

    friend complex sumcomplexnum(complex o1,complex o2);//Gave permision to access it's private member

    void print(){
        cout<<"The complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};

complex sumcomplexnum(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

int main(){
    complex c1,c2,sum;//Creating object
    c1.setdata(1,2);
    c1.print();

    c2.setdata(3,4);
    c2.print();
    //1 + 2i
    //3 + 4i
    //------
    //4 + 6i
    sum = sumcomplexnum(c1,c2);
    sum.print();

    return 0;
}

/*Properties of friend functions
1.Not in the scope of a class

2.Since it is not in the scope of the class,it cannot be called from the 
object of that class.c1.sumcomplex() == Invalid

3.Can be invoked without the help of any object

4.Usually contains the objects as arguments

5.Can  be declared inside public or private section of the class

6.It cannot access the members directly by their names and need 
object_name.member_name to access any member.
*/