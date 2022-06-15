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
    // we insert the node into existing adjency list without connectin this to 
    // the exisiting adjencylist yet.
    adjNode* getANodeintoAdjList(int value, int weight, adjNode* head){
        adjNode* newNode = new adjNode;
        newNode->val= value;
        newNode->cost = weight;

        newNode->next = head;

        return newNode;

    }

    int N;

    public:
        adjNode **head;

        DiaGraph(graphEdge edges[], int n, int N){
            head = new adjNode*[N]();
            this-> N= N;
            //initialize head pointer for all vertices
            for(int i=0;i<N;i++)
                head[i] = nullptr;

            for(unsigned i =0; i<n;i++){
                int start_ver = edges[i].start_ver;
                int end_ver = edges[i].end_ver;
                int weight = edges[i].weight;

                adjNode* newNode = getANodeintoAdjList(end_ver,weight,head[start_ver]);

                head[start_ver] = newNode;

            }

        }


};

void display_AdjList(adjNode* ptr, int i)
{
    while (ptr != nullptr) {
        cout << "(" << i << ", " << ptr->val
            << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    // graph edges array.
    graphEdge edges[] = {
        // (x, y, w) -> edge from x to y with weight w
        {0,1,2},{0,2,4},{1,4,3},{2,3,2},{3,1,4},{4,3,3}
    };
    int N = 6;      // Number of vertices in the graph
    // calculate number of edges
    int n = sizeof(edges)/sizeof(edges[0]);
    // construct graph
    DiaGraph diagraph(edges, n, N);
    // print adjacency list representation of graph
    cout<<"Graph adjacency list "<<endl<<"(start_vertex, end_vertex, weight):"<<endl;
    for (int i = 0; i < N; i++)
    {
        // display adjacent vertices of vertex i
        display_AdjList(diagraph.head[i], i);
    }
    return 0;
}