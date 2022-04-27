#include<iostream>
using namespace std;

class Parent{
public:
    int id_p;
protected:
    int a;

};

class Child : protected Parent
{
    public:
        int id_c;

        void sleep(){
            a=10;
            id_p=20;
        }
};

int main(){
    Child obj1;

    obj1.id_c=7;
    // obj1.id_p=91;
    cout << "Child id is: " <<  obj1.id_c << '\n';
    
    // cout << "Parent id is: " <<  obj1.id_p << '\n';
}