# ==========================================

# SEQUENCE CONTAINERS

# ==========================================

# What are Sequence Containers?

Sequence containers store elements
based on insertion order.

Meaning:
elements remain arranged in the order
they were inserted.

Example:

```cpp
1 2 3 4
```

Insertion order is preserved.

---

# Main Sequence Containers

| Container | Structure          |
| --------- | ------------------ |
| vector    | Dynamic Array      |
| list      | Doubly Linked List |
| deque     | Double-ended Queue |

These are the most important
linear STL containers.

---

# 1. VECTOR

# What is vector?

vector is a dynamic array.

Meaning:

- size can grow automatically
- elements stored contiguously in memory

Example:

```cpp
vector<int> v;
```

---

# Why vector Exists

Normal arrays in C++ have fixed size.

Example:

```cpp
int arr[5];
```

Problems:

- size fixed permanently
- cannot grow dynamically
- inconvenient memory management

vector solves this problem.

---

# Internal Structure of vector

vector internally behaves like:

Dynamic Contiguous Array

Memory:

```text
[1][2][3][4]
```

All elements stored together continuously.

This is VERY important.

---

# Why Contiguous Memory Matters

Contiguous memory gives:

- fast random access
- cache friendliness
- better performance

This is why vector is usually
faster than list in practice.

---

# Random Access

vector supports O(1) indexing.

Example:

```cpp
v[3]
```

Direct memory jump.

Very fast.

---

# Dynamic Resizing

When vector becomes full:

1. larger memory allocated
2. old elements copied
3. old memory deleted

This process is called:
Reallocation

---

# push_back Complexity

Usually:

```text
O(1)
```

But sometimes:

```text
O(n)
```

during reallocation.

This is called:

Amortized O(1)

Very important interview concept.

---

# Why vector is Default Choice

vector should be your default container
MOST of the time.

Because:

- fastest iteration
- cache friendly
- easy usage
- dynamic sizing
- efficient memory layout

Many beginners overuse list unnecessarily.

---

# VECTOR COMPLEXITIES

| Operation     | Complexity     |
| ------------- | -------------- |
| Access        | O(1)           |
| push_back     | O(1) amortized |
| insert middle | O(n)           |
| erase middle  | O(n)           |
| search        | O(n)           |

---

# VECTOR REALITY CHECK

vector insertion/deletion in middle is slow.

Why?

Because elements shift.

Example:

Before:

```text
1 2 3 4
```

Insert at index 1:

```text
1 X 2 3 4
```

All later elements move.

---

# 2. LIST

# What is list?

list is a Doubly Linked List.

Example:

```cpp
list<int> l;
```

---

# Internal Structure of list

Each node stores:

- data
- next pointer
- previous pointer

Visual:

```text
NULL <- [1] <-> [2] <-> [3] -> NULL
```

Elements are NOT contiguous.

---

# Why list Exists

list solves one major vector weakness:

Slow insertion/deletion in middle.

---

# list Strength

If iterator position already known:

Insertion/deletion:

```text
O(1)
```

Very fast.

---

# IMPORTANT BEGINNER MISTAKE

Many beginners think:

```text
list is faster than vector
```

Usually FALSE.

Why?

Because:

- poor cache locality
- extra pointers
- non-contiguous memory

vector often outperforms list.

---

# list Weakness

No random access.

Meaning:

```cpp
l[3]
```

INVALID.

To reach index:
must traverse node-by-node.

---

# LIST COMPLEXITIES

| Operation                   | Complexity |
| --------------------------- | ---------- |
| Access                      | O(n)       |
| Insert/Delete with iterator | O(1)       |
| Search                      | O(n)       |

---

# When to Use list

Use list when:

- frequent middle insertion/deletion
- iterator stability important

Otherwise:
prefer vector.

---

# 3. DEQUE

# What is deque?

deque means:

Double Ended Queue

Example:

```cpp
deque<int> dq;
```

---

# Why deque Exists

vector is fast at back operations:

```cpp
push_back()
```

But slow at front insertion:

```cpp
insert(v.begin(), x)
```

deque solves this.

---

# deque Features

Fast:

- push_front
- push_back
- pop_front
- pop_back

---

# Internal Structure of deque

deque is NOT fully contiguous like vector.

Internally:

- segmented memory blocks

But still supports:

- fast random access

---

# DEQUE COMPLEXITIES

| Operation     | Complexity |
| ------------- | ---------- |
| Access        | O(1)       |
| push_front    | O(1)       |
| push_back     | O(1)       |
| insert middle | O(n)       |

---

# deque vs vector

| Feature           | vector | deque          |
| ----------------- | ------ | -------------- |
| Contiguous Memory | Yes    | No             |
| push_front        | Slow   | Fast           |
| push_back         | Fast   | Fast           |
| Cache Performance | Better | Slightly Worse |

---

# Sequence Container Comparison

| Feature        | vector    | list   | deque    |
| -------------- | --------- | ------ | -------- |
| Random Access  | O(1)      | O(n)   | O(1)     |
| Front Insert   | Slow      | Fast   | Fast     |
| Back Insert    | Fast      | Fast   | Fast     |
| Cache Friendly | Excellent | Poor   | Good     |
| Memory Usage   | Low       | Higher | Moderate |

---

# Most Important Practical Advice

# Use vector by default.

Switch only when needed.

This is actual industry reality.

---

# When to Use What?

| Requirement                   | Best Choice |
| ----------------------------- | ----------- |
| General purpose               | vector      |
| Frequent middle insert/delete | list        |
| Frequent front operations     | deque       |

---

# Common Interview Trap

Question:

```text
Which is faster:
vector or list?
```

Correct answer:

```text
Depends on operation pattern.
```

Real engineering mindset.

---

# Another Important Reality

Big-O alone is NOT enough.

Cache locality matters heavily.

This is why vector often beats list
despite theoretical disadvantages.

Very important advanced concept.

---

# STL Philosophy

Each container exists because:
different operations have different costs.

No container is best at everything.

Choosing correctly is the real skill.
