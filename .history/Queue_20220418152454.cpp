#include<iostream>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];
    
    public:
        Queue(){
            front=-1;
            rear=-1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
        }

        bool isEmpty(){
            if(front==-1&& rear==-1){
                return true;
            }
            else
                return false;
        }



};


int main(){

}