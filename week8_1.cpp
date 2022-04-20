#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void function(){    
cout<<"Eating..."<<endl;    
    }    
  
}; 


class Dog{
    public:
    void makeSound(){
        cout<<"Whoof"<<endl;
    }
};

class Cat{
    public:
    void makeSound(){
        cout<<"Meow"<<endl;
    }
};

class Man: public Animal    
{    
 public:  
 void function()    
    {    
       cout<<"Walking ..."<<endl;    
    }    
};  
int main() {  
 Animal A =Animal();
   A.function();   //parent class object 
   Man m = Man();    
   m.function();   // child class object
   
    Dog d;
    d.makeSound();

    Cat c;
    c.makeSound();



   return 0;  
}