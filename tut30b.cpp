/*Create a function using friend function and constructor which takes 2 
point objects and computes the distance between them.*/
#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x,y;

    friend void distance(point ,point);//friend Function

    public:
    point(int a,int b){//Parameterized Constructor
        x = a;
        y = b;
    }
};

void distance(point p1,point p2){//friend function definition
    //Distance Formula = sqrt (x2​−x1​)^2 + (y2​−y1​)^2

    int dist = sqrt( pow ( (p2.x - p1.x), 2) + pow ( (p2.y - p1.y), 2) );
    cout<<"The distance between two points is "<<dist<<endl;
}

int main(){
    point p1(2,5);
    point p2(4,7);

    distance(p1,p2);//Function call
    
    return 0;
}