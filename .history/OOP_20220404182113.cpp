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

class Vehicle{
public:
    void display(){
        cout<<"This is Vehicle"<<endl;
    };

};


class Car: public Vehicle{
public:
    void display(){
        cout<<"This is Carx"<<endl;
    };

};

class Animal{
public:
    string name;
    int age;

    Animal(string name,int age){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }

    

    void set_values();

};

// class Zebra: public Animal{

// };

// class Dolphin: public Animal{

// }

int main(){
    Triangle t1;
    Rectangle r1;
    Car d1;

    Animal Zebra("Zebra",19);
    Animal Dolphin("Dolphin",20);

    t1.width=3;
    t1.height=4;

    r1.width=2;
    r1.height=4;

    cout<<t1.calculateArea()<<endl;
    cout<<r1.calculateArea()<<endl;

    d1.display();
    
    
}