# ==========================================

# CONTAINER ADAPTERS

# ==========================================

# What are Container Adapters?

Container adapters are wrappers around
existing containers.

They restrict how data is accessed.

Meaning:
you cannot freely access elements like vector.

This restriction is intentional.

---

# Main Container Adapters

| Adapter        | Behavior               |
| -------------- | ---------------------- |
| stack          | LIFO                   |
| queue          | FIFO                   |
| priority_queue | Highest Priority First |

---

# Why Container Adapters Exist

Sometimes unrestricted access is dangerous
or unnecessary.

Example:

Stack should only allow:

- push
- pop
- top

NOT random indexing.

This enforces correct behavior.

---

# Important Concept

Container adapters are NOT standalone
data structures from scratch.

They are wrappers over other containers.

Default underlying containers:

| Adapter        | Default Container |
| -------------- | ----------------- |
| stack          | deque             |
| queue          | deque             |
| priority_queue | vector            |

---

# 1. STACK

# What is Stack?

Stack follows:

LIFO
(Last In First Out)

Meaning:
last inserted element removed first.

---

# Real Life Example

Stack of plates.

Last plate placed:
removed first.

---

# Stack Operations

| Operation | Purpose        |
| --------- | -------------- |
| push()    | Insert         |
| pop()     | Remove top     |
| top()     | Access top     |
| empty()   | Check empty    |
| size()    | Total elements |

---

# STACK EXAMPLE

```cpp
stack<int> st;

st.push(10);
st.push(20);
st.push(30);
```

Visual:

```text
TOP
30
20
10
```

---

# pop()

```cpp
st.pop();
```

Removes top element.

Now:

```text
TOP
20
10
```

---

# Important Beginner Mistake

`pop()` does NOT return value.

Wrong:

```cpp
int x = st.pop();
```

INVALID.

Correct:

```cpp
int x = st.top();
st.pop();
```

Very common interview trap.

---

# STACK COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| push      | O(1)       |
| pop       | O(1)       |
| top       | O(1)       |

---

# Real Uses of Stack

Used heavily in:

- recursion
- function calls
- undo systems
- browser history
- expression evaluation
- monotonic stack problems

---

# 2. QUEUE

# What is Queue?

Queue follows:

FIFO
(First In First Out)

Meaning:
first inserted element removed first.

---

# Real Life Example

People standing in line.

First person entering:
first person served.

---

# Queue Operations

| Operation | Purpose      |
| --------- | ------------ |
| push()    | Insert       |
| pop()     | Remove front |
| front()   | Access front |
| back()    | Access back  |
| empty()   | Check empty  |

---

# QUEUE EXAMPLE

```cpp
queue<int> q;

q.push(10);
q.push(20);
q.push(30);
```

Visual:

```text
FRONT -> 10 20 30 <- BACK
```

---

# pop()

```cpp
q.pop();
```

Removes:

```text
10
```

Now:

```text
FRONT -> 20 30 <- BACK
```

---

# QUEUE COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| push      | O(1)       |
| pop       | O(1)       |
| front     | O(1)       |

---

# Real Uses of Queue

Used heavily in:

- BFS traversal
- scheduling
- task processing
- messaging systems
- CPU management

---

# 3. PRIORITY QUEUE

# What is priority_queue?

priority_queue gives:
highest priority element first.

Default behavior:

Largest element at top.

---

# Internal Structure

priority_queue uses:

Heap

internally.

Usually:
Binary Heap.

---

# IMPORTANT REALITY

priority_queue is NOT fully sorted.

Only top element guaranteed.

Very important distinction.

---

# PRIORITY QUEUE EXAMPLE

```cpp
priority_queue<int> pq;

pq.push(10);
pq.push(30);
pq.push(20);
```

Visual:

```text
TOP -> 30
```

Largest value always on top.

---

# Operations

| Operation | Purpose    |
| --------- | ---------- |
| push()    | Insert     |
| pop()     | Remove top |
| top()     | Access top |

---

# PRIORITY QUEUE COMPLEXITIES

| Operation | Complexity |
| --------- | ---------- |
| push      | O(log n)   |
| pop       | O(log n)   |
| top       | O(1)       |

---

# Why push/pop are O(log n)

Heap must maintain heap property.

Rearrangement occurs during insertion/removal.

---

# Max Heap vs Min Heap

Default priority_queue:

MAX HEAP

Largest element first.

---

# Min Heap

Created using:

```cpp
priority_queue<
    int,
    vector<int>,
    greater<int>
> pq;
```

Now:
smallest element appears first.

---

# Real Uses of priority_queue

Used heavily in:

- Dijkstra Algorithm
- Top K Problems
- Scheduling systems
- Median problems
- Heap problems

Very important interview structure.

---

# Adapter Restrictions

Container adapters intentionally restrict access.

Example:

```cpp
st[0]
```

INVALID for stack.

This prevents misuse.

---

# Why Restriction is Good

Restricted interfaces:

- reduce bugs
- enforce correct behavior
- simplify usage

Good software design principle.

---

# Underlying Containers

Adapters internally use containers.

Examples:

| Adapter        | Common Underlying Container |
| -------------- | --------------------------- |
| stack          | deque                       |
| queue          | deque                       |
| priority_queue | vector                      |

---

# deque Importance

deque works well because:

- fast front operations
- fast back operations

Perfect for:

- stack
- queue

---

# Common Beginner Mistakes

# 1. Expecting pop() to return value

Wrong in:

- stack
- queue
- priority_queue

---

# 2. Thinking priority_queue is sorted

False.

Only top element guaranteed.

---

# 3. Using queue when stack needed

Understanding access pattern matters.

---

# Access Pattern Thinking

| Need                   | Use            |
| ---------------------- | -------------- |
| Last inserted first    | stack          |
| First inserted first   | queue          |
| Highest priority first | priority_queue |

This mindset is very important.

---

# Most Important Interview Reality

Many interview problems secretly test:

```text
Can candidate recognize correct access pattern?
```

Not syntax.
