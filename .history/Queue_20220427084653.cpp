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

       int deQueue(){
           int x;
           if(isEmpty()){
               cout<<"Queue is Empty"<<endl;
               return 0;
           }
           else if(front==rear){
               x=arr[front];
               arr[front]=0;
               rear=-1;
               front=-1;
               return x;
           }
           else{
               x=arr[front];
               arr[front]=0;
               front++;
               return x;
           }
       }

       int count(){
           return (rear-front+1);
       }



};


int main(){
    Queue q1;
    int option,value;

    do{
        cout<<"\n\nWhat operatio do you want to perform? Select Option number"<<endl;
        cout<<"1. Enqueue()"<<endl;
        cout<<"2. Dequeue()"<<endl;
        cout<<"3. IsEmpty()"<<endl;
        cout<<"4. IsFull()"<<endl;
        cout<<"5. Count()"<<endl;
        cout<<"6. Display()"<<endl;
        cout<<"7. Clear Screen"<<endl<<endl;

        cin>>option;

        switch(option){
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: 
                break;
            case 5: 
                break;
            case 6: 
                break;
            case 7: 
                break;
            

        }
    }

    
}