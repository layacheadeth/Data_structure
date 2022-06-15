#include<iostream>
using namespace std;
// one single node
struct adjNode{
    int val, cost;
    adjNode* next;
};
// an adjency list consist of start and end node 
// with weight
struct graphEdge{
    int start_ver, end_ver, weight;
};
//DiaGraph mean graph with weight
class DiaGraph{
    adjNode* getAdjListNode(int value, int weight, adjNode* head){
        adjNode* newNode = new adjNode;
    }
};