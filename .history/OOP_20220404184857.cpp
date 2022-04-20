#include<iostream>
using namespace std;
//Encapsulation
//Abstraction
//Polymorphism
//Inheritence


class Shape{
private: 
    int width,height;
public:

    int getWidth(){
        return width;
    }

    int getHeight(){
        return height;
    }

    void setWidth(int w){
        this->width=w;
    }

    void setHeight(int h){
        this->height=h;
    }

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
        return getWidth()*getHeight()/2;
    }
};

class Rectangle: public Shape{
public:
    int calculateArea(){
        return getWidth()*getHeight();

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
    string name="dolphin";
    int age=10;

    Animal(string name,int age){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        
        cout<<"name: "<<this->name<<endl;
        cout<<"age: "<<this->age<<endl;
        
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

    t1.setHeight(4);
    t1.setWidth(10);

    r1.setHeight(2);
    r1.setWidth(4);

    
    cout<<r1.calculateArea()<<endl;

    d1.display();
    
    
}


/*
int main(){
    class food class drink class souvenir
}



*/