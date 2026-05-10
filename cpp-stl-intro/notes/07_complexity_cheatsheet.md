# ==========================================

# STL COMPLEXITY CHEATSHEET

# ==========================================

# Why Complexity Matters

Choosing wrong container can:

- slow programs massively
- cause TLE in contests (Time Limit Exceeded)
- fail interview optimization checks

STL mastery is NOT:
memorizing syntax.

It is:
choosing correct data structure quickly.

---

# Time Complexity Basics

| Complexity | Meaning           |
| ---------- | ----------------- |
| O(1)       | Constant          |
| O(log n)   | Logarithmic       |
| O(n)       | Linear            |
| O(n log n) | Efficient sorting |
| O(n²)      | Nested-loop heavy |

---

# Important Reality

Big-O is approximation.

Real performance also depends on:

- cache locality
- memory layout
- constants
- implementation details

Very important advanced concept.

---

# VECTOR COMPLEXITIES

| Operation     | Complexity     |
| ------------- | -------------- |
| Access        | O(1)           |
| push_back     | O(1) amortized |
| pop_back      | O(1)           |
| insert middle | O(n)           |
| erase middle  | O(n)           |
| search        | O(n)           |

---

# VECTOR IMPORTANT NOTES

# Why push_back is amortized O(1)

Sometimes vector reallocates:

- larger memory allocated
- old elements copied

That resize costs O(n).

But happens infrequently.

---

# VECTOR STRENGTHS

- contiguous memory
- cache friendly
- fastest iteration
- random access

Default STL container most of the time.

---

# LIST COMPLEXITIES

| Operation                   | Complexity |
| --------------------------- | ---------- |
| Access                      | O(n)       |
| Insert/Delete with iterator | O(1)       |
| Search                      | O(n)       |

---

# LIST IMPORTANT NOTES

list is:
Doubly Linked List.

No contiguous memory.

---

# IMPORTANT BEGINNER REALITY

list is NOT usually faster than vector.

vector often performs better due to:
cache locality.

---

# DEQUE COMPLEXITIES

| Operation     | Complexity |
| ------------- | ---------- |
| Access        | O(1)       |
| push_front    | O(1)       |
| push_back     | O(1)       |
| pop_front     | O(1)       |
| pop_back      | O(1)       |
| insert middle | O(n)       |

---

# STACK COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| push      | O(1)       |
| pop       | O(1)       |
| top       | O(1)       |

---

# QUEUE COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| push      | O(1)       |
| pop       | O(1)       |
| front     | O(1)       |
| back      | O(1)       |

---

# PRIORITY_QUEUE COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| push      | O(log n)   |
| pop       | O(log n)   |
| top       | O(1)       |

---

# Why Heap Operations are O(log n)

priority_queue uses:
Binary Heap.

Insertion/removal requires:
heap rearrangement.

---

# SET COMPLEXITIES

| Operation   | Complexity |
| ----------- | ---------- |
| insert      | O(log n)   |
| erase       | O(log n)   |
| find        | O(log n)   |
| lower_bound | O(log n)   |

---

# SET IMPORTANT NOTES

set uses:
Red-Black Tree.

Always sorted.

---

# MULTISET COMPLEXITIES

Same as set.

| Operation | Complexity |
| --------- | ---------- |
| insert    | O(log n)   |
| erase     | O(log n)   |
| find      | O(log n)   |

---

# IMPORTANT MULTISET TRAP

```cpp
ms.erase(x);
```

removes ALL occurrences.

---

# MAP COMPLEXITIES

| Operation   | Complexity |
| ----------- | ---------- |
| insert      | O(log n)   |
| erase       | O(log n)   |
| search      | O(log n)   |
| lower_bound | O(log n)   |

---

# MAP IMPORTANT NOTES

map stores:
sorted key-value pairs.

Internally:
Red-Black Tree.

---

# UNORDERED_SET COMPLEXITIES

