#include<iostream>
#include<string>

using namespace std;

class Stack{
    private:
        int top;
        int arr[5];
    
    public:
        Stack(){
            top=-1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
        }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else
            return false;
    }

    bool isFull(){
        if(top==4)
            return true;
        else
            return false;
    }

}
;