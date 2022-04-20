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

        bool isFull(){
            if(rear==4){
                return true;
            }
            else
                return false;
        }

        void enQueue(int val){
            if(isFull()){
                cout<<"Queue is Full"<<endl;
                return ;
            }
            else
                if(isEmpty()){
                    rear=front=0;
                    arr[rear]=val;
                }
                else{
                    rear++;
                    arr[rear]=val;
                }
        }



};


int main(){

}