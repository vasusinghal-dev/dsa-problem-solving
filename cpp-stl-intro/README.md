# ==========================================

# C++ STL MASTER FOLDER

# ==========================================

Complete beginner-to-intermediate STL notes
with theory + code examples.

Focused on:

- understanding
- interview preparation
- DSA foundation
- real STL intuition

---

# LEARNING ORDER

IMPORTANT:

Do NOT randomly jump topics.

STL concepts build on each other.

Recommended order:

---

# THEORY FILES

01_stl_intro.md
<br> 02_sequence_containers.md
<br> 03_associative_containers.md
<br> 04_unordered_containers.md
<br> 05_iterators.md
<br> 06_algorithms.md
<br> 07_complexity_cheatsheet.md
<br> 08_common_interview_patterns.md

---

# CODE FILES

01_vector.cpp
<br> 02_pair.cpp
<br> 03_list.cpp
<br> 04_deque.cpp
<br> 05_stack.cpp
<br> 06_queue.cpp
<br> 07_priority_queue.cpp
<br> 08_set.cpp
<br> 09_multiset.cpp
<br> 10_unordered_set.cpp
<br> 11_map.cpp
<br> 12_unordered_map.cpp

---

# MOST IMPORTANT STL CONTAINERS

Master these deeply first:

| Container      | Importance     |
| -------------- | -------------- |
| vector         | EXTREMELY HIGH |
| unordered_map  | EXTREMELY HIGH |
| set            | VERY HIGH      |
| priority_queue | VERY HIGH      |

These alone solve huge percentage
of interview problems.

---

# MOST IMPORTANT INTERVIEW PATTERNS

| Pattern            | Main STL       |
| ------------------ | -------------- |
| Frequency Counting | unordered_map  |
| Fast Lookup        | unordered_set  |
| Ordered Search     | set/map        |
| Top K Problems     | priority_queue |
| Sliding Window     | deque          |
| BFS                | queue          |
| DFS                | stack          |

---

# BIGGEST BEGINNER MISTAKES

# 1. Memorizing blindly

Bad approach.

Understand:

- WHY container exists
- WHAT operations are fast
- WHEN to use it

---

# 2. Ignoring Complexity

Choosing wrong container can:

- slow programs massively
- cause TLE
- fail interviews

---

# 3. Overusing list

vector is usually better.

Many beginners misuse linked lists.

---

# 4. Forgetting Ordered vs Unordered

Very important distinction.

---

# QUICK CONTAINER CHOOSING GUIDE

| Need                | Best Choice    |
| ------------------- | -------------- |
| Dynamic array       | vector         |
| Fast lookup         | unordered_map  |
| Sorted lookup       | map/set        |
| LIFO                | stack          |
| FIFO                | queue          |
| Repeated max/min    | priority_queue |
| Fast front/back ops | deque          |

---

# REAL INTERVIEW REALITY

Strong candidates:

- recognize patterns quickly
- choose correct STL container
- reduce implementation complexity

Weak candidates:

- brute force everything
- misuse data structures
- overcomplicate code

---

# IMPORTANT ENGINEERING INSIGHT

Good programmers do NOT:
reinvent data structures repeatedly.

They leverage:
optimized standard libraries.

That is exactly why STL exists.
