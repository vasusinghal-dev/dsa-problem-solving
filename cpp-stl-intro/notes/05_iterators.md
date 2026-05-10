# ==========================================

# ITERATORS IN STL

# ==========================================

# What are Iterators?

Iterators are objects used to traverse containers.

Think of iterator like:

- smart pointer
- position tracker

They point to elements inside containers.

---

# Why Iterators Exist

Different containers store data differently.

Examples:

- vector -> contiguous memory
- list -> linked nodes
- set -> tree nodes

Iterators provide:
UNIFIED traversal.

Meaning:
same traversal style works across containers.

Very important STL design idea.

---

# Basic Iterator Syntax

Example:

```cpp
vector<int>::iterator it;
```

Meaning:

```text
iterator for vector<int>
```

---

# Modern C++ Shortcut

Usually written as:

```cpp
auto it = v.begin();
```

Much cleaner.

Most modern C++ code uses auto.

---

# begin()

Returns iterator to:
FIRST element.

Example:

```cpp
auto it = v.begin();
```

Visual:

```text
[10][20][30]
 ^
 it
```

---

# end()

Returns iterator to:
position AFTER last element.

Very important.

Example:

```text
[10][20][30]
             ^
            end()
```

end() does NOT point to actual element.

---

# Why end() Works Like This

This design simplifies loops and algorithms.

---

# Dereferencing Iterator

Use:

```cpp
*it
```

to access value.

Example:

```cpp
cout << *it;
```

---

# Example

```cpp
vector<int> v = {10,20,30};

auto it = v.begin();

cout << *it;
```

Output:

```text
10
```

---

# Iterator Movement

Use:

- ++

---

Example:

```cpp
it++;
```

Moves iterator forward.

---

# Visual Example

Initial:

```text
[10][20][30]
 ^
 it
```

After:

```cpp
it++;
```

Now:

```text
[10][20][30]
     ^
     it
```

---

# Full Traversal Example

```cpp
for(auto it = v.begin(); it != v.end(); it++)
{
    cout << *it << " ";
}
```

---

# Why `it != v.end()`

Because:
end() is position AFTER last element.

Loop stops before invalid access.

---

# Range-Based Loop

Modern C++ provides:

```cpp
for(auto x : v)
{
    cout << x;
}
```

Cleaner syntax.

---

# When Range Loop is Better

Use when:

- only values needed
- no iterator manipulation required

---

# When Iterators are Needed

Use iterators when:

- using STL algorithms
- erasing elements
- advanced traversal needed
- iterator arithmetic required

---

# Iterator Arithmetic

Works in random-access containers.

Example:

```cpp
it + 2
```

Valid for:

- vector
- deque

INVALID for:

- list
- set

---

# Why list Iterators Behave Differently

list uses linked nodes.

Cannot jump memory directly.

Must move node-by-node.

---

# Iterator Categories

| Iterator Type | Containers     |
| ------------- | -------------- |
| Random Access | vector, deque  |
| Bidirectional | list, set, map |
| Forward       | forward_list   |

---

# Random Access Iterator

Supports:

- +, -
- indexing-like jumps

Very powerful.

---

# Bidirectional Iterator

Supports:

- ++

---

But NOT:

- "+"
- random jumps

---

# reverse_iterator

Used for reverse traversal.

Example:

```cpp
auto it = v.rbegin();
```

---

# rbegin() and rend()

| Function | Meaning       |
| -------- | ------------- |
| rbegin() | Reverse begin |
| rend()   | Reverse end   |

---

# Reverse Traversal Example

```cpp
for(auto it = v.rbegin(); it != v.rend(); it++)
{
    cout << *it;
}
```

---

# const_iterator

Prevents modification through iterator.

Example:

```cpp
vector<int>::const_iterator it;
```

Useful for:
safe traversal.

---

# auto Keyword

Modern C++ heavily uses:

```cpp
auto
```

Why?

Iterator types can become huge.

Example:

```cpp
unordered_map<int, vector<pair<int,int>>>::iterator it;
```

Painful.

Instead:

```cpp
auto it = mp.begin();
```

Much cleaner.

---

# Iterators and Algorithms

Algorithms use iterators.

Example:

```cpp
sort(v.begin(), v.end());
```

Meaning:

```text
sort from beginning to ending position
```

This is why iterators are central to STL.

---

# Iterator Invalidations

Very important advanced concept.

Some operations invalidate iterators.

Example:

```cpp
vector push_back during reallocation
```

may invalidate old iterators.

---

# Container Iterator Stability

| Container | Iterator Stability   |
| --------- | -------------------- |
| vector    | Can invalidate       |
| deque     | Partial invalidation |
| list      | Stable               |
| set/map   | Mostly stable        |

---

# Dangerous Beginner Mistake

Using invalidated iterator.

Example:

```cpp
auto it = v.begin();

v.push_back(100);

cout << *it;
```

Potentially dangerous after reallocation.

---

# erase() Behavior

erase() usually returns:
next valid iterator.

Important during deletion loops.

---

# Safe Erase Pattern

```cpp
it = v.erase(it);
```

Very important interview pattern.

---

# Iterator vs Pointer

Iterators behave similarly to pointers:

| Pointer | Iterator |
| ------- | -------- |
| \*ptr   | \*it     |
| ptr++   | it++     |

But iterators are more abstract and safer.

---

# Why Iterators Matter So Much

Iterators connect:

- containers
- algorithms

Without iterators:
STL flexibility would collapse.

---

# Real-world Importance

Iterators are used heavily in:

- algorithms
- generic programming
- competitive programming
- advanced STL usage

---

# Most Important Beginner Advice

Do NOT memorize iterator syntax blindly.

Understand:

- what position iterator represents
- movement behavior
- valid operations

---

# Common Interview Trap

Question:

```text
Why can't list support random access iterator?
```

Correct answer:

```text
Because linked list nodes are not contiguous.
```

Very important understanding.
