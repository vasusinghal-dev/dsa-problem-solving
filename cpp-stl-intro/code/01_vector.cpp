#include <bits/stdc++.h>
using namespace std;

/*
==========================================
VECTOR IN C++
==========================================

vector:
- dynamic array
- contiguous memory
- automatic resizing
- random access O(1)

Most used STL container.

Default choice most of the time.
*/

int main()
{
  cout << "===== VECTOR INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING VECTOR
  ==========================================
  */

  vector<int> v;

  // Initially empty

  cout << "Initial size: " << v.size() << endl;

  /*
  ==========================================
  2. push_back()
  ==========================================

  Adds element at end.

  Usually O(1)
  */

  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  cout << "\nAfter push_back:\n";

  for (int x : v)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  3. emplace_back()
  ==========================================

  Faster version of push_back.

  Constructs object directly.

  Important for complex objects.
  */

  v.emplace_back(40);

  cout << "\nAfter emplace_back:\n";

  for (int x : v)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  4. ACCESSING ELEMENTS
  ==========================================
  */

  cout << "\nFirst element: " << v[0] << endl;

  cout << "Second element: " << v[1] << endl;

  /*
  at() is safer than []

  Why?

  [] does NOT check bounds.
  at() throws exception if invalid index.
  */

  cout << "Using at(): " << v.at(2) << endl;

  /*
  ==========================================
  5. front() and back()
  ==========================================
  */

  cout << "\nFront: " << v.front() << endl;

  cout << "Back: " << v.back() << endl;

  /*
  ==========================================
  6. size()
  ==========================================

  Returns number of elements.
  */

  cout << "\nSize: " << v.size() << endl;

  /*
  ==========================================
  7. empty()
  ==========================================

  Checks whether vector is empty.
  */

  if (v.empty())
  {
    cout << "Vector is empty\n";
  }
  else
  {
    cout << "Vector is NOT empty\n";
  }

  /*
  ==========================================
  8. pop_back()
  ==========================================

  Removes last element.

  O(1)
  */

  v.pop_back();

  cout << "\nAfter pop_back:\n";

  for (int x : v)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  9. ITERATORS
  ==========================================
  */

  cout << "\nUsing iterators:\n";

  /*
  begin() -> first element
  end() -> position AFTER last element
  */

  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  10. REVERSE ITERATORS
  ==========================================
  */

  cout << "\nReverse traversal:\n";

  for (auto it = v.rbegin(); it != v.rend(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  /*
  ==========================================
  11. INSERT
  ==========================================

  insert(position, value)

  Expensive operation.

  Why?

  Elements shift in memory.
  */

  v.insert(v.begin() + 1, 100);

  cout << "\nAfter insert:\n";

  for (int x : v)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  12. ERASE
  ==========================================

  erase(iterator)

  Removes element at position.
  */

  v.erase(v.begin() + 1);

  cout << "\nAfter erase:\n";

  for (int x : v)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  13. CLEAR
  ==========================================

  Removes all elements.
  */

  vector<int> temp = {1, 2, 3};

  temp.clear();

  cout << "\nAfter clear, size: "
       << temp.size() << endl;

  /*
  ==========================================
  14. VECTOR INITIALIZATION
  ==========================================
  */

  vector<int> a(5);

  /*
  Creates:
  0 0 0 0 0
  */

  cout << "\nVector a:\n";

  for (int x : a)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  Vector with default values
  */

  vector<int> b(5, 10);

  /*
  Creates:
  10 10 10 10 10
  */

  cout << "\nVector b:\n";

  for (int x : b)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  15. COPYING VECTOR
  ==========================================
  */

  vector<int> copyVector = v;

  cout << "\nCopied vector:\n";

  for (int x : copyVector)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  16. NESTED VECTOR
  ==========================================

  Vector inside vector.

  Used for:
  - matrices
  - graphs
  - grids
  */

  vector<vector<int>> matrix =
      {
          {1, 2, 3},
          {4, 5, 6},
          {7, 8, 9}};

  cout << "\nMatrix:\n";

  for (auto row : matrix)
  {
    for (auto value : row)
    {
      cout << value << " ";
    }

    cout << endl;
  }

  /*
  ==========================================
  17. VECTOR OF PAIRS
  ==========================================

  Extremely common in DSA.
  */

  vector<pair<int, int>> vp;

  vp.push_back({1, 2});

  vp.emplace_back(3, 4);

  cout << "\nVector of pairs:\n";

  for (auto p : vp)
  {
    cout << p.first
         << " "
         << p.second
         << endl;
  }

  /*
  ==========================================
  18. SORTING VECTOR
  ==========================================

  STL sort is highly optimized.

  Complexity:
  O(n log n)
  */

  vector<int> nums = {4, 2, 5, 1, 3};

  sort(nums.begin(), nums.end());

  cout << "\nSorted vector:\n";

  for (int x : nums)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  Descending order
  */

  sort(nums.begin(), nums.end(), greater<int>());

  cout << "\nDescending order:\n";

  for (int x : nums)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  19. REVERSE VECTOR
  ==========================================
  */

  reverse(nums.begin(), nums.end());

  cout << "\nAfter reverse:\n";

  for (int x : nums)
  {
    cout << x << " ";
  }

  cout << endl;

  /*
  ==========================================
  20. FIND ELEMENT
  ==========================================
  */

  auto it = find(nums.begin(), nums.end(), 3);

  if (it != nums.end())
  {
    cout << "\n3 Found\n";
  }
  else
  {
    cout << "\n3 Not Found\n";
  }

  /*
  ==========================================
  21. BINARY SEARCH
  ==========================================

  Requires sorted vector.
  */

  sort(nums.begin(), nums.end());

  if (binary_search(nums.begin(), nums.end(), 4))
  {
    cout << "4 Exists\n";
  }
  else
  {
    cout << "4 Does Not Exist\n";
  }

  /*
  ==========================================
  22. lower_bound
  ==========================================

  First element >= target
  */

  auto lb = lower_bound(
      nums.begin(),
      nums.end(),
      3);

  cout << "\nlower_bound of 3: "
       << *lb << endl;

  /*
  ==========================================
  23. upper_bound
  ==========================================

  First element > target
  */

  auto ub = upper_bound(
      nums.begin(),
      nums.end(),
      3);

  cout << "upper_bound of 3: "
       << *ub << endl;

  /*
  ==========================================
  24. CAPACITY
  ==========================================

  capacity():
  allocated memory slots.

  size():
  actual elements count.
  */

  vector<int> cap;

  cout << "\nInitial capacity: "
       << cap.capacity() << endl;

  cap.push_back(1);

  cout << "Capacity after push: "
       << cap.capacity() << endl;

  /*
  Capacity grows automatically.

  Usually doubles internally.
  */

  /*
  ==========================================
  25. RESERVE
  ==========================================

  reserve() preallocates memory.

  Helps avoid repeated reallocations.
  */

  vector<int> reserveVec;

  reserveVec.reserve(100);

  cout << "\nReserved capacity: "
       << reserveVec.capacity()
       << endl;

  /*
  Very useful for optimization
  in competitive programming.
  */

  /*
  ==========================================
  26. IMPORTANT VECTOR REALITY
  ==========================================

  Vector is:
  - cache friendly
  - memory efficient
  - usually fastest STL container

  Default choice MOST of the time.
  */

  /*
  ==========================================
  27. COMMON INTERVIEW USES
  ==========================================

  vector used heavily in:
  - arrays
  - graphs
  - matrices
  - DP
  - sliding window
  - prefix sums
  - two pointers
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== VECTOR COMPLETED =====\n";

  return 0;
}