/*---------Nesting of Member Functions in C++-----------------------*/
#include<iostream>
#include<string>
using namespace std;

class binary{//binary class
    string s;
    public:
    void read();
    void checkbinary();//Function declaration
    void onescompliment();
    void display();
};

void binary :: read(){//We use :: for taking things from class binary
    cout<<"Enter a number"<<endl;
    cin>>s;
}

void binary :: checkbinary(){//Function definition
    for(int i = 0;i < s.length();i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"It is not a binary number"<<endl;
            return;
        }
    }
    cout<<"It is a binary number"<<endl;
}

void binary :: onescompliment(){//It change 0 to 1 and 1 to 0
    for(int i = 0;i < s.length();i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(){
    cout<<"Displaying ones compliment"<<endl;
    for(int i = 0;i < s.length();i++){
        cout<<s.at(i);
    }
}

int main(){
    binary b;//Creating object
    b.read();
    b.checkbinary();//Function calling
    b.onescompliment();
    b.display();

    return 0;
}