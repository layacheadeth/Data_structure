#include<iostream>
using namespace std; 


class Animal{
public:
virtual void makeSound();
};

class Cat: public Animal{
public:
void makeSound(){
    cout<<"Meow";
}
};

class Dog: public Animal{
public:
void makeSound(){
    cout<<"Whoof";
}
};
 
class Add
{ 
public: 
    virtual void print () 
    { int a=20, b=30;
     cout<< " base class Action is:"<<a+b <<endl;
      } 
 
    void show () 
    { cout<< "show base class" <<endl; } 
}; 
 
class Sub: public Add 
{ 
public: 
    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
    { int x=20,y=10;
      
    cout<< " derived class Action:"<<x-y <<endl; } 
 
    void show () 
    { cout<< "show derived class" <<endl; } 
}; 
 
//main function 
int main() 
{ 
    Add *aptr; 
    Sub s; 
    aptr = &s; 
     
    //virtual function, binded at runtime (Runtime polymorphism) 
    aptr->print(); 
     
    // Non-virtual function, binded at compile time 
    aptr->show(); 

    Animal *ptr;
    Dog d;
    ptr=&d;
    ptr->makeSound();
    
 
    return 0; 
} 