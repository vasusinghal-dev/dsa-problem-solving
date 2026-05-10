#include <bits/stdc++.h>
using namespace std;

/*
==========================================
QUEUE IN C++
==========================================

Queue follows:

FIFO
(First In First Out)

Meaning:
first inserted element removed first.

Very important STL adapter.
*/

int main()
{
  cout << "===== QUEUE INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING QUEUE
  ==========================================
  */

  queue<int> q;

  /*
  ==========================================
  2. push()
  ==========================================

  Inserts at back.

  O(1)
  */

  q.push(10);
  q.push(20);
  q.push(30);

  /*
  Visual:

  FRONT -> 10 20 30 <- BACK
  */

  cout << "3 elements pushed.\n";

  /*
  ==========================================
  3. front()
  ==========================================

  Access first element.

  O(1)
  */

  cout << "\nFront element: "
       << q.front()
       << endl;

  /*
  ==========================================
  4. back()
  ==========================================

  Access last element.
  */

  cout << "Back element: "
       << q.back()
       << endl;

  /*
  ==========================================
  5. pop()
  ==========================================

  Removes FRONT element.

  IMPORTANT:
  pop() returns void.
  */

  q.pop();

  cout << "\nAfter pop:\n";

  cout << "Front element: "
       << q.front()
       << endl;

  /*
  Queue now:

  FRONT -> 20 30 <- BACK
  */

  /*
  ==========================================
  6. IMPORTANT BEGINNER TRAP
  ==========================================

  INVALID:

  int x = q.pop();

  Why?

  pop() returns nothing.
  */

  /*
  Correct approach:
  */

  int firstValue = q.front();

  q.pop();

  cout << "\nStored then popped: "
       << firstValue
       << endl;

  /*
  ==========================================
  7. size()
  ==========================================
  */

  cout << "\nCurrent size: "
       << q.size()
       << endl;

  /*
  ==========================================
  8. empty()
  ==========================================
  */

  if (q.empty())
  {
    cout << "Queue is empty\n";
  }
  else
  {
    cout << "Queue is NOT empty\n";
  }

  /*
  ==========================================
  9. PUSH MULTIPLE VALUES
  ==========================================
  */

  q.push(100);
  q.push(200);
  q.push(300);

  cout << "\nFront: "
       << q.front()
       << endl;

  cout << "Back: "
       << q.back()
       << endl;

  /*
  ==========================================
  10. PRINTING QUEUE
  ==========================================

  Queue does NOT support iterators.

  Must pop manually.
  */

  queue<int> temp = q;

  cout << "\nPrinting queue:\n";

  while (!temp.empty())
  {
    cout << temp.front() << " ";

    temp.pop();
  }

  cout << endl;

  /*
  Original queue unchanged
  because temp is copy.
  */

  /*
  ==========================================
  11. INTERNAL STRUCTURE
  ==========================================

  queue is container adapter.

  Default underlying container:
  deque.
  */

  /*
  ==========================================
  12. CUSTOM UNDERLYING CONTAINER
  ==========================================
  */

  queue<int, list<int>> customQueue;

  customQueue.push(1);
  customQueue.push(2);

  cout << "\nCustom queue front: "
       << customQueue.front()
       << endl;

  /*
  ==========================================
  13. QUEUE COMPLEXITIES
  ==========================================

  push:
  O(1)

  pop:
  O(1)

  front:
  O(1)

  back:
  O(1)
  */

  /*
  ==========================================
  14. WHY QUEUE EXISTS
  ==========================================

  Queue enforces FIFO behavior.

  Useful when processing order matters.
  */

  /*
  ==========================================
  15. REAL LIFE ANALOGY
  ==========================================

  People standing in line.

  First person entering:
  first person served.
  */

  /*
  ==========================================
  16. BFS (BREADTH FIRST SEARCH)
  ==========================================

  Queue is foundation of BFS.

  Why?

  BFS processes nodes level-by-level.

  FIFO behavior required.
  */

  /*
  ==========================================
  17. BFS EXAMPLE IDEA
  ==========================================

  Process:
  - insert neighbors
  - process oldest inserted node first

  Perfect queue behavior.
  */

  /*
  ==========================================
  18. COMMON INTERVIEW USES
  ==========================================

  queue heavily used in:
  - BFS
  - scheduling
  - task processing
  - printer queues
  - messaging systems
  - CPU scheduling
  */

  /*
  ==========================================
  19. LEVEL ORDER TRAVERSAL
  ==========================================

  Binary tree level traversal
  uses queue heavily.

  Very common interview topic.
  */

  /*
  ==========================================
  20. IMPORTANT LIMITATIONS
  ==========================================

  queue does NOT support:
  - iterators
  - indexing
  - random access

  Restricted intentionally.
  */

  /*
  ==========================================
  21. SAFE QUEUE USAGE
  ==========================================

  Always check:
  empty()

  before:
  front() or pop()
  */

  /*
  ==========================================
  22. queue vs stack
  ==========================================

  queue:
  FIFO

  stack:
  LIFO
  */

  /*
  ==========================================
  23. deque CONNECTION
  ==========================================

  queue internally often uses:
  deque

  because deque supports:
  - fast front removal
  - fast back insertion
  */

  /*
  ==========================================
  24. DEQUE vs QUEUE
  ==========================================

  deque:
  full access to both ends.

  queue:
  restricted FIFO interface.
  */

  /*
  ==========================================
  25. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Expecting pop() to return value.

  # 2:
  Trying direct iteration.

  # 3:
  Accessing front() on empty queue.
  */

  /*
  ==========================================
  26. CIRCULAR QUEUE CONCEPT
  ==========================================

  Advanced queue concept.

  Used in:
  - buffering
  - operating systems
  - streaming systems
  */

  /*
  ==========================================
  27. REAL ENGINEERING USAGE
  ==========================================

  Queues heavily used in:
  - backend systems
  - load balancing
  - distributed systems
  - event processing
  */

  /*
  ==========================================
  28. IMPORTANT INTERVIEW INSIGHT
  ==========================================

  If problem requires:

  "Process oldest item first"

  Think queue immediately.
  */

  /*
  ==========================================
  29. PERFORMANCE REALITY
  ==========================================

  Queue operations are extremely efficient.

  Excellent for sequential processing systems.
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== QUEUE COMPLETED =====\n";

  return 0;
}