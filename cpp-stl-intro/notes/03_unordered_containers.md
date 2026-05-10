# ==========================================

# UNORDERED CONTAINERS

# ==========================================

# What are Unordered Containers?

Unordered containers store data:

- without sorting
- using Hash Tables internally

Main goal:

FAST lookup.

---

# Main Unordered Containers

| Container     | Stores          |
| ------------- | --------------- |
| unordered_set | Unique values   |
| unordered_map | Key-value pairs |

---

# Why Unordered Containers Exist

Associative containers:

- keep data sorted
- use trees
- operations cost O(log n)

Sometimes sorting is unnecessary.

We only want:
FAST searching.

Unordered containers solve this.

---

# Internal Structure

Unordered containers use:

Hash Tables

---

# What is Hashing?

Hashing converts data into:
numeric index positions.

Example:

```text
"Shadow" -> hash function -> bucket index
```

This allows extremely fast lookup.

---

# Simple Mental Model

Think of unordered_map like:

Huge locker system.

Hash function decides:
which locker stores data.

---

# Buckets

Hash tables store data inside:
Buckets.

Visual:

```text
Bucket 0 -> data
Bucket 1 -> data
Bucket 2 -> empty
Bucket 3 -> data
```

---

# Why Lookup Becomes Fast

Instead of checking every element:

```text
O(n)
```

Hashing jumps directly near target location.

Average complexity:

```text
O(1)
```

Very powerful.

---

# 1. unordered_set

# What is unordered_set?

Stores:

- unique values
- unsorted

Example:

```cpp
unordered_set<int> us;
```

---

# Properties of unordered_set

| Property           | Value      |
| ------------------ | ---------- |
| Sorted             | No         |
| Duplicate Allowed  | No         |
| Internal Structure | Hash Table |
| Average Search     | O(1)       |

---

# Example

```cpp
us.insert(10);
us.insert(20);
us.insert(10);
```

Duplicate ignored.

Because values must remain unique.

---

# Important Reality

unordered_set order is unpredictable.

Example output:

```text
20 10
```

or:

```text
10 20
```

Do NOT rely on order.

---

# unordered_set Complexities

| Operation | Average | Worst Case |
| --------- | ------- | ---------- |
| insert    | O(1)    | O(n)       |
| erase     | O(1)    | O(n)       |
| find      | O(1)    | O(n)       |

---

# Why Worst Case O(n)?

Hash collisions.

---

# What is Collision?

Different values may generate:
same bucket index.

Example:

```text
10 -> bucket 2
20 -> bucket 2
```

Now multiple values share bucket.

This slows operations.

---

# Collision Handling

Most implementations use:
chaining.

Meaning:
bucket stores multiple values internally.

---

# Real-world Importance

Good hash functions reduce collisions.

Bad hashing destroys performance.

---

# When to Use unordered_set

Use when:

- uniqueness needed
- ordering NOT needed
- very fast lookup required

---

# Real Uses

- duplicate detection
- visited tracking in graphs
- fast membership testing

---

# 2. unordered_map

# What is unordered_map?

Stores:
key-value pairs

using hashing.

Example:

```cpp
unordered_map<int, string> ump;
```

---

# Why unordered_map Exists

Need:

- very fast key lookup
- frequency counting
- caching

unordered_map is perfect for this.

---

# Properties of unordered_map

| Property           | Value      |
| ------------------ | ---------- |
| Sorted             | No         |
| Duplicate Keys     | No         |
| Internal Structure | Hash Table |
| Average Search     | O(1)       |

---

# Example

```cpp
ump[1] = "Shadow";
ump[2] = "Alex";
```

---

# Frequency Counting

One of the MOST important uses.

Example:

```cpp
vector<int> arr = {1,2,2,3};

unordered_map<int, int> freq;
```

Track frequencies quickly.

Very common in interviews.

---

# Why unordered_map Dominates Interviews

Because many problems need:
FAST lookup.

Examples:

- Two Sum
- Frequency counting
- Prefix sums
- Sliding window
- Graph traversal

unordered_map appears everywhere.

---

# unordered_map Complexities

| Operation | Average | Worst Case |
| --------- | ------- | ---------- |
| insert    | O(1)    | O(n)       |
| erase     | O(1)    | O(n)       |
| search    | O(1)    | O(n)       |

---

# IMPORTANT unordered_map Behavior

This:

```cpp
ump[5]
```

creates key automatically if absent.

Exactly like map.

---

# Example

```cpp
unordered_map<int, int> mp;

cout << mp[10];
```

Creates:

```text
10 -> 0
```

automatically.

---

# find() vs []

# find()

Does NOT create key.

Safer when checking existence.

---

# [] Operator

Creates key automatically if missing.

Useful but sometimes dangerous.

---

# Ordered vs Unordered

| Feature            | map/set   | unordered_map/set |
| ------------------ | --------- | ----------------- |
| Sorted             | Yes       | No                |
| Complexity         | O(log n)  | O(1) average      |
| lower_bound        | Supported | Not Supported     |
| Internal Structure | Tree      | Hash Table        |

---

# Biggest Tradeoff

unordered containers are faster.

BUT:

- no ordering
- no lower_bound
- iteration order unpredictable

---

# When NOT to Use unordered Containers

Avoid when:

- sorted traversal needed
- lower_bound needed
- ordered ranges needed

Then use:

- map
- set

---

# Important Interview Trap

Many beginners think:

```text
unordered_map is always better
```

False.

Sometimes ordering matters more than speed.

---

# Another Important Reality

Average complexity:

```text
O(1)
```

NOT guaranteed.

Worst case:

```text
O(n)
```

due to collisions.

---

# Rehashing

When table becomes crowded:

Hash table:

- allocates larger bucket array
- rehashes elements

Similar idea to vector resizing.

---

# Why Hashing is Powerful

Hashing is foundation of:

- databases
- caches
- compilers
- distributed systems
- web backends

Very important CS concept.

---

# Common STL Interview Pattern

Question:

```text
Need fast lookup?
```

Think:

```text
unordered_map
unordered_set
```

immediately.

---

# unordered_map vs map

# Use unordered_map

When:

- speed matters
- ordering unnecessary

---

# Use map

When:

- sorting needed
- lower_bound needed
- ordered traversal needed

---

# Most Important Reality

In modern DSA:

```text
unordered_map
```

is arguably the most important STL container
after vector.

Master it deeply.
