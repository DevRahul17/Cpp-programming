/*---------------Break and Continue---------------*/
#include<iostream>
using namespace std;

int main(){
    for(int i = 0;i < 10;i++){
        if(i == 2){
            break;//break statement will terminate the loop when i is equal to 
        }
        cout<<i<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    for(int i = 0;i < 10;i++){
        if(i == 2){
            continue;//continue statement will skip the current iteration when i
        }
        cout<<i<<endl;
    }
    return 0;
}