#include<iostream>
using namespace std;

class Parent{
    private:
         int c;
public:
    int id_p;
protected:
    int a;

};

class Child : protected Parent
{
    public:
        int id_c;

        int sleep(){
            a=10;
            id_p=20;
            // c=10;
            return a+id_p;
        }
};


class A
{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class Z: public A, protected Parent{



};



 
class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};
 
class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};
 
class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};

class E: protected C{
//x is protected
//y is protected
//z remain unaccessible
};

class F: protected D{
    //x is not accessible, y, and z.
};



int main(){
    Child obj1;

    obj1.id_c=7;
    // obj1.id_p=91;
    cout << "Child id is: " <<  obj1.id_c << '\n';
    cout<<obj1.sleep();

    // cout << "Parent id is: " <<  obj1.id_p << '\n';
}