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
    cout<<"Hello OOP"<<endl;
}