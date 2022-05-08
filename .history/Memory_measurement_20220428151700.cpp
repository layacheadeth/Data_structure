#include "CMemoryUsage-master/memtrackingallocator.h"

typedef std::vector<int,MemoryCountingAllocator<int> >  vector;

int main() {
  vector vec(10);
  memory_usage >= 10 * sizeof(int); // should be true
}