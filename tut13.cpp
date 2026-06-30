/*----------Arrays and Pointer arithmetic----------------*/
//Collection of similar data type in contigious memory location
#include<iostream>
using namespace std;

int main(){
    int marks[] = {1,2,3,4};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2] = 7;//We can change value of an array
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int subject[3];
    subject[0] = 89;
    subject[1] = 90;
    subject[2] = 99;
    cout<<subject[0]<<endl;
    cout<<subject[1]<<endl;
    cout<<subject[2]<<endl;

    //Using For loop
    cout<<"Using For loop"<<endl;
    for(int i = 0;i < 4;i++){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //Using While loop
    cout<<"Using While loop"<<endl;
    int l = 0;
    while(l<4){
        cout<<"The value of marks "<<l<<" is "<<marks[l]<<endl;
        l++;
    }

    //Using Do-While loop
    cout<<"Using Do-while loop"<<endl;
    int h = 0;
    do{
        cout<<"The value of marks "<<h<<" is "<<marks[h]<<endl;
        h++;
    }while(h<4);

    //Pointer arithmetic
    //add new = current add + i*sizeof(datatype)
    //Pointers and arrays
    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;//It shows 1st element in an array
    cout<<"The value of *(p+1) is "<<*p+1<<endl;
    cout<<"The value of *(p+2) is "<<*p+2<<endl;
    cout<<"The value of *(p+3) is "<<*p+3<<endl;

    return 0;
}