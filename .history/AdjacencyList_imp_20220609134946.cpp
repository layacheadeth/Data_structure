#include<iostream>
using namespace std;

// store adjencylist items
struct adjNode{
    int val, cost;
    adjNode* next;
};

//structure to store edges
struct graphEdge{
    int start_ver, end_ver, weight;
};

class DiaGraph{
// insert new nodes into adjency list from given graph
adjNode* getAdjListNode(int value, int weight, adjNote* head){
    adjNode* newNode = new adjNode;
    newNode->val = value;
    newNode->cost = weight;

    newNode->next = head;// point new node to the current head
    return newNode;
}
int N;

};


int main(){

}