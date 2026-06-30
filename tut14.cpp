/*----------Structure-------------------------*/
#include<iostream>
using namespace std;

struct student{//Syntax of structure
    int id;
    char startch;
    float salary;
};

int main(){
    struct student rahul;
    rahul.id = 279;
    rahul.startch = 'r';
    rahul.salary = 99999.7380;

    cout<<rahul.id<<endl;
    cout<<rahul.startch<<endl;
    cout<<rahul.salary<<endl;

    return 0;
}

/*-------Union------------------*/
#include<iostream>
using namespace std;

union money{//In union we can use one value at atime
    int rice;
    char car;
    float pounds;
};

int main(){
    union money u;
    u.rice = 2;
    u.pounds = 5.3;
    cout<<u.rice<<endl;
    return 0;
}

/*--------------------Enum---------------*/
#include<iostream>
using namespace std;

int main(){
    enum meal{breakfast,lunch,dinner};//Syntax of enum it gave integer value line by line starting from 0
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    return 0;
}