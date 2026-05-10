# ==========================================

# COMMON STL INTERVIEW PATTERNS

# ==========================================

# Why Patterns Matter

Most interview problems are NOT new.

They are combinations of:

- known patterns
- correct data structures
- optimized thinking

Strong STL understanding helps recognize:
WHICH container solves WHICH problem fastest.

---

# Most Important Interview Reality

Interviewers usually test:

```text
Can candidate choose correct data structure quickly?
```

NOT:
memorization of STL syntax.

---

# Pattern 1:

# Frequency Counting

# Problem Type

Questions involving:

- counting occurrences
- duplicates
- majority elements
- character frequencies

---

# Best STL Choice

```cpp
unordered_map
```

---

# Why?

Need:
FAST lookup and updates.

---

# Example Problems

- Two Sum
- Majority Element
- Valid Anagram
- Top K Frequent Elements

---

# Mental Model

```text
Need counting?
Think hashmap immediately.
```

Very important.

---

# Example Logic

```cpp
unordered_map<int,int> freq;

for(auto x : arr)
{
    freq[x]++;
}
```

---

# Pattern 2:

# Fast Membership Testing

# Problem Type

Need to repeatedly check:

```text
Does value exist?
```

---

# Best STL Choices

| Need           | Container     |
| -------------- | ------------- |
| Fastest lookup | unordered_set |
| Sorted lookup  | set           |

---

# Example Problems

- Contains Duplicate
- Longest Consecutive Sequence
- Visited tracking in graphs

---

# Mental Model

```text
Need existence checking?
Think set/unordered_set.
```

---

# Pattern 3:

# Ordered Searching

# Problem Type

Need:

- sorted traversal
- nearest values
- lower_bound
- upper_bound

---

# Best STL Choice

```cpp
set
map
```

---

# Why?

Tree structure maintains:
automatic sorting.

---

# Example Problems

- Scheduling systems
- Interval merging
- Rank tracking
- Ordered leaderboards

---

# Important Insight

unordered containers:
cannot efficiently support:

- lower_bound
- ordered traversal

---

# Pattern 4:

# Top K Problems

# Problem Type

Need:

- largest K elements
- smallest K elements
- repeated max/min access

---

# Best STL Choice

```cpp
priority_queue
```

---

# Why?

Heap structure gives:
fast top element access.

---

# Example Problems

- K Largest Elements
- Merge K Sorted Lists
- Dijkstra Algorithm
- Median Finder

---

# Mental Model

```text
Repeated max/min extraction?
Think heap immediately.
```

---

# Pattern 5:

# Sliding Window

# Problem Type

Continuous subarray/substring processing.

---

# Common STL Choices

| Need                    | Container     |
| ----------------------- | ------------- |
| Normal window           | vector        |
| Double-ended operations | deque         |
| Frequency tracking      | unordered_map |

---

# Example Problems

- Longest Substring Without Repeating Characters
- Maximum Sum Subarray
- Sliding Window Maximum

---

# Important deque Usage

Sliding Window Maximum commonly uses:

```cpp
deque
```

because:
front/back operations are O(1).

---

# Pattern 6:

# Monotonic Stack

# Problem Type

Need:
nearest greater/smaller element.

---

# Best STL Choice

```cpp
stack
```

---

# Example Problems

- Next Greater Element
- Largest Rectangle in Histogram
- Stock Span Problem

---

# Important Insight

Stack maintains:
processing order efficiently.

---

# Pattern 7:

# BFS Traversal

# Problem Type

Level-by-level traversal.

---

# Best STL Choice

```cpp
queue
```

---

# Why?

BFS requires:
FIFO behavior.

---

# Example Problems

- Graph BFS
- Tree Level Order Traversal
- Shortest Path in Unweighted Graph

---

# Pattern 8:

# DFS / Recursion

# Problem Type

Depth-first exploration.

---

# Common STL Choices

| Approach      | STL        |
| ------------- | ---------- |
| Recursive DFS | Call Stack |
| Iterative DFS | stack      |

---

# Important Insight

Recursion internally uses:
stack memory.

---

# Pattern 9:

# Sorting-Based Problems

# Problem Type

Optimization after sorting.

---

# Best STL Tool

```cpp
sort()
```

---

# Why Sorting Helps

Sorting often simplifies:

- searching
- duplicate handling
- greedy logic
- two-pointer techniques

---

# Example Problems

- Merge Intervals
- Two Sum Sorted
- Three Sum
- Activity Selection

---

# Pattern 10:

# Binary Search Problems

# Problem Type

Searching answer space efficiently.

---

# STL Tools

| Tool          | Purpose    |
| ------------- | ---------- |
| binary_search | Existence  |
| lower_bound   | First >= x |
| upper_bound   | First > x  |

---

# Important Requirement

Data MUST be sorted.

Very common beginner mistake.

---

# Pattern 11:

# Duplicate Removal

# Best STL Choices

| Need                   | STL           |
| ---------------------- | ------------- |
| Fast duplicate removal | unordered_set |
| Sorted unique values   | set           |

---

# Example

```cpp
set<int> s(arr.begin(), arr.end());
```

Automatically removes duplicates.

---

# Pattern 12:

# Two Pointer Technique

# Common STL Choice

```cpp
vector
```

---

# Why vector?

Need:

- indexing
- contiguous memory
- random access

---

# Example Problems

- Pair Sum
- Container With Most Water
- Remove Duplicates

---

# Pattern 13:

# Interval Problems

# Common STL Choices

| Need              | STL            |
| ----------------- | -------------- |
| Sorting intervals | vector<pair>   |
| Active intervals  | set            |
| Priority ordering | priority_queue |

---

# Very Common Interview Pattern

```cpp
vector<pair<int,int>>
```

Extremely important structure.

---

# Pattern 14:

# Graph Problems

# Common STL Choices

| Component        | STL                  |
| ---------------- | -------------------- |
| Adjacency List   | vector<vector<int>>  |
| BFS              | queue                |
| DFS              | stack/recursion      |
| Dijkstra         | priority_queue       |
| Visited Tracking | unordered_set/vector |

---

# Pattern 15:

# Frequency + Ordering Combined

# Common STL Choice

```cpp
map
```

---

# Why?

Need:

- counting
- sorted keys simultaneously

---

# Important Interview Reality

Many problems are:
multiple patterns combined.

Example:

```text
Sliding Window + HashMap
```

Very common.

---

# Fast STL Recognition Guide

| Problem Signal   | Think          |
| ---------------- | -------------- |
| Fast lookup      | unordered_map  |
| Sorted lookup    | set/map        |
| Repeated max/min | priority_queue |
| LIFO behavior    | stack          |
| FIFO behavior    | queue          |
| Dynamic array    | vector         |

---

# Biggest Beginner Mistake

Trying random containers without reasoning.

Bad approach.

Always ask:

```text
What operation must be fastest?
```

That question usually reveals correct structure.

---

# Most Important DSA Skill

Real DSA skill is:

```text
Pattern Recognition
+
Correct Data Structure Choice
```

NOT:
memorizing solutions blindly.

---

# Real Interview Insight

Strong candidates often:

- identify pattern quickly
- choose STL intelligently
- reduce implementation complexity massively

Weak candidates:

- brute force everything
- misuse containers
- overcomplicate logic

---

# Final Advice

Master deeply first:

- vector
- unordered_map
- set
- priority_queue
- sort()

These alone solve huge percentage
of interview problems.
