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

class Mother{
public:
    void display(){
        cout<<"This is mother"<<endl;
    };

};


class Daughter: public Mother{
public:
    void display(){
        cout<<"This is daugther"<<endl;
    };

};

int main(){
    Triangle t1;
    Rectangle r1;
    Daughter d1;

    t1.width=3;
    t1.height=4;

    r1.width=2;
    r1.height=4;

    cout<<t1.calculateArea()<<endl;
    cout<<r1.calculateArea()<<endl;

    d1.display();
    
    
}