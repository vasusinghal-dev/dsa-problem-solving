# ==========================================

# ASSOCIATIVE CONTAINERS

# ==========================================

# What are Associative Containers?

Associative containers store data:

- sorted automatically
- based on keys

Unlike sequence containers:
they do NOT preserve insertion order.

---

# Main Associative Containers

| Container | Stores          | Duplicate Allowed |
| --------- | --------------- | ----------------- |
| set       | Values          | No                |
| multiset  | Values          | Yes               |
| map       | Key-Value Pairs | Unique Keys       |
| multimap  | Key-Value Pairs | Duplicate Keys    |

---

# Internal Structure

Associative containers are usually implemented using:

Red-Black Trees

Which are:

- self-balancing Binary Search Trees

Meaning:
tree height stays balanced automatically.

---

# Why This Matters

Balanced trees guarantee:

```text
O(log n)
```

for:

- insertion
- deletion
- searching

Very important.

---

# AUTOMATIC SORTING

Associative containers always remain sorted.

Example:

```cpp
set<int> s;

s.insert(30);
s.insert(10);
s.insert(20);
```

Stored internally as:

```text
10 20 30
```

NOT insertion order.

---

# 1. SET

# What is set?

set stores:

- unique values
- in sorted order

Example:

```cpp
set<int> s;
```

---

# Why set Exists

Sometimes we need:

- fast searching
- sorted data
- no duplicates

set solves this combination.

---

# SET PROPERTIES

| Property           | Value          |
| ------------------ | -------------- |
| Sorted             | Yes            |
| Unique             | Yes            |
| Random Access      | No             |
| Internal Structure | Red-Black Tree |

---

# Duplicate Handling

Example:

```cpp
s.insert(10);
s.insert(10);
```

Second insertion ignored.

Because set only stores unique values.

---

# SET COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| insert    | O(log n)   |
| erase     | O(log n)   |
| find      | O(log n)   |

---

# Why No Random Access?

set elements stored as tree nodes,
NOT contiguous memory.

Meaning:

```cpp
s[0]
```

INVALID.

Must use iterators.

---

# Important set Features

# find()

Searches element.

Example:

```cpp
s.find(20);
```

Returns iterator.

---

# lower_bound()

Finds:
first element >= target

Very important in interviews.

---

# upper_bound()

Finds:
first element > target

---

# Real Uses of set

Used when:

- uniqueness required
- sorted traversal needed
- ordered searching required

Examples:

- rank systems
- interval problems
- scheduling problems

---

# 2. MULTISET

# What is multiset?

multiset stores:

- sorted values
- duplicates allowed

Example:

```cpp
multiset<int> ms;
```

---

# Why multiset Exists

Sometimes duplicates matter.

Example:
frequency-based problems.

set cannot store duplicates.

multiset can.

---

# MULTISET EXAMPLE

```cpp
ms.insert(10);
ms.insert(10);
```

Stored as:

```text
10 10
```

---

# MULTISET COMPLEXITIES

Same as set:

| Operation | Complexity |
| --------- | ---------- |
| insert    | O(log n)   |
| erase     | O(log n)   |
| find      | O(log n)   |

---

# VERY IMPORTANT INTERVIEW TRAP

This:

```cpp
ms.erase(10);
```

removes ALL 10s.

Many beginners expect:
remove only one.

---

# Remove Single Occurrence

Correct approach:

```cpp
ms.erase(ms.find(10));
```

Very important detail.

---

# Real Uses of multiset

Used in:

- sliding window median
- frequency tracking
- duplicate handling

---

# 3. MAP

# What is map?

map stores:
Key-Value pairs

Example:

```cpp
map<int, string> mp;
```

---

# Why map Exists

Need:

- fast searching
- key-based lookup
- sorted keys

map solves this.

---

# MAP EXAMPLE

```cpp
mp[1] = "Shadow";
mp[2] = "Alex";
```

Stored internally:

```text
1 -> Shadow
2 -> Alex
```

Keys automatically sorted.

---

# MAP PROPERTIES

| Property           | Value          |
| ------------------ | -------------- |
| Sorted Keys        | Yes            |
| Duplicate Keys     | No             |
| Internal Structure | Red-Black Tree |

---

# MAP COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| insert    | O(log n)   |
| erase     | O(log n)   |
| search    | O(log n)   |

---

# Why map is Important

map is heavily used for:

- frequency counting
- indexing
- ordered lookup
- caching systems

Very important DSA container.

---

# Accessing map Values

Example:

```cpp
mp[1]
```

Returns value for key 1.

---

# IMPORTANT MAP BEHAVIOR

This:

```cpp
mp[100]
```

creates key automatically if absent.

Many beginners don't know this.

---

# Example

```cpp
map<int, int> mp;

cout << mp[5];
```

Creates:

```text
5 -> 0
```

Automatically.

---

# find() vs []

# find()

Does NOT create key.

Safer approach.

---

# [] Operator

Creates key automatically if absent.

Useful but dangerous sometimes.

---

# Real Uses of map

Used when:

- keys must stay sorted
- lower_bound needed
- ordered traversal required

---

# 4. MULTIMAP

# What is multimap?

multimap stores:

- key-value pairs
- duplicate keys allowed

Example:

```cpp
multimap<int, string> mm;
```

---

# MULTIMAP EXAMPLE

```cpp
mm.insert({1, "A"});
mm.insert({1, "B"});
```

Valid.

Because duplicate keys allowed.

---

# MULTIMAP COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| insert    | O(log n)   |
| erase     | O(log n)   |
| search    | O(log n)   |

---

# Important Difference

multimap does NOT support:

```cpp
mm[key]
```

Because duplicate keys exist.

Must use iterators.

---

# Ordered vs Unordered

Associative containers are:
ORDERED.

Meaning:
elements remain sorted.

---

# Why Ordered Containers Matter

Ordered containers support:

- lower_bound
- upper_bound
- range queries
- sorted traversal

unordered containers cannot do these efficiently.

---

# Associative Container Comparison

| Container | Sorted | Duplicate Allowed |
| --------- | ------ | ----------------- |
| set       | Yes    | No                |
| multiset  | Yes    | Yes               |
| map       | Yes    | Unique Keys       |
| multimap  | Yes    | Duplicate Keys    |

---

# Biggest Tradeoff

Associative containers are:
slower than unordered containers.

Why?

Tree operations:

```text
O(log n)
```

instead of:

```text
O(1)
```

---

# When to Use Associative Containers

Use them when:

- sorted order required
- ordered searching needed
- lower_bound important
- range queries required

Otherwise:
unordered containers often faster.

---

# Common Interview Reality

Most candidates know syntax.

Few understand:
WHY ordered containers matter.

That distinction separates:

- memorization
- actual understanding

---

# Most Important Associative Container

For interviews:

```text
map
set
```

are used constantly.

Master these deeply first.
