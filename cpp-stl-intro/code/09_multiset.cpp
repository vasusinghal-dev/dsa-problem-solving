#include <bits/stdc++.h>
using namespace std;

/*
==========================================
MULTISET IN C++
==========================================

multiset:
- stores SORTED values
- DUPLICATES allowed
- implemented using Red-Black Tree

Very useful for frequency-based problems.
*/

int main()
{
  cout << "===== MULTISET INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING MULTISET
  ==========================================
  */

  multiset<int> ms;

  /*
  ==========================================
  2. insert()
  ==========================================

  Inserts elements in sorted order.

  Duplicates allowed.
  */

  ms.insert(10);
  ms.insert(20);
  ms.insert(10);
  ms.insert(30);
  ms.insert(20);

  cout << "Multiset elements:\n";

  for (auto x : ms)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  Output:
  10 10 20 20 30
  */

  /*
  ==========================================
  3. DUPLICATES ALLOWED
  ==========================================

  Main difference from set.
  */

  ms.insert(10);

  cout << "\nAfter inserting another 10:\n";

  for (auto x : ms)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  4. size()
  ==========================================
  */

  cout << "\nSize: "
       << ms.size()
       << endl;

  /*
  ==========================================
  5. empty()
  ==========================================
  */

  if (ms.empty())
  {
    cout << "Multiset is empty\n";
  }
  else
  {
    cout << "Multiset is NOT empty\n";
  }

  /*
  ==========================================
  6. find()
  ==========================================

  Returns iterator to FIRST occurrence.
  */

  auto it = ms.find(20);

  if (it != ms.end())
  {
    cout << "\n20 Found\n";
  }

  /*
  ==========================================
  7. count()
  ==========================================

  Counts occurrences.
  */

  cout << "\nCount of 10: "
       << ms.count(10)
       << endl;

  cout << "Count of 20: "
       << ms.count(20)
       << endl;

  /*
  ==========================================
  8. erase(value)
  ==========================================

  VERY IMPORTANT INTERVIEW TRAP.

  Removes ALL occurrences.
  */

  multiset<int> temp =
      {
          1, 1, 1, 2, 2, 3};

  cout << "\nBefore erase(1):\n";

  for (auto x : temp)
  {
    cout << x << " ";
  }

  cout << endl;

  temp.erase(1);

  cout << "\nAfter erase(1):\n";

  for (auto x : temp)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ALL 1s removed.
  */

  /*
  ==========================================
  9. REMOVE SINGLE OCCURRENCE
  ==========================================

  Very important technique.
  */

  multiset<int> nums =
      {
          10, 10, 10, 20};

  auto eraseIt = nums.find(10);

  if (eraseIt != nums.end())
  {
    nums.erase(eraseIt);
  }

  cout << "\nAfter removing ONE 10:\n";

  for (auto x : nums)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  Only one 10 removed.
  */

  /*
  ==========================================
  10. lower_bound()
  ==========================================

  First element >= target.
  */

  auto lb = nums.lower_bound(10);

  if (lb != nums.end())
  {
    cout << "\nlower_bound(10): "
         << *lb
         << endl;
  }

  /*
  ==========================================
  11. upper_bound()
  ==========================================

  First element > target.
  */

  auto ub = nums.upper_bound(10);

  if (ub != nums.end())
  {
    cout << "upper_bound(10): "
         << *ub
         << endl;
  }

  /*
  ==========================================
  12. equal_range()
  ==========================================

  Returns range of duplicates.
  */

  multiset<int> rangeSet =
      {
          1, 2, 2, 2, 3, 4};

  auto range = rangeSet.equal_range(2);

  cout << "\nAll occurrences of 2:\n";

  for (auto it = range.first;
       it != range.second;
       it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  13. REVERSE ITERATION
  ==========================================
  */

  cout << "\nReverse traversal:\n";

  for (auto it = nums.rbegin();
       it != nums.rend();
       it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  14. CLEAR
  ==========================================
  */

  multiset<int> clearSet =
      {
          1, 2, 3};

  clearSet.clear();

  cout << "\nSize after clear: "
       << clearSet.size()
       << endl;

  /*
  ==========================================
  15. IMPORTANT LIMITATION
  ==========================================

  INVALID:

  ms[0]

  Why?

  multiset is tree-based,
  not array-based.
  */

  /*
  ==========================================
  16. INTERNAL STRUCTURE
  ==========================================

  multiset uses:
  Red-Black Tree

  Self-balancing BST.
  */

  /*
  ==========================================
  17. WHY DUPLICATES MATTER
  ==========================================

  Some problems require:
  frequency tracking while keeping order.

  set cannot handle duplicates.
  multiset can.
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

  count:
  O(log n + occurrences)
  */

  /*
  ==========================================
  19. multiset vs set
  ==========================================

  set:
  unique values only.

  multiset:
  duplicates allowed.
  */

  /*
  ==========================================
  20. multiset vs unordered_multiset
  ==========================================

  multiset:
  sorted
  O(log n)

  unordered_multiset:
  unsorted
  O(1) average
  */

  /*
  ==========================================
  21. IMPORTANT INTERVIEW INSIGHT
  ==========================================

  If problem needs:
  - duplicates
  - sorted order
  - frequent insert/delete

  Think multiset.
  */

  /*
  ==========================================
  22. COMMON INTERVIEW USES
  ==========================================

  multiset heavily used in:
  - sliding window median
  - balancing problems
  - duplicate tracking
  - interval maintenance
  */

  /*
  ==========================================
  23. SLIDING WINDOW MEDIAN
  ==========================================

  Advanced interview problem.

  multiset helps maintain:
  sorted window efficiently.
  */

  /*
  ==========================================
  24. RANGE QUERIES
  ==========================================

  Sorted property enables:
  - lower_bound
  - upper_bound
  - equal_range
  */

  /*
  ==========================================
  25. ITERATOR STABILITY
  ==========================================

  multiset iterators mostly stable.

  Insertions usually safe.
  */

  /*
  ==========================================
  26. CUSTOM SORTING
  ==========================================

  Descending multiset.
  */

  multiset<int, greater<int>> descMS;

  descMS.insert(10);
  descMS.insert(30);
  descMS.insert(20);

  cout << "\nDescending multiset:\n";

  for (auto x : descMS)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  27. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Forgetting erase(value)
  removes ALL occurrences.

  # 2:
  Trying indexing.

  INVALID.

  # 3:
  Using multiset when ordering unnecessary.

  unordered structures may be faster.
  */

  /*
  ==========================================
  28. PERFORMANCE REALITY
  ==========================================

  multiset slower than hashing,
  but supports ordered operations.
  */

  /*
  ==========================================
  29. REAL ENGINEERING USAGE
  ==========================================

  Tree-based multisets useful in:
  - ranking systems
  - event tracking
  - scheduling
  - ordered frequency systems
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== MULTISET COMPLETED =====\n";

  return 0;
}