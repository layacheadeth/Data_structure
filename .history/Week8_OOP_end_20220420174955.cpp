#include <iostream>
using namespace std;


class Addition {
public:
    int ADD(int X,int Y)   // Function with parameter 
    {
        return X+Y;     // this function is performing addition of  two Integer value
    }
    void ADD() {              // Function with same name but without parameter
        string a= "HELLO";
        string b="SAM";   // in this function concatenation is performed
       string c= a+b;
       cout<<c<<endl;
        
    }
};
int main(void) {
    Addition obj;   // Object is created  
    cout<<obj.ADD(128, 15)<<endl; //first method is called
    obj.ADD();  // second method is called
    return 0;
}