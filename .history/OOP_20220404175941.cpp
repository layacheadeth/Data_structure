#include<iostream>
using namespace std;
//Encapsulation
//Abstraction
//Polymorphism
//Inheritence
class Shape{
public:
    int width,height;

    Shape(){

    }

    Shape(int w,int h ){
        this->width=w;
        this->height=h;
    }

    int calculateArea();


};

class Triangle: public Shape {
public:
    int calculateArea(){
        return width*height/2;
    }
};

class Rectangle: public Shape{
public:
    int calculateArea(){
        return width*height;

    }

};


int main(){
    Triangle t1;
    Rectangle r1;

    t1.width=3;
    t1.height=4;

    r1.width=2;
    r1.height=4;

    cout<<t1.calculateArea()<<endl;
    cout<<r1.calculateArea()<<endl;
    
    
}