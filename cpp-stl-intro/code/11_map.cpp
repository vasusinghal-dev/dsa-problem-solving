#include <bits/stdc++.h>
using namespace std;

/*
==========================================
MAP IN C++
==========================================

map:
- stores key-value pairs
- keys are UNIQUE
- automatically sorted by keys
- implemented using Red-Black Tree

Very important STL container.
*/

int main()
{
  cout << "===== MAP INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING MAP
  ==========================================
  */

  map<int, string> mp;

  /*
  Syntax:

  map<key_datatype, value_datatype>
  */

  /*
  ==========================================
  2. INSERTING VALUES
  ==========================================
  */

  mp[1] = "Shadow";
  mp[2] = "Alex";
  mp[3] = "Sam";

  /*
  Keys automatically sorted.
  */

  cout << "Map elements:\n";

  for (auto x : mp)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  ==========================================
  3. IMPORTANT MAP PROPERTY
  ==========================================

  Keys are UNIQUE.
  */

  mp[2] = "Updated";

  cout << "\nAfter updating key 2:\n";

  for (auto x : mp)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  Old value replaced.
  */

  /*
  ==========================================
  4. ACCESSING VALUES
  ==========================================
  */

  cout << "\nKey 1 value: "
       << mp[1]
       << endl;

  /*
  ==========================================
  5. IMPORTANT BEGINNER TRAP
  ==========================================

  mp[key]

  creates key automatically if absent.
  */

  cout << "\nBefore accessing key 100:\n";

  cout << "Size: "
       << mp.size()
       << endl;

  cout << "\nAccessing mp[100]: "
       << mp[100]
       << endl;

  cout << "After access, size: "
       << mp.size()
       << endl;

  /*
  Key 100 created automatically.
  Default value inserted.
  */

  /*
  ==========================================
  6. find()
  ==========================================

  Safer existence checking.

  Does NOT create key.
  */

  auto it = mp.find(2);

  if (it != mp.end())
  {
    cout << "\nKey 2 Found\n";

    cout << it->first
         << " -> "
         << it->second
         << endl;
  }

  /*
  ==========================================
  7. count()
  ==========================================

  Returns:
  0 or 1

  Because keys are unique.
  */

  cout << "\nCount of key 1: "
       << mp.count(1)
       << endl;

  cout << "Count of key 500: "
       << mp.count(500)
       << endl;

  /*
  ==========================================
  8. erase()
  ==========================================
  */

  mp.erase(2);

  cout << "\nAfter erase(2):\n";

  for (auto x : mp)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  ==========================================
  9. erase() USING ITERATOR
  ==========================================
  */

  auto eraseIt = mp.find(1);

  if (eraseIt != mp.end())
  {
    mp.erase(eraseIt);
  }

  cout << "\nAfter erasing key 1:\n";

  for (auto x : mp)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  ==========================================
  10. size()
  ==========================================
  */

  cout << "\nSize: "
       << mp.size()
       << endl;

  /*
  ==========================================
  11. empty()
  ==========================================
  */

  if (mp.empty())
  {
    cout << "Map is empty\n";
  }
  else
  {
    cout << "Map is NOT empty\n";
  }

  /*
  ==========================================
  12. lower_bound()
  ==========================================

  First key >= target.
  */

  map<int, string> students =
      {
          {10, "A"},
          {20, "B"},
          {30, "C"}};

  auto lb = students.lower_bound(15);

  if (lb != students.end())
  {
    cout << "\nlower_bound(15): "
         << lb->first
         << endl;
  }

  /*
  ==========================================
  13. upper_bound()
  ==========================================

  First key > target.
  */

  auto ub = students.upper_bound(20);

  if (ub != students.end())
  {
    cout << "upper_bound(20): "
         << ub->first
         << endl;
  }

  /*
  ==========================================
  14. REVERSE ITERATION
  ==========================================
  */

  cout << "\nReverse traversal:\n";

  for (auto it = students.rbegin();
       it != students.rend();
       it++)
  {
    cout << it->first
         << " -> "
         << it->second
         << endl;
  }

  /*
  ==========================================
  15. INSERT USING insert()
  ==========================================
  */

  students.insert({40, "D"});

  /*
  insert() does NOT overwrite existing key.
  */

  students.insert({40, "X"});

  cout << "\nAfter insert():\n";

  for (auto x : students)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  Key 40 remains D.
  */

  /*
  ==========================================
  16. INTERNAL STRUCTURE
  ==========================================

  map uses:
  Red-Black Tree

  Self-balancing BST.
  */

  /*
  ==========================================
  17. WHY SORTED KEYS MATTER
  ==========================================

  Enables:
  - ordered traversal
  - lower_bound
  - range queries
  */

  /*
  ==========================================
  18. COMPLEXITIES
  ==========================================

  insert:
  O(log n)

  erase:
  O(log n)

  search:
  O(log n)
  */

  /*
  ==========================================
  19. FREQUENCY COUNTING
  ==========================================

  Very common interview use.
  */

  vector<int> nums =
      {
          1, 2, 2, 3, 1, 2};

  map<int, int> freq;

  for (auto x : nums)
  {
    freq[x]++;
  }

  cout << "\nFrequency Map:\n";

  for (auto x : freq)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  ==========================================
  20. IMPORTANT REALITY
  ==========================================

  map keeps keys sorted automatically.

  Very powerful feature.
  */

  /*
  ==========================================
  21. map vs unordered_map
  ==========================================

  map:
  - sorted
  - O(log n)

  unordered_map:
  - unsorted
  - O(1) average
  */

  /*
  ==========================================
  22. WHEN TO USE map
  ==========================================

  Use when:
  - sorted keys needed
  - lower_bound needed
  - ordered traversal needed
  */

  /*
  ==========================================
  23. WHEN unordered_map IS BETTER
  ==========================================

  Use unordered_map when:
  - only fast lookup needed
  - ordering unnecessary
  */

  /*
  ==========================================
  24. CUSTOM SORTING
  ==========================================

  Descending order map.
  */

  map<int, string, greater<int>> descMap;

  descMap[10] = "A";
  descMap[30] = "B";
  descMap[20] = "C";

  cout << "\nDescending map:\n";

  for (auto x : descMap)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  ==========================================
  25. IMPORTANT LIMITATION
  ==========================================

  INVALID:

  mp[0] for indexing position.

  map is tree-based,
  not array-based.
  */

  /*
  ==========================================
  26. COMMON INTERVIEW USES
  ==========================================

  map heavily used in:
  - frequency counting
  - ordered lookup
  - ranking systems
  - interval problems
  - coordinate compression
  */

  /*
  ==========================================
  27. ITERATOR STABILITY
  ==========================================

  map iterators mostly stable.

  Insertions usually safe.
  */

  /*
  ==========================================
  28. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Forgetting mp[key]
  creates missing key.

  # 2:
  Expecting insertion order.

  False.
  Keys always sorted.

  # 3:
  Using map when ordering unnecessary.

  unordered_map may be faster.
  */

  /*
  ==========================================
  29. REAL ENGINEERING USAGE
  ==========================================

  Tree maps used heavily in:
  - databases
  - indexing systems
  - schedulers
  - ranking engines
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== MAP COMPLETED =====\n";

  return 0;
}