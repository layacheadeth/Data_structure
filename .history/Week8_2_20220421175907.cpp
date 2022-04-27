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

int main(){
    Child obj1;

    obj1.id_c=7;
    // obj1.id_p=91;
    cout << "Child id is: " <<  obj1.id_c << '\n';
    cout<<obj1.sleep();

    // cout << "Parent id is: " <<  obj1.id_p << '\n';
}