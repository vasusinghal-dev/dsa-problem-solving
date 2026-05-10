# ==========================================

# STL ALGORITHMS

# ==========================================

# What are STL Algorithms?

STL algorithms are prebuilt functions
that operate on containers using iterators.

They save:

- time
- code
- debugging effort

Instead of manually writing logic repeatedly,
STL provides optimized implementations.

---

# Why Algorithms Matter

Without STL algorithms:

Developers repeatedly write:

- sorting
- searching
- reversing
- counting

Problems:

- more bugs
- slower code
- wasted time

STL algorithms solve this.

---

# Important Header

Most algorithms come from:

```cpp
#include <algorithm>
```

Very important.

---

# How Algorithms Work

Algorithms use iterators.

Example:

```cpp
sort(v.begin(), v.end());
```

Meaning:

```text
Sort from begin iterator to end iterator.
```

---

# Most Important STL Algorithms

| Algorithm       | Purpose           |
| --------------- | ----------------- |
| sort()          | Sorting           |
| reverse()       | Reverse elements  |
| binary_search() | Fast searching    |
| lower_bound()   | First >= value    |
| upper_bound()   | First > value     |
| max_element()   | Largest element   |
| min_element()   | Smallest element  |
| count()         | Count occurrences |

---

# 1. sort()

# What is sort()?

sort() sorts elements.

Example:

```cpp
vector<int> v = {4,1,3,2};

sort(v.begin(), v.end());
```

Result:

```text
1 2 3 4
```

---

# Complexity of sort()

```text
O(n log n)
```

Very efficient.

---

# Internal Algorithm

C++ STL usually uses:

Introsort

Combination of:

- Quick Sort
- Heap Sort
- Insertion Sort

Very optimized.

---

# Ascending Order

Default sorting:
ascending.

---

# Descending Order

Use:

```cpp
sort(v.begin(), v.end(), greater<int>());
```

---

# Why sort() is Important

Sorting is foundation of:

- binary search
- greedy algorithms
- interval problems
- two pointer techniques

Very important DSA operation.

---

# 2. reverse()

Reverses elements.

Example:

```cpp
reverse(v.begin(), v.end());
```

---

# Complexity

```text
O(n)
```

---

# Real Uses

Used in:

- string reversal
- palindrome problems
- array manipulation

---

# 3. binary_search()

# What is binary_search()?

Checks whether element exists.

IMPORTANT:
container MUST be sorted.

---

# Example

```cpp
binary_search(v.begin(), v.end(), 5);
```

Returns:

- true
- false

---

# Complexity

```text
O(log n)
```

Very fast.

---

# Important Beginner Mistake

Using binary_search on unsorted data.

Wrong.

Binary search requires sorted order.

---

# Why Binary Search is Fast

Instead of checking all elements:
search space halves repeatedly.

---

# 4. lower_bound()

# What is lower_bound()?

Finds:
first element >= target

---

# Example

Array:

```text
1 2 4 4 5
```

Code:

```cpp
lower_bound(v.begin(), v.end(), 4);
```

Points to:
first 4.

---

# Another Example

Search:

```cpp
lower_bound(..., 3);
```

Points to: 4.

Because:
4 is first element >= 3.

---

# Complexity

```text
O(log n)
```

---

# 5. upper_bound()

Finds:
first element > target

---

# Example

Array:

```text
1 2 4 4 5
```

Code:

```cpp
upper_bound(..., 4);
```

Points to: 5.

---

# lower_bound vs upper_bound

| Function    | Finds      |
| ----------- | ---------- |
| lower_bound | first >= x |
| upper_bound | first > x  |

Very important distinction.

---

# Common Interview Use

Count occurrences:

```cpp
upper_bound - lower_bound
```

Very common pattern.

---

# 6. max_element()

Returns iterator to largest element.

Example:

```cpp
auto it = max_element(v.begin(), v.end());
```

---

# Access Actual Value

```cpp
cout << *it;
```

---

# Complexity

```text
O(n)
```

---

# 7. min_element()

Returns iterator to smallest element.

---

# Example

```cpp
auto it = min_element(v.begin(), v.end());
```

---

# 8. count()

Counts occurrences.

Example:

```cpp
count(v.begin(), v.end(), 5);
```

---

# Complexity

```text
O(n)
```

---

# 9. find()

Searches linearly.

Example:

```cpp
find(v.begin(), v.end(), 10);
```

Returns iterator.

---

# Complexity

```text
O(n)
```

---

# Important Difference

| Algorithm       | Complexity |
| --------------- | ---------- |
| find()          | O(n)       |
| binary_search() | O(log n)   |

But:
binary_search requires sorted data.

---

# 10. accumulate()

Adds elements.

Header:

```cpp
#include <numeric>
```

Example:

```cpp
accumulate(v.begin(), v.end(), 0);
```

---

# Why Initial Value Needed

Third argument:
starting value.

---

# Example

```cpp
vector<int> v = {1,2,3};

accumulate(..., 0);
```

Result:

```text
0+1+2+3 = 6
```

---

# 11. next_permutation()

Generates next lexicographical permutation.

Example:

```cpp
next_permutation(v.begin(), v.end());
```

Very important in permutation problems.

---

# 12. prev_permutation()

Generates previous permutation.

---

# 13. unique()

Removes consecutive duplicates.

IMPORTANT:
Usually used after sorting.

---

# Example

```cpp
sort(v.begin(), v.end());

auto it = unique(v.begin(), v.end());
```

---

# IMPORTANT BEGINNER MISTAKE

unique() does NOT resize vector.

Need:

```cpp
v.erase(it, v.end());
```

Very important.

---

# 14. all_of()

Checks if all elements satisfy condition.

Example:

```cpp
all_of(v.begin(), v.end(), condition);
```

---

# 15. any_of()

Checks if at least one satisfies condition.

---

# 16. none_of()

Checks if none satisfy condition.

---

# 17. for_each()

Applies function to every element.

---

# Example

```cpp
for_each(v.begin(), v.end(), func);
```

---

# Algorithms + Lambdas

Modern C++ often combines algorithms
with lambda functions.

Example:

```cpp
sort(v.begin(), v.end(),
[](int a, int b)
{
    return a > b;
});
```

Very common in interviews.

---

# Biggest STL Advantage

Algorithms are:

- optimized
- tested
- reusable

Usually better than handwritten versions.

---

# Common Interview Reality

Strong STL algorithm knowledge can:

- drastically reduce code length
- improve speed
- simplify logic

Very valuable skill.

---

# Most Important Algorithms for Interviews

Master these first:

- sort
- binary_search
- lower_bound
- upper_bound
- max_element
- reverse
- accumulate

These appear constantly.

---

# Important Engineering Insight

Good programmers don't reinvent
basic algorithms repeatedly.

They leverage tested libraries.

Very important mindset.

---

# Common Beginner Mistakes

# 1. Forgetting sorted requirement

For:

- binary_search
- lower_bound
- upper_bound

---

# 2. Forgetting algorithms return iterators

Example:

```cpp
max_element()
```

returns iterator,
NOT value.

Need:

```cpp
*it
```

---

# 3. Writing manual loops unnecessarily

STL already provides many operations.

Use them.

---

# Real Power of STL

The real power is:

```text
Containers + Iterators + Algorithms
```

working together seamlessly.