| Operation | Average | Worst |
| --------- | ------- | ----- |
| insert    | O(1)    | O(n)  |
| erase     | O(1)    | O(n)  |
| search    | O(1)    | O(n)  |

---

# Why Worst Case O(n)

Hash collisions.

Many elements may land in same bucket.

---

# UNORDERED_MAP COMPLEXITIES

| Operation | Average | Worst |
| --------- | ------- | ----- |
| insert    | O(1)    | O(n)  |
| erase     | O(1)    | O(n)  |
| search    | O(1)    | O(n)  |

---

# HASHING REALITY

Average:
very fast.

Worst case:
can degrade badly.

Good hash functions matter heavily.

---

# ORDERED vs UNORDERED

| Feature     | Ordered  | Unordered  |
| ----------- | -------- | ---------- |
| Structure   | Tree     | Hash Table |
| Complexity  | O(log n) | O(1) avg   |
| Sorted      | Yes      | No         |
| lower_bound | Yes      | No         |

---

# When to Use Ordered Containers

Use when:

- sorted traversal needed
- range queries needed
- lower_bound required

---

# When to Use Unordered Containers

Use when:

- fastest lookup needed
- ordering irrelevant

---

# ITERATOR COMPLEXITIES

| Operation | vector | list | set  |
| --------- | ------ | ---- | ---- |
| ++it      | O(1)   | O(1) | O(1) |
| it + n    | O(1)   | O(n) | O(n) |

---

# Why vector Iterators are Fast

Contiguous memory allows direct jumps.

---

# ALGORITHM COMPLEXITIES

| Algorithm     | Complexity |
| ------------- | ---------- |
| sort          | O(n log n) |
| reverse       | O(n)       |
| find          | O(n)       |
| binary_search | O(log n)   |
| lower_bound   | O(log n)   |
| upper_bound   | O(log n)   |
| max_element   | O(n)       |
| min_element   | O(n)       |
| count         | O(n)       |

---

# SORT IMPORTANT NOTE

STL sort usually uses:
Introsort.

Very optimized hybrid algorithm.

---

# BINARY SEARCH IMPORTANT NOTE

Requires:
sorted data.

Very common beginner mistake.

---

# CACHE LOCALITY

Very important advanced concept.

---

# What is Cache Locality?

CPU prefers nearby memory access.

vector:
excellent cache locality.

list:
poor cache locality.

---

# Why This Matters

Even though list insertion is O(1),
vector often performs faster in practice.

Real engineering insight.

---

# MEMORY OVERHEAD

| Container     | Memory Overhead |
| ------------- | --------------- |
| vector        | Low             |
| list          | High            |
| deque         | Moderate        |
| set/map       | Higher          |
| unordered_map | Higher          |

---

# Why Trees and Hash Tables Use More Memory

Need extra structures:

- pointers
- buckets
- balancing info

---

# Most Important Interview Containers

Master these deeply first:

| Container      | Importance     |
| -------------- | -------------- |
| vector         | Extremely High |
| unordered_map  | Extremely High |
| set            | Very High      |
| priority_queue | Very High      |

---

# Common Interview Patterns

| Problem Type         | Best STL Tool     |
| -------------------- | ----------------- |
| Frequency counting   | unordered_map     |
| Ordered searching    | set/map           |
| Top K problems       | priority_queue    |
| Fast general storage | vector            |
| Duplicate removal    | set/unordered_set |

---

# Biggest Beginner Mistake

Trying to memorize everything.

Bad approach.

Focus on:

- behavior
- tradeoffs
- use cases
- complexity intuition

---

# Fast Mental Rules

# Use vector

Default choice most of the time.

---

# Use unordered_map

Need very fast lookup.

---

# Use set/map

Need ordering.

---

# Use priority_queue

Need repeated max/min access.

---

# Final Reality

Correct data structure choice often matters more than:

- syntax
- micro-optimizations
- fancy tricks

This is real problem-solving skill.
