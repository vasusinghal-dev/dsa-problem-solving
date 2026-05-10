#include <bits/stdc++.h>
using namespace std;

/*
==========================================
UNORDERED_MAP IN C++
==========================================

unordered_map:
- stores key-value pairs
- keys are UNIQUE
- NO sorted order
- implemented using Hash Table

Main goal:
VERY FAST lookup.

Average complexity:
O(1)
*/

int main()
{
  cout << "===== UNORDERED_MAP INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING UNORDERED_MAP
  ==========================================
  */

  unordered_map<int, string> ump;

  /*
  Syntax:

  unordered_map<key, value>
  */

  /*
  ==========================================
  2. INSERTING VALUES
  ==========================================
  */

  ump[1] = "Shadow";
  ump[2] = "Alex";
  ump[3] = "Sam";

  cout << "unordered_map elements:\n";

  for (auto x : ump)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  IMPORTANT:

  Order is NOT guaranteed.
  */

  /*
  ==========================================
  3. UNIQUE KEYS
  ==========================================

  Duplicate keys overwrite old value.
  */

  ump[2] = "Updated";

  cout << "\nAfter updating key 2:\n";

  for (auto x : ump)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  ==========================================
  4. ACCESSING VALUES
  ==========================================
  */

  cout << "\nKey 1 value: "
       << ump[1]
       << endl;

  /*
  ==========================================
  5. IMPORTANT BEGINNER TRAP
  ==========================================

  ump[key]

  creates missing key automatically.
  */

  cout << "\nBefore accessing key 100:\n";

  cout << "Size: "
       << ump.size()
       << endl;

  cout << "\nAccessing ump[100]: "
       << ump[100]
       << endl;

  cout << "After access, size: "
       << ump.size()
       << endl;

  /*
  Key 100 created automatically.
  */

  /*
  ==========================================
  6. find()
  ==========================================

  Safer lookup.

  Does NOT create key.
  */

  auto it = ump.find(2);

  if (it != ump.end())
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
       << ump.count(1)
       << endl;

  cout << "Count of key 500: "
       << ump.count(500)
       << endl;

  /*
  ==========================================
  8. erase()
  ==========================================
  */

  ump.erase(2);

  cout << "\nAfter erase(2):\n";

  for (auto x : ump)
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

  auto eraseIt = ump.find(1);

  if (eraseIt != ump.end())
  {
    ump.erase(eraseIt);
  }

  cout << "\nAfter erasing key 1:\n";

  for (auto x : ump)
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
       << ump.size()
       << endl;

  /*
  ==========================================
  11. empty()
  ==========================================
  */

  if (ump.empty())
  {
    cout << "unordered_map is empty\n";
  }
  else
  {
    cout << "unordered_map is NOT empty\n";
  }

  /*
  ==========================================
  12. insert()
  ==========================================

  insert() does NOT overwrite existing key.
  */

  unordered_map<int, string> users;

  users.insert({1, "A"});
  users.insert({2, "B"});

  users.insert({2, "X"});

  cout << "\nUsing insert():\n";

  for (auto x : users)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  Key 2 remains B.
  */

  /*
  ==========================================
  13. INTERNAL STRUCTURE
  ==========================================

  unordered_map uses:
  Hash Table

  NOT tree.
  */

  /*
  ==========================================
  14. HASHING
  ==========================================

  Hash function converts key into:
  bucket index.

  Example:

  key 50
    -> hash
    -> bucket 3
  */

  /*
  ==========================================
  15. BUCKETS
  ==========================================

  Data stored in buckets.

  Multiple keys may share same bucket.
  */

  /*
  ==========================================
  16. COLLISIONS
  ==========================================

  Different keys may map
  to same bucket.

  Called:
  collision.
  */

  /*
  ==========================================
  17. WHY WORST CASE IS O(n)
  ==========================================

  Too many collisions:
  lookup slows down.
  */

  /*
  ==========================================
  18. COMPLEXITIES
  ==========================================

  insert:
  O(1) average

  erase:
  O(1) average

  search:
  O(1) average

  Worst case:
  O(n)
  */

  /*
  ==========================================
  19. IMPORTANT REALITY
  ==========================================

  unordered_map usually MUCH faster
  than map for lookup-heavy problems.
  */

  /*
  ==========================================
  20. unordered_map vs map
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
  21. IMPORTANT LIMITATIONS
  ==========================================

  unordered_map does NOT support:
  - lower_bound
  - upper_bound
  - ordered traversal

  Why?

  Data NOT sorted.
  */

  /*
  ==========================================
  22. FREQUENCY COUNTING
  ==========================================

  One of MOST important interview uses.
  */

  vector<int> nums =
      {
          1, 2, 2, 3, 1, 2};

  unordered_map<int, int> freq;

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
  23. STRING FREQUENCY COUNTING
  ==========================================
  */

  string str = "banana";

  unordered_map<char, int> charFreq;

  for (char c : str)
  {
    charFreq[c]++;
  }

  cout << "\nCharacter Frequencies:\n";

  for (auto x : charFreq)
  {
    cout << x.first
         << " -> "
         << x.second
         << endl;
  }

  /*
  ==========================================
  24. bucket_count()
  ==========================================
  */

  cout << "\nBucket count: "
       << freq.bucket_count()
       << endl;

  /*
  ==========================================
  25. load_factor()
  ==========================================
  */

  cout << "Load factor: "
       << freq.load_factor()
       << endl;

  /*
  load_factor =
  elements / buckets
  */

  /*
  ==========================================
  26. reserve()
  ==========================================

  Helps reduce rehashing.
  */

  unordered_map<int, int> reserveMap;

  reserveMap.reserve(1000);

  /*
  Useful optimization for large data.
  */

  /*
  ==========================================
  27. IMPORTANT INTERVIEW USES
  ==========================================

  unordered_map heavily used in:
  - Two Sum
  - frequency counting
  - caching
  - graph problems
  - memoization
  */

  /*
  ==========================================
  28. MEMOIZATION
  ==========================================

  Dynamic Programming optimization.

  unordered_map often used for caching.
  */

  /*
  ==========================================
  29. IMPORTANT INTERVIEW INSIGHT
  ==========================================

  If problem needs:
  FAST key lookup

  Think:
  unordered_map immediately.
  */

  /*
  ==========================================
  30. ITERATOR INVALIDATION
  ==========================================

  Rehashing may invalidate iterators.

  Important advanced concept.
  */

  /*
  ==========================================
  31. CUSTOM HASHING
  ==========================================

  Advanced topic.

  Needed for:
  - pairs
  - vectors
  - custom classes
  */

  /*
  ==========================================
  32. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Expecting sorted order.

  False.

  # 2:
  Forgetting ump[key]
  creates missing key.

  # 3:
  Using unordered_map when ordering needed.
  */

  /*
  ==========================================
  33. REAL ENGINEERING USAGE
  ==========================================

  Hash maps used heavily in:
  - databases
  - caches
  - distributed systems
  - compilers
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== UNORDERED_MAP COMPLETED =====\n";

  return 0;
}