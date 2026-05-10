#include <bits/stdc++.h>
using namespace std;

/*
==========================================
DEQUE IN C++
==========================================

deque:
Double Ended Queue

Features:
- fast insertion/removal at BOTH ends
- random access supported
- dynamic size

Pronounced:
"deck"
*/

int main()
{
  cout << "===== DEQUE INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING DEQUE
  ==========================================
  */

  deque<int> dq;

  /*
  ==========================================
  2. push_back()
  ==========================================

  Adds element at back.

  O(1)
  */

  dq.push_back(10);
  dq.push_back(20);
  dq.push_back(30);

  cout << "After push_back:\n";

  for (auto x : dq)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  3. push_front()
  ==========================================

  Major advantage over vector.

  Fast front insertion.
  */

  dq.push_front(5);
  dq.push_front(1);

  cout << "\nAfter push_front:\n";

  for (auto x : dq)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  4. pop_back()
  ==========================================
  */

  dq.pop_back();

  cout << "\nAfter pop_back:\n";

  for (auto x : dq)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  5. pop_front()
  ==========================================
  */

  dq.pop_front();

  cout << "\nAfter pop_front:\n";

  for (auto x : dq)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  6. front() and back()
  ==========================================
  */

  cout << "\nFront: "
       << dq.front()
       << endl;

  cout << "Back: "
       << dq.back()
       << endl;

  /*
  ==========================================
  7. RANDOM ACCESS
  ==========================================

  deque supports indexing.

  O(1)
  */

  cout << "\nIndex 1: "
       << dq[1]
       << endl;

  cout << "Using at(): "
       << dq.at(2)
       << endl;

  /*
  at() performs bounds checking.
  */

  /*
  ==========================================
  8. ITERATORS
  ==========================================
  */

  cout << "\nTraversal using iterators:\n";

  for (auto it = dq.begin(); it != dq.end(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  9. REVERSE ITERATORS
  ==========================================
  */

  cout << "\nReverse traversal:\n";

  for (auto it = dq.rbegin(); it != dq.rend(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  10. size()
  ==========================================
  */

  cout << "\nSize: "
       << dq.size()
       << endl;

  /*
  ==========================================
  11. empty()
  ==========================================
  */

  if (dq.empty())
  {
    cout << "Deque is empty\n";
  }
  else
  {
    cout << "Deque is NOT empty\n";
  }

  /*
  ==========================================
  12. insert()
  ==========================================

  Inserts at specific position.

  Middle insertion still expensive.
  */

  dq.insert(dq.begin() + 1, 100);

  cout << "\nAfter insert:\n";

  for (auto x : dq)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  13. erase()
  ==========================================
  */

  dq.erase(dq.begin() + 1);

  cout << "\nAfter erase:\n";

  for (auto x : dq)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  14. clear()
  ==========================================
  */

  deque<int> temp = {1, 2, 3};

  temp.clear();

  cout << "\nTemp size after clear: "
       << temp.size()
       << endl;

  /*
  ==========================================
  15. INITIALIZATION
  ==========================================
  */

  deque<int> a(5);

  /*
  Creates:
  0 0 0 0 0
  */

  cout << "\nDeque a:\n";

  for (auto x : a)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  With default values.
  */

  deque<int> b(5, 10);

  cout << "\nDeque b:\n";

  for (auto x : b)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  16. SORTING
  ==========================================

  deque supports STL algorithms.
  */

  deque<int> nums = {4, 2, 5, 1, 3};

  sort(nums.begin(), nums.end());

  cout << "\nSorted deque:\n";

  for (auto x : nums)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  17. REVERSE
  ==========================================
  */

  reverse(nums.begin(), nums.end());

  cout << "\nReversed deque:\n";

  for (auto x : nums)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  18. INTERNAL STRUCTURE
  ==========================================

  deque is NOT fully contiguous like vector.

  Internally:
  segmented memory blocks.

  This allows:
  efficient front operations.
  */

  /*
  ==========================================
  19. deque vs vector
  ==========================================

  vector:
  - better cache locality
  - fully contiguous
  - slower front insertion

  deque:
  - fast front insertion
  - slightly weaker cache locality
  */

  /*
  ==========================================
  20. COMPLEXITIES
  ==========================================

  Access:
  O(1)

  push_front:
  O(1)

  push_back:
  O(1)

  insert middle:
  O(n)
  */

  /*
  ==========================================
  21. IMPORTANT REALITY
  ==========================================

  deque is often used internally for:
  - stack
  - queue

  because:
  front and back operations are efficient.
  */

  /*
  ==========================================
  22. COMMON INTERVIEW USES
  ==========================================

  deque heavily used in:
  - Sliding Window Maximum
  - Monotonic Queue
  - BFS variants
  */

  /*
  ==========================================
  23. MONOTONIC QUEUE
  ==========================================

  Advanced DSA technique.

  deque helps maintain:
  increasing/decreasing order efficiently.
  */

  /*
  ==========================================
  24. ITERATOR INVALIDATION
  ==========================================

  deque iterator invalidation rules
  are more complex than vector.

  Some operations may invalidate:
  - iterators
  - references

  Be careful.
  */

  /*
  ==========================================
  25. WHEN TO USE deque
  ==========================================

  Use when:
  - front operations frequent
  - back operations frequent
  - random access still needed
  */

  /*
  ==========================================
  26. WHEN vector IS BETTER
  ==========================================

  Use vector when:
  - mostly back operations
  - maximum cache performance needed
  */

  /*
  ==========================================
  27. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Thinking deque is fully contiguous.

  False.

  # 2:
  Using vector for heavy front insertion.

  Bad performance.

  # 3:
  Assuming deque sorting is special.

  Normal STL sort works.
  */

  /*
  ==========================================
  28. REAL-WORLD USAGE
  ==========================================

  deque useful in:
  - schedulers
  - buffering systems
  - sliding window problems
  - streaming systems
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== DEQUE COMPLETED =====\n";

  return 0;
}