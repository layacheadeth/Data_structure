#include<iostream>
using namespace std;

class CircularQueue{
    private:
        int front;
        int rear;
        int arr[5];
    public:
        CircularQueue(){
            front = -1;
            rear = -1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
        }  

        bool isEmpty(){
            if(front==-1 && rear==-1)
                return true;
            else
                return false;
        }

        bool isFull(){
            if((rear+1)%5==front)
                return true;
            else
                return false;
        }

        void enQueue(int val){
            if (isFull()){
                cout<<"Queue is full"<<endl;
                return;
            }
            else if(isEmpty()){
                rear=0;
                front=0;
                arr[rear]=val;

            }
            else{
                rear=(rear+1)%5;
                arr[rear]=val;
            }
        }

};

int main(){




    return 0;
}