#include <bits/stdc++.h>
using namespace std;

/*
==========================================
UNORDERED_SET IN C++
==========================================

unordered_set:
- stores UNIQUE values
- NO sorted order
- implemented using Hash Table

Main goal:
FAST lookup.

Average complexity:
O(1)
*/

int main()
{
  cout << "===== UNORDERED_SET INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING UNORDERED_SET
  ==========================================
  */

  unordered_set<int> us;

  /*
  ==========================================
  2. insert()
  ==========================================

  Inserts unique values.

  Average:
  O(1)
  */

  us.insert(10);
  us.insert(20);
  us.insert(30);
  us.insert(40);

  cout << "unordered_set elements:\n";

  for (auto x : us)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  IMPORTANT:

  Order is unpredictable.

  Could print:
  30 10 40 20

  etc.
  */

  /*
  ==========================================
  3. UNIQUE PROPERTY
  ==========================================

  Duplicate insertions ignored.
  */

  us.insert(20);
  us.insert(20);

  cout << "\nAfter duplicate insert:\n";

  for (auto x : us)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  Only one 20 stored.
  */

  /*
  ==========================================
  4. size()
  ==========================================
  */

  cout << "\nSize: "
       << us.size()
       << endl;

  /*
  ==========================================
  5. empty()
  ==========================================
  */

  if (us.empty())
  {
    cout << "unordered_set is empty\n";
  }
  else
  {
    cout << "unordered_set is NOT empty\n";
  }

  /*
  ==========================================
  6. find()
  ==========================================

  Average:
  O(1)
  */

  auto it = us.find(30);

  if (it != us.end())
  {
    cout << "\n30 Found\n";
  }
  else
  {
    cout << "\n30 Not Found\n";
  }

  /*
  ==========================================
  7. count()
  ==========================================

  Returns:
  0 or 1

  Because duplicates not allowed.
  */

  cout << "\nCount of 10: "
       << us.count(10)
       << endl;

  cout << "Count of 100: "
       << us.count(100)
       << endl;

  /*
  ==========================================
  8. erase()
  ==========================================
  */

  us.erase(20);

  cout << "\nAfter erase(20):\n";

  for (auto x : us)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  9. erase() USING ITERATOR
  ==========================================
  */

  auto eraseIt = us.find(30);

  if (eraseIt != us.end())
  {
    us.erase(eraseIt);
  }

  cout << "\nAfter erasing 30:\n";

  for (auto x : us)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  10. clear()
  ==========================================
  */

  unordered_set<int> temp =
      {
          1, 2, 3};

  temp.clear();

  cout << "\nTemp size after clear: "
       << temp.size()
       << endl;

  /*
  ==========================================
  11. INTERNAL STRUCTURE
  ==========================================

  unordered_set uses:
  Hash Table

  NOT tree.
  */

  /*
  ==========================================
  12. HASHING
  ==========================================

  Hash function converts value into:
  bucket index.

  Example:

  50 -> hash -> bucket 3
  */

  /*
  ==========================================
  13. BUCKETS
  ==========================================

  Hash tables store elements inside buckets.

  Multiple values may share same bucket.
  */

  /*
  ==========================================
  14. COLLISIONS
  ==========================================

  Different values may map to:
  same bucket.

  Example:

  10 -> bucket 2
  20 -> bucket 2
  */

  /*
  ==========================================
  15. WHY WORST CASE IS O(n)
  ==========================================

  Too many collisions:
  bucket becomes large.

  Performance degrades.
  */

  /*
  ==========================================
  16. COMPLEXITIES
  ==========================================

  insert:
  O(1) average

  erase:
  O(1) average

  find:
  O(1) average

  Worst case:
  O(n)
  */

  /*
  ==========================================
  17. IMPORTANT REALITY
  ==========================================

  unordered_set is usually MUCH faster
  than set for lookup.

  But:
  ordering lost.
  */

  /*
  ==========================================
  18. unordered_set vs set
  ==========================================

  set:
  - sorted
  - O(log n)

  unordered_set:
  - unsorted
  - O(1) average
  */

  /*
  ==========================================
  19. IMPORTANT LIMITATIONS
  ==========================================

  unordered_set does NOT support:
  - lower_bound
  - upper_bound
  - ordered traversal

  Why?

  Data is NOT sorted.
  */

  /*
  ==========================================
  20. IMPORTANT BEGINNER MISTAKE
  ==========================================

  NEVER rely on iteration order.

  It is NOT guaranteed.
  */

  /*
  ==========================================
  21. BUCKET FUNCTIONS
  ==========================================

  bucket_count():
  total buckets.
  */

  unordered_set<int> bucketSet =
      {
          1, 2, 3};

  cout << "\nBucket count: "
       << bucketSet.bucket_count()
       << endl;

  /*
  ==========================================
  22. LOAD FACTOR
  ==========================================

  load_factor =
  elements / buckets

  High load factor:
  more collisions.
  */

  cout << "Load factor: "
       << bucketSet.load_factor()
       << endl;

  /*
  ==========================================
  23. REHASHING
  ==========================================

  Hash table may:
  increase bucket count automatically.

  Called:
  rehashing.
  */

  /*
  ==========================================
  24. reserve()
  ==========================================

  Helps optimize performance
  for large insertions.
  */

  unordered_set<int> reserveSet;

  reserveSet.reserve(1000);

  /*
  Reduces future rehashing.
  */

  /*
  ==========================================
  25. COMMON INTERVIEW USES
  ==========================================

  unordered_set heavily used in:
  - duplicate detection
  - visited tracking
  - graph traversal
  - membership testing
  */

  /*
  ==========================================
  26. FAST MEMBERSHIP TESTING
  ==========================================

  One of the BEST use cases.

  Example:

  if(us.count(x))
  */

  /*
  ==========================================
  27. LONGEST CONSECUTIVE SEQUENCE
  ==========================================

  Famous interview problem.

  unordered_set used heavily.
  */

  /*
  ==========================================
  28. IMPORTANT INTERVIEW INSIGHT
  ==========================================

  If problem needs:
  FAST existence checking

  Think:
  unordered_set immediately.
  */

  /*
  ==========================================
  29. ITERATOR INVALIDATION
  ==========================================

  Rehashing may invalidate iterators.

  Important advanced concept.
  */

  /*
  ==========================================
  30. CUSTOM HASHING
  ==========================================

  Advanced topic.

  Needed for:
  - pairs
  - custom objects
  */

  /*
  ==========================================
  31. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Expecting sorted order.

  False.

  # 2:
  Using unordered_set when ordering needed.

  Bad choice.

  # 3:
  Forgetting worst-case O(n).
  */

  /*
  ==========================================
  32. REAL ENGINEERING USAGE
  ==========================================

  Hash tables used heavily in:
  - databases
  - caches
  - compilers
  - backend systems
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== UNORDERED_SET COMPLETED =====\n";

  return 0;
}