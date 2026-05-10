#include <bits/stdc++.h>
using namespace std;

/*
==========================================
SET IN C++
==========================================

set:
- stores UNIQUE values
- automatically SORTED
- implemented using Red-Black Tree

Very important STL container.
*/

int main()
{
  cout << "===== SET INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING SET
  ==========================================
  */

  set<int> s;

  /*
  ==========================================
  2. insert()
  ==========================================

  Inserts element in sorted order.

  Complexity:
  O(log n)
  */

  s.insert(30);
  s.insert(10);
  s.insert(20);
  s.insert(50);
  s.insert(40);

  /*
  Elements automatically sorted.
  */

  cout << "Set elements:\n";

  for (auto x : s)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  Output:
  10 20 30 40 50
  */

  /*
  ==========================================
  3. UNIQUE PROPERTY
  ==========================================

  Duplicate values ignored.
  */

  s.insert(20);
  s.insert(20);

  cout << "\nAfter duplicate insert:\n";

  for (auto x : s)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  Still only one 20 exists.
  */

  /*
  ==========================================
  4. size()
  ==========================================
  */

  cout << "\nSize: "
       << s.size()
       << endl;

  /*
  ==========================================
  5. empty()
  ==========================================
  */

  if (s.empty())
  {
    cout << "Set is empty\n";
  }
  else
  {
    cout << "Set is NOT empty\n";
  }

  /*
  ==========================================
  6. find()
  ==========================================

  Searches element.

  Complexity:
  O(log n)
  */

  auto it = s.find(30);

  if (it != s.end())
  {
    cout << "\n30 Found\n";
  }
  else
  {
    cout << "\n30 Not Found\n";
  }

  /*
  ==========================================
  7. erase()
  ==========================================

  Removes element.
  */

  s.erase(20);

  cout << "\nAfter erase(20):\n";

  for (auto x : s)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  8. erase() USING ITERATOR
  ==========================================
  */

  auto eraseIt = s.find(30);

  if (eraseIt != s.end())
  {
    s.erase(eraseIt);
  }

  cout << "\nAfter erasing 30:\n";

  for (auto x : s)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  9. count()
  ==========================================

  Returns:
  0 or 1

  Because duplicates not allowed.
  */

  cout << "\nCount of 10: "
       << s.count(10)
       << endl;

  cout << "Count of 100: "
       << s.count(100)
       << endl;

  /*
  ==========================================
  10. lower_bound()
  ==========================================

  First element >= target
  */

  auto lb = s.lower_bound(35);

  if (lb != s.end())
  {
    cout << "\nlower_bound(35): "
         << *lb
         << endl;
  }

  /*
  ==========================================
  11. upper_bound()
  ==========================================

  First element > target
  */

  auto ub = s.upper_bound(40);

  if (ub != s.end())
  {
    cout << "upper_bound(40): "
         << *ub
         << endl;
  }

  /*
  ==========================================
  12. IMPORTANT REALITY
  ==========================================

  set supports:
  - lower_bound
  - upper_bound

  because elements are sorted.
  */

  /*
  ==========================================
  13. REVERSE ITERATION
  ==========================================
  */

  cout << "\nReverse traversal:\n";

  for (auto it = s.rbegin(); it != s.rend(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  14. CLEAR
  ==========================================
  */

  set<int> temp = {1, 2, 3};

  temp.clear();

  cout << "\nTemp size after clear: "
       << temp.size()
       << endl;

  /*
  ==========================================
  15. IMPORTANT LIMITATION
  ==========================================

  INVALID:

  s[0]

  Why?

  set is tree-based,
  not contiguous memory.
  */

  /*
  ==========================================
  16. INTERNAL STRUCTURE
  ==========================================

  set uses:
  Red-Black Tree

  Self-balancing BST.

  Keeps operations:
  O(log n)
  */

  /*
  ==========================================
  17. WHY SORTED ORDER MATTERS
  ==========================================

  Sorted containers support:
  - ordered traversal
  - range queries
  - binary-like searching
  - lower_bound
  */

  /*
  ==========================================
  18. COMPLEXITIES
  ==========================================

  insert:
  O(log n)

  erase:
  O(log n)

  find:
  O(log n)
  */

  /*
  ==========================================
  19. SET vs VECTOR
  ==========================================

  vector:
  - fast indexing
  - no automatic sorting

  set:
  - automatic sorting
  - no indexing
  */

  /*
  ==========================================
  20. SET vs UNORDERED_SET
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
  21. IMPORTANT INTERVIEW INSIGHT
  ==========================================

  If problem needs:
  - sorted unique values
  - lower_bound
  - ordered searching

  Think set immediately.
  */

  /*
  ==========================================
  22. COMMON INTERVIEW USES
  ==========================================

  set heavily used in:
  - duplicate removal
  - ordered searching
  - interval problems
  - rank systems
  - leaderboards
  */

  /*
  ==========================================
  23. DUPLICATE REMOVAL
  ==========================================
  */

  vector<int> nums =
      {
          1, 2, 2, 3, 3, 4};

  set<int> uniqueSet(
      nums.begin(),
      nums.end());

  cout << "\nAfter duplicate removal:\n";

  for (auto x : uniqueSet)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  24. RANGE-BASED CONSTRUCTOR
  ==========================================
  */

  vector<int> arr =
      {
          100, 200, 300};

  set<int> s2(
      arr.begin(),
      arr.end());

  cout << "\nConstructed from vector:\n";

  for (auto x : s2)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  25. CUSTOM SORTING
  ==========================================

  Descending order set.
  */

  set<int, greater<int>> descSet;

  descSet.insert(10);
  descSet.insert(30);
  descSet.insert(20);

  cout << "\nDescending set:\n";

  for (auto x : descSet)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  26. ITERATOR STABILITY
  ==========================================

  set iterators are mostly stable.

  Insertions usually do NOT
  invalidate existing iterators.
  */

  /*
  ==========================================
  27. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Expecting insertion order.

  False.
  set always sorted.

  # 2:
  Trying indexing.

  INVALID.

  # 3:
  Using set when ordering unnecessary.

  unordered_set may be faster.
  */

  /*
  ==========================================
  28. PERFORMANCE REALITY
  ==========================================

  set slower than unordered_set,
  but more powerful for ordered operations.
  */

  /*
  ==========================================
  29. REAL ENGINEERING USAGE
  ==========================================

  Trees used heavily in:
  - databases
  - indexing systems
  - schedulers
  - ranking systems
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== SET COMPLETED =====\n";

  return 0;
}