#include<iostream>
#include<list>
using namespace std;


// [->linklist], [->linklist], [->linklist], [->linklist], [->linklist]
class Hash{
    int bucket;
    list<int> *table;

public: 
Hash(int V);

void insertItem(int key);

void deleteItem(int key);

int hashFunction(int x){
    return (x % bucket);
}

void displayHash();
void search(int key);


};

Hash::Hash(int b){
    this->bucket=b;
    table = new list<int>[bucket];
}
//[],[], [],

void Hash::insertItem(int key){
    int index = hashFunction(key);
    table[index].push_back(key);
}

void Hash::search(int key){
    int index = hashFunction(key);//3
    list<int> :: iterator i;
    int b=0;
// search for the element in that linkedlist belong to that index
    for(i = table[index].begin();i!=table[index].end();i++){
        if(*i==key){
            b=1;
            cout<<"search found"<<endl;
            
            break;
        }
    }
    if(b==0)
        cout<<"search not found"<<endl;

   
}

void Hash::deleteItem(int key){
    int index = hashFunction(key);//3
    list<int> :: iterator i;
// search for the element in that linkedlist belong to that index
    for(i = table[index].begin();i!=table[index].end();i++){
        if(*i==key)
            break;

    }
// erase that element. 
    if(i!=table[index].end())
        table[index].erase(i);
}


void Hash::displayHash(){
    for(int i=0;i<bucket;i++){
        // capture index
        cout<<i;
        // get all the value within that index;
        for(auto x: table[i])
            cout<<"-->"<<x;
        cout<<endl;
    }
}


int main(){
    int a[]={15,11,27,8,12,100,90};
    int n = sizeof(a)/sizeof(a[0]);

    Hash h(7);

    for(int i=0;i<n;i++)
        h.insertItem(a[i]);
    
    h.deleteItem(12);

    h.displayHash();
    h.search(900);

    

    return 0;
    
}