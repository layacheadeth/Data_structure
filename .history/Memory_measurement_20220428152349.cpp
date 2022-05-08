#include "CMemoryUsage-master/memtrackingallocator.h"
// #include<iostream>
using namespace std;
// #include<vector>

typedef std::vector<int,MemoryCountingAllocator<int> >  vector;

int main() {
    vector vec(10);

    memory_usage >= 10 * sizeof(int); // should be true

    cout<<memory_usage;
}