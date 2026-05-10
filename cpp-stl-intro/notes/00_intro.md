# ==========================================

# C++ STL INTRODUCTION

# ==========================================

# What is STL?

STL stands for:

Standard Template Library

It is a powerful built-in C++ library that provides:

- Ready-made Data Structures
- Ready-made Algorithms
- Iterators for traversal

Instead of manually writing data structures from scratch,
STL allows developers to use optimized implementations directly.

---

# Why STL Exists

Before STL:

Developers had to repeatedly write:

- linked lists
- stacks
- queues
- sorting algorithms
- searching algorithms

Problems:

- repetitive work
- more bugs
- slower development
- inconsistent implementations

STL solved this by providing:

- reusable
- optimized
- tested
- standardized tools

---

# Biggest Advantage of STL

STL makes C++ extremely powerful for:

- DSA
- Competitive Programming
- Interviews
- High-performance software

This is why STL is heavily used in:

- FAANG interviews
- CP contests
- Backend systems
- Game engines

---

# Main Components of STL

STL has 3 major components:

| Component  | Purpose             |
| ---------- | ------------------- |
| Containers | Store data          |
| Algorithms | Perform operations  |
| Iterators  | Traverse containers |

---

# 1. Containers

Containers store data.

Examples:

| Container     | Purpose              |
| ------------- | -------------------- |
| vector        | Dynamic Array        |
| list          | Doubly Linked List   |
| deque         | Double-ended Queue   |
| set           | Sorted Unique Values |
| map           | Key-Value Storage    |
| unordered_map | Fast HashMap         |

Containers are the foundation of STL.

---

# 2. Algorithms

Algorithms operate on containers.

Examples:

| Algorithm       | Purpose          |
| --------------- | ---------------- |
| sort()          | Sorting          |
| reverse()       | Reverse elements |
| binary_search() | Fast searching   |
| max_element()   | Largest value    |
| min_element()   | Smallest value   |

Algorithms save huge amounts of code.

Example:

Without STL sorting:

- write sorting algorithm manually

With STL:

```cpp
sort(v.begin(), v.end());
```

One line.

Massive difference.

---

# 3. Iterators

Iterators are used to traverse containers.

Think of iterator like:

- smart pointer
- position tracker

Example:

```cpp
vector<int>::iterator it;
```

Modern C++ usually uses:

```cpp
auto it = v.begin();
```

Iterators connect:

- containers
- algorithms

Very important concept.

---

# Template in STL

STL uses Templates.

Templates allow generic programming.

Meaning:
same code works for multiple datatypes.

Example:

```cpp
vector<int>
vector<double>
vector<string>
```

Same vector implementation.
Different data types.

This is one reason STL is extremely powerful.

---

# Categories of STL Containers

STL containers are grouped into categories.

# 1. Sequence Containers

Store data based on insertion order.

Examples:

- vector
- list
- deque

---

# 2. Associative Containers

Store data in sorted order.

Usually implemented using:
Balanced Binary Search Trees.

Examples:

- set
- map
- multiset
- multimap

---

# 3. Unordered Containers

Use Hash Tables internally.

Very fast average lookup.

Examples:

- unordered_set
- unordered_map

---

# 4. Container Adapters

Restricted-access containers.

Examples:

- stack
- queue
- priority_queue

These are wrappers around other containers.

---

# Most Important STL Reality

In real interviews and DSA:

These dominate most problems:

- vector
- unordered_map
- set
- priority_queue

Master these deeply first.

Do NOT try learning every STL container immediately.

---

# Why vector is Default Choice

vector is used MOST of the time because:

- contiguous memory
- cache friendly
- fast iteration
- random access O(1)
- dynamic resizing

Most beginners underestimate vector heavily.

---

# Ordered vs Unordered

Very important distinction.

| Ordered | Unordered     |
| ------- | ------------- |
| set     | unordered_set |
| map     | unordered_map |

Ordered containers:

- sorted
- slower
- support lower_bound

Unordered containers:

- faster average lookup
- no ordering

Choosing correctly matters a lot.

---

# Time Complexity Matters

STL is NOT about memorizing syntax.

It is about:

- choosing correct data structure
- understanding tradeoffs
- optimizing operations

Example:

| Container     | Search       |
| ------------- | ------------ |
| vector        | O(n)         |
| set           | O(log n)     |
| unordered_set | O(1) average |

Wrong container choice can destroy performance.

---

# Common Beginner Mistakes

# 1. Memorizing syntax only

Bad approach.

Understand:

- WHY container exists
- WHEN to use it
- tradeoffs

---

# 2. Using set everywhere

set is useful,
but unordered_set is often faster.

---

# 3. Ignoring complexity

This causes TLE (Time Limit Exceeded)
in interviews and competitive programming.

---

# 4. Ignoring algorithms library

Many beginners manually write:

- reverse
- sorting
- searching

STL already provides optimized versions.

---

# Mental Model for STL

Think like this:

| Tool           | Purpose                    |
| -------------- | -------------------------- |
| vector         | General storage            |
| set            | Sorted unique values       |
| unordered_map  | Fast lookup                |
| priority_queue | Highest priority access    |
| deque          | Fast front/back operations |

This mindset is much more useful
than memorizing methods randomly.
