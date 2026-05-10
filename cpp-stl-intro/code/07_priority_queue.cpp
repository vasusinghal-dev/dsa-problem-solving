#include <bits/stdc++.h>
using namespace std;

/*
==========================================
PRIORITY QUEUE IN C++
==========================================

priority_queue:
- heap-based container
- highest priority element appears first

Default behavior:
MAX HEAP

Largest element stays on top.
*/

int main()
{
  cout << "===== PRIORITY QUEUE INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING PRIORITY QUEUE
  ==========================================
  */

  priority_queue<int> pq;

  /*
  ==========================================
  2. push()
  ==========================================

  Inserts element.

  Heap rearranges automatically.

  Complexity:
  O(log n)
  */

  pq.push(10);
  pq.push(30);
  pq.push(20);
  pq.push(50);

  /*
  Top element:
  50

  Largest always stays at top.
  */

  cout << "Top element: "
       << pq.top()
       << endl;

  /*
  ==========================================
  3. pop()
  ==========================================

  Removes top priority element.

  O(log n)
  */

  pq.pop();

  cout << "\nAfter pop:\n";

  cout << "Top element: "
       << pq.top()
       << endl;

  /*
  ==========================================
  4. IMPORTANT BEGINNER TRAP
  ==========================================

  INVALID:

  int x = pq.pop();

  Why?

  pop() returns void.
  */

  /*
  Correct approach:
  */

  int highest = pq.top();

  pq.pop();

  cout << "\nStored then popped: "
       << highest
       << endl;

  /*
  ==========================================
  5. size()
  ==========================================
  */

  cout << "\nCurrent size: "
       << pq.size()
       << endl;

  /*
  ==========================================
  6. empty()
  ==========================================
  */

  if (pq.empty())
  {
    cout << "Priority queue is empty\n";
  }
  else
  {
    cout << "Priority queue is NOT empty\n";
  }

  /*
  ==========================================
  7. PRINTING PRIORITY QUEUE
  ==========================================

  No iterators supported.

  Must pop manually.
  */

  priority_queue<int> temp = pq;

  cout << "\nPriority Queue Elements:\n";

  while (!temp.empty())
  {
    cout << temp.top() << " ";

    temp.pop();
  }

  cout << endl;

  /*
  Elements come out:
  largest to smallest.
  */

  /*
  ==========================================
  8. INTERNAL STRUCTURE
  ==========================================

  priority_queue internally uses:

  Binary Heap

  Usually implemented using vector.
  */

  /*
  ==========================================
  9. IMPORTANT REALITY
  ==========================================

  priority_queue is NOT fully sorted.

  Only top element guaranteed.
  */

  /*
  Example:

  Internal structure may look like heap,
  not sorted array.
  */

  /*
  ==========================================
  10. MAX HEAP
  ==========================================

  Default behavior.

  Largest element:
  highest priority.
  */

  priority_queue<int> maxHeap;

  maxHeap.push(5);
  maxHeap.push(100);
  maxHeap.push(20);

  cout << "\nMax Heap Top: "
       << maxHeap.top()
       << endl;

  /*
  ==========================================
  11. MIN HEAP
  ==========================================

  Smallest element at top.

  Extremely important interview concept.
  */

  priority_queue<
      int,
      vector<int>,
      greater<int>>
      minHeap;

  minHeap.push(50);
  minHeap.push(10);
  minHeap.push(30);

  cout << "\nMin Heap Top: "
       << minHeap.top()
       << endl;

  /*
  Smallest value:
  10
  */

  /*
  ==========================================
  12. WHY MIN HEAP MATTERS
  ==========================================

  Many problems need:
  smallest element repeatedly.

  Examples:
  - Dijkstra
  - Merge K Lists
  - Top K problems
  */

  /*
  ==========================================
  13. COMPLEXITIES
  ==========================================

  push:
  O(log n)

  pop:
  O(log n)

  top:
  O(1)
  */

  /*
  ==========================================
  14. WHY push/pop ARE O(log n)
  ==========================================

  Heap property must be maintained.

  Elements move upward/downward
  during insertion/removal.
  */

  /*
  ==========================================
  15. VECTOR + HEAP RELATION
  ==========================================

  Heap usually stored in array/vector.

  Parent-child relationships handled using indices.
  */

  /*
  ==========================================
  16. HEAP INDEX FORMULAS
  ==========================================

  For node i:

  Left Child:
  2*i + 1

  Right Child:
  2*i + 2

  Parent:
  (i-1)/2
  */

  /*
  ==========================================
  17. CUSTOM PRIORITY QUEUE
  ==========================================

  Using pairs.
  */

  priority_queue<pair<int, int>> pairPQ;

  pairPQ.push({10, 1});
  pairPQ.push({30, 2});
  pairPQ.push({20, 3});

  cout << "\nPair Priority Queue Top:\n";

  cout << pairPQ.top().first
       << " "
       << pairPQ.top().second
       << endl;

  /*
  Pair comparison:
  lexicographical.
  */

  /*
  ==========================================
  18. MIN HEAP OF PAIRS
  ==========================================
  */

  priority_queue<
      pair<int, int>,
      vector<pair<int, int>>,
      greater<pair<int, int>>>
      minPairHeap;

  minPairHeap.push({5, 100});
  minPairHeap.push({1, 200});
  minPairHeap.push({3, 300});

  cout << "\nMin Pair Heap Top:\n";

  cout << minPairHeap.top().first
       << " "
       << minPairHeap.top().second
       << endl;

  /*
  ==========================================
  19. CUSTOM COMPARATOR
  ==========================================

  Advanced concept.
  */

  auto cmp =
      [](int a, int b)
  {
    return a > b;
  };

  /*
  Used in advanced heap customization.
  */

  /*
  ==========================================
  20. COMMON INTERVIEW USES
  ==========================================

  priority_queue heavily used in:
  - Dijkstra Algorithm
  - Top K Elements
  - Scheduling
  - Median problems
  - Merge K Sorted Lists
  - Greedy algorithms
  */

  /*
  ==========================================
  21. TOP K PATTERN
  ==========================================

  Very important interview pattern.

  Need:
  repeated largest/smallest elements.

  Think:
  heap immediately.
  */

  /*
  ==========================================
  22. DIJKSTRA ALGORITHM
  ==========================================

  Dijkstra heavily uses:
  min heap.

  For shortest distance extraction.
  */

  /*
  ==========================================
  23. HEAP vs SORTING
  ==========================================

  Sorting:
  full ordering.

  Heap:
  only top priority guaranteed.
  */

  /*
  ==========================================
  24. IMPORTANT PERFORMANCE INSIGHT
  ==========================================

  If repeatedly extracting:
  max/min

  heap often much better
  than sorting repeatedly.
  */

  /*
  ==========================================
  25. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Thinking heap is fully sorted.

  False.

  # 2:
  Forgetting default is max heap.

  # 3:
  Expecting pop() return value.
  */

  /*
  ==========================================
  26. SAFE USAGE
  ==========================================

  Always check:
  empty()

  before:
  top() or pop()
  */

  /*
  ==========================================
  27. REAL-WORLD USAGE
  ==========================================

  Heaps used heavily in:
  - operating systems
  - schedulers
  - distributed systems
  - event queues
  */

  /*
  ==========================================
  28. MOST IMPORTANT INTERVIEW INSIGHT
  ==========================================

  If problem needs:
  repeated best element extraction

  Think:
  priority_queue immediately.
  */

  /*
  ==========================================
  29. IMPORTANT STL REALITY
  ==========================================

  priority_queue is one of the MOST
  important STL structures for interviews.
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== PRIORITY QUEUE COMPLETED =====\n";

  return 0;
}