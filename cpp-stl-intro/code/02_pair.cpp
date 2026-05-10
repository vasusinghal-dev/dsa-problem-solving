#include <bits/stdc++.h>
using namespace std;

/*
==========================================
PAIR IN C++
==========================================

pair:
- stores two values together
- values can be different datatypes

Very heavily used in:
- DSA
- graphs
- sorting
- coordinate problems
- competitive programming
*/

int main()
{
  cout << "===== PAIR INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING PAIR
  ==========================================
  */

  pair<int, int> p;

  /*
  first  -> first value
  second -> second value
  */

  p.first = 10;
  p.second = 20;

  cout << "First: " << p.first << endl;

  cout << "Second: " << p.second << endl;

  /*
  ==========================================
  2. DIRECT INITIALIZATION
  ==========================================
  */

  pair<int, int> p1 = {1, 2};

  cout << "\np1:\n";

  cout << p1.first
       << " "
       << p1.second
       << endl;

  /*
  ==========================================
  3. make_pair()
  ==========================================

  Utility function for pair creation.
  */

  pair<int, int> p2 = make_pair(100, 200);

  cout << "\np2:\n";

  cout << p2.first
       << " "
       << p2.second
       << endl;

  /*
  ==========================================
  4. PAIR WITH DIFFERENT DATATYPES
  ==========================================
  */

  pair<int, string> student =
      {
          101,
          "Shadow"};

  cout << "\nStudent Info:\n";

  cout << student.first
       << " "
       << student.second
       << endl;

  /*
  ==========================================
  5. NESTED PAIRS
  ==========================================

  Pair inside another pair.
  */

  pair<int, pair<int, int>> nested =
      {
          1,
          {2, 3}};

  cout << "\nNested Pair:\n";

  cout << nested.first << endl;

  cout << nested.second.first << endl;

  cout << nested.second.second << endl;

  /*
  ==========================================
  6. ARRAY OF PAIRS
  ==========================================

  Very common in DSA.
  */

  pair<int, int> arr[3];

  arr[0] = {1, 2};
  arr[1] = {3, 4};
  arr[2] = {5, 6};

  cout << "\nArray of Pairs:\n";

  for (int i = 0; i < 3; i++)
  {
    cout << arr[i].first
         << " "
         << arr[i].second
         << endl;
  }

  /*
  ==========================================
  7. VECTOR OF PAIRS
  ==========================================

  Extremely important structure.

  Used heavily in:
  - graphs
  - intervals
  - sorting problems
  */

  vector<pair<int, int>> vp;

  /*
  push_back()
  */

  vp.push_back({10, 20});

  /*
  emplace_back()

  Faster because object created directly.
  */

  vp.emplace_back(30, 40);

  vp.push_back({50, 60});

  cout << "\nVector of Pairs:\n";

  for (auto x : vp)
  {
    cout << x.first
         << " "
         << x.second
         << endl;
  }

  /*
  ==========================================
  8. ACCESSING VECTOR OF PAIRS
  ==========================================
  */

  cout << "\nAccessing first pair:\n";

  cout << vp[0].first
       << " "
       << vp[0].second
       << endl;

  /*
  ==========================================
  9. ITERATING USING ITERATORS
  ==========================================
  */

  cout << "\nUsing Iterators:\n";

  for (auto it = vp.begin(); it != vp.end(); it++)
  {
    cout << it->first
         << " "
         << it->second
         << endl;
  }

  /*
  Why -> operator?

  Because iterator behaves like pointer.

  it->first
  same as:
  (*it).first
  */

  /*
  ==========================================
  10. PAIR COMPARISON
  ==========================================

  Pairs compare lexicographically.

  Important interview concept.
  */

  pair<int, int> a = {1, 2};

  pair<int, int> b = {1, 3};

  if (a < b)
  {
    cout << "\na is smaller\n";
  }

  /*
  Comparison process:

  Step 1:
  Compare first values.

  If equal:
  Compare second values.
  */

  /*
  ==========================================
  11. SORTING PAIRS
  ==========================================

  Default sorting:
  first element priority.
  */

  vector<pair<int, int>> nums =
      {
          {2, 100},
          {1, 200},
          {2, 50},
          {1, 150}};

  sort(nums.begin(), nums.end());

  cout << "\nSorted Pairs:\n";

  for (auto p : nums)
  {
    cout << p.first
         << " "
         << p.second
         << endl;
  }

  /*
  Sorting logic:

  First compare:
  pair.first

  If equal:
  compare pair.second
  */

  /*
  ==========================================
  12. CUSTOM SORTING
  ==========================================
  */

  sort(
      nums.begin(),
      nums.end(),
      [](pair<int, int> a, pair<int, int> b)
      {
        return a.second < b.second;
      });

  cout << "\nSorted by Second Value:\n";

  for (auto p : nums)
  {
    cout << p.first
         << " "
         << p.second
         << endl;
  }

  /*
  ==========================================
  13. VECTOR OF NESTED PAIRS
  ==========================================

  Common in advanced DSA.
  */

  vector<pair<int, pair<int, int>>> complexVec;

  complexVec.push_back({1, {2, 3}});

  cout << "\nNested Vector Pair:\n";

  cout << complexVec[0].first << endl;

  cout << complexVec[0].second.first << endl;

  cout << complexVec[0].second.second << endl;

  /*
  ==========================================
  14. STRUCTURED BINDING (C++17)
  ==========================================

  Cleaner pair unpacking.
  */

  pair<int, string> user =
      {
          101,
          "Shadow"};

  auto [id, name] = user;

  cout << "\nStructured Binding:\n";

  cout << id
       << " "
       << name
       << endl;

  /*
  Much cleaner than:
  user.first
  user.second
  */

  /*
  ==========================================
  15. SWAP PAIRS
  ==========================================
  */

  pair<int, int> x = {1, 2};

  pair<int, int> y = {3, 4};

  swap(x, y);

  cout << "\nAfter Swap:\n";

  cout << x.first
       << " "
       << x.second
       << endl;

  /*
  ==========================================
  16. IMPORTANT REAL-WORLD USES
  ==========================================

  pair heavily used in:
  - graph adjacency lists
  - coordinates
  - intervals
  - sorting problems
  - heap problems
  - maps

  Very important STL structure.
  */

  /*
  ==========================================
  17. COMMON INTERVIEW PATTERNS
  ==========================================

  vector<pair<int,int>>

  appears constantly in:
  - interval merging
  - scheduling
  - graph edges
  - sweep line algorithms
  */

  /*
  ==========================================
  18. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Forgetting .first and .second

  # 2:
  Confusing pair sorting behavior

  # 3:
  Using nested pairs excessively

  Sometimes struct/class is cleaner.
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== PAIR COMPLETED =====\n";

  return 0;
}