#include<iostream>
using namespace std;

class Node{
    public:
        int key;
    int data;
    Node* next;
    Node(){
        key=0;
        data=0;
        next=NULL;
    }
    Node(int k, int d){
        key=k;
        data=d;
    }

};

class SingleLinkedList{
    public:
        Node *head;
   SingleLinkedList() {
    head = NULL;
    }
    SingleLinkedList(Node * n) {
    head = n;
  }

  Node* nodeExists(int k){
      Node* temp=NULL;
      Node* ptr=head;
      while(ptr!=NULL){
          if(ptr->key==k){
              temp=ptr;
          }
          ptr=ptr->next;
      }
      return temp;
  }

  void appendNode(Node* n){
      if(nodeExists(n->key)!=NULL){
          cout<<"Node already exists with key value: "<<n->key<<". Append another node with different key value"<<endl;

      }
      else{
          if(head==NULL){
              head=n;
              cout<<"Node appended"<<endl;

          }
          else{
              Node* ptr=head;
              while(ptr->next!=NULL){
                  ptr=ptr->next;
              }
              ptr->next=n;
              cout<<"Node Appended"<<endl;

          }
      }
  }


  void prependNode(Node* n){
      if(nodeExists(n->key)!=NULL){
          cout<<"Node already exists with key value: "<<n->key<<". Append another node with different Key value"<<endl;

      }
      else{
          n->next=head;
          head=n;
          cout<<"Node appended"<<endl;

      }
  }

  void InsertNodeAfter(int k, Node *n){
      Node* ptr=nodeExists(k);
      if(ptr==NULL){
          cout<<"No node exists with key values: "<<k<<endl;

      }
      else{
          if(nodeExists(n->key)!=NULL){
              cout<<"Node already exists with key value: "<<n->key<<".Append another node with different key value"<<endl;

          }
          else{
              n->next=ptr->next;
              ptr->next=n;
              cout<<"Node Inserted"<<endl;
          }
      }
  }

  void deleteNodeByKey(int k){
      if(head==NULL){
          cout<<"SingleLinkedList already empty. Cant delete "<<endl;

      }else if(head!=NULL){
          if(head->key==k){
              head=head->next;
              cout<<"Node unlinked with key values: "<<k<<endl;

          }
          else{
              Node* temp=NULL;
              Node* prevptr=head;
              Node* currentptr=head->next;
              while(currentptr!=NULL){
                  if(currentptr->key==k){
                      temp=currentptr;
                      currentptr=NULL;

                  }
                  else{
                      prevptr=prevptr->next;
                      currentptr=currentptr->next;

                  }
              }
              if(temp!=NULL){
                  prevptr->next=temp->next;
                  cout<<"Node unlinked with key value: "<<k<<endl;

              }
              else{
                  cout<<"Node doesn't exist with key value: "<<k<<endl;
              }
          }
      }
  }

  void UpdateNodeByKey(int k, int d){
      Node* ptr =nodeExists(k);
      if(ptr!=NULL){
          ptr->data=d;
          cout<<"Node Data Updated successfully"<<endl;

      }else{
          cout<<"Node doesn't exist with key value: "<<k<<endl;
      }
  }

  void printList(){
      if(head==NULL){
          cout<<"No nodes in singleLinkedList";
      }
      else{
          cout<<endl<<"SingleLinkedList values: ";
          Node* temp=head;

          while(temp!=NULL){
              cout<<"("<<temp->key<<","<<temp->data<<")-->";
              temp=temp->next;
          }
      }
  }
  

};

int main(){
    
}