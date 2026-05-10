#include <bits/stdc++.h>
using namespace std;

/*
==========================================
LIST IN C++
==========================================

list:
- Doubly Linked List
- non-contiguous memory
- fast insertion/deletion
- no random access

Important:
list is NOT usually faster than vector.
*/

int main()
{
  cout << "===== LIST INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING LIST
  ==========================================
  */

  list<int> l;

  /*
  ==========================================
  2. push_back()
  ==========================================

  Adds element at end.

  O(1)
  */

  l.push_back(10);
  l.push_back(20);
  l.push_back(30);

  cout << "After push_back:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  3. push_front()
  ==========================================

  Fast front insertion.

  One major advantage over vector.
  */

  l.push_front(5);

  cout << "\nAfter push_front:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  4. pop_back()
  ==========================================
  */

  l.pop_back();

  cout << "\nAfter pop_back:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  5. pop_front()
  ==========================================
  */

  l.pop_front();

  cout << "\nAfter pop_front:\n";

  for (auto x : l)
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
       << l.front()
       << endl;

  cout << "Back: "
       << l.back()
       << endl;

  /*
  ==========================================
  7. size()
  ==========================================
  */

  cout << "\nSize: "
       << l.size()
       << endl;

  /*
  ==========================================
  8. empty()
  ==========================================
  */

  if (l.empty())
  {
    cout << "List is empty\n";
  }
  else
  {
    cout << "List is NOT empty\n";
  }

  /*
  ==========================================
  9. ITERATORS
  ==========================================

  list uses iterators heavily.

  Why?

  No random access support.
  */

  cout << "\nTraversal using iterators:\n";

  for (auto it = l.begin(); it != l.end(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  10. IMPORTANT REALITY
  ==========================================

  INVALID:

  l[0]

  Why?

  list nodes are NOT contiguous.
  */

  /*
  ==========================================
  11. insert()
  ==========================================

  insert(iterator, value)

  O(1) if iterator position already known.
  */

  auto it = l.begin();

  it++;

  l.insert(it, 100);

  cout << "\nAfter insert:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  12. erase()
  ==========================================

  Removes element at iterator position.
  */

  auto eraseIt = l.begin();

  eraseIt++;

  l.erase(eraseIt);

  cout << "\nAfter erase:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  13. remove()
  ==========================================

  Removes ALL matching values.
  */

  l.push_back(20);
  l.push_back(20);

  cout << "\nBefore remove:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  l.remove(20);

  cout << "\nAfter remove(20):\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  14. reverse()
  ==========================================
  */

  l.push_back(1);
  l.push_back(2);
  l.push_back(3);

  l.reverse();

  cout << "\nAfter reverse:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  15. sort()
  ==========================================

  list has built-in sort().

  Why not STL sort()?

  Because STL sort requires
  random-access iterators.
  */

  l.sort();

  cout << "\nAfter sort:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  16. unique()
  ==========================================

  Removes consecutive duplicates.
  */

  l.push_back(3);
  l.push_back(3);

  cout << "\nBefore unique:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  l.unique();

  cout << "\nAfter unique:\n";

  for (auto x : l)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  17. merge()
  ==========================================

  Merges sorted lists.
  */

  list<int> a = {1, 3, 5};

  list<int> b = {2, 4, 6};

  a.merge(b);

  cout << "\nMerged list:\n";

  for (auto x : a)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  b becomes empty after merge.
  */

  /*
  ==========================================
  18. splice()
  ==========================================

  Transfers elements between lists.

  Very efficient in linked lists.
  */

  list<int> l1 = {1, 2, 3};

  list<int> l2 = {10, 20};

  auto pos = l1.begin();

  pos++;

  l1.splice(pos, l2);

  cout << "\nAfter splice:\n";

  for (auto x : l1)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  l2 becomes empty.
  */

  /*
  ==========================================
  19. REVERSE ITERATORS
  ==========================================
  */

  cout << "\nReverse traversal:\n";

  for (auto it = l1.rbegin(); it != l1.rend(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  20. INTERNAL STRUCTURE
  ==========================================

  Doubly Linked List:

  NULL <- [prev data next] -> NULL

  Each node stores:
  - data
  - previous pointer
  - next pointer
  */

  /*
  ==========================================
  21. WHY INSERTION IS FAST
  ==========================================

  Only pointers change.

  No shifting like vector.
  */

  /*
  ==========================================
  22. WHY RANDOM ACCESS IS SLOW
  ==========================================

  Must traverse node-by-node.

  Cannot jump memory directly.
  */

  /*
  ==========================================
  23. IMPORTANT PERFORMANCE REALITY
  ==========================================

  Despite O(1) insertion:

  vector often outperforms list.

  Why?

  Cache locality.
  */

  /*
  ==========================================
  24. CACHE LOCALITY
  ==========================================

  vector:
  contiguous memory.

  list:
  scattered nodes in memory.

  CPU cache prefers contiguous data.
  */

  /*
  ==========================================
  25. ITERATOR STABILITY
  ==========================================

  list iterators are very stable.

  Insertions/deletions usually
  do NOT invalidate iterators.

  Major advantage over vector.
  */

  /*
  ==========================================
  26. WHEN TO USE LIST
  ==========================================

  Use when:
  - frequent middle insertion/deletion
  - iterator stability important
  - linked-list behavior required
  */

  /*
  ==========================================
  27. WHEN NOT TO USE LIST
  ==========================================

  Avoid when:
  - random access needed
  - high iteration performance needed

  Usually:
  vector is better.
  */

  /*
  ==========================================
  28. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Assuming list is faster than vector.

  Usually false.

  # 2:
  Trying random access.

  INVALID.

  # 3:
  Forgetting insert/delete needs iterator.
  */

  /*
  ==========================================
  29. REAL-WORLD USAGE
  ==========================================

  list used less frequently than vector.

  Still useful in:
  - LRU cache
  - scheduling systems
  - frequent modifications
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== LIST COMPLETED =====\n";

  return 0;
}