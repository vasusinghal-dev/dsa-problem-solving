#include <bits/stdc++.h>
using namespace std;

/*
==========================================
STACK IN C++
==========================================

Stack follows:

LIFO
(Last In First Out)

Meaning:
last inserted element removed first.

Very important STL adapter.
*/

int main()
{
  cout << "===== STACK INTRO =====\n\n";

  /*
  ==========================================
  1. DECLARING STACK
  ==========================================
  */

  stack<int> st;

  /*
  ==========================================
  2. push()
  ==========================================

  Adds element at top.

  O(1)
  */

  st.push(10);
  st.push(20);
  st.push(30);

  /*
  Visual:

  TOP
  30
  20
  10
  */

  cout << "3 elements pushed.\n";

  /*
  ==========================================
  3. top()
  ==========================================

  Access top element.

  O(1)
  */

  cout << "\nTop element: "
       << st.top()
       << endl;

  /*
  ==========================================
  4. pop()
  ==========================================

  Removes top element.

  IMPORTANT:
  pop() does NOT return value.
  */

  st.pop();

  cout << "\nAfter pop:\n";

  cout << "Top element: "
       << st.top()
       << endl;

  /*
  Stack now:

  TOP
  20
  10
  */

  /*
  ==========================================
  5. IMPORTANT BEGINNER TRAP
  ==========================================

  INVALID:

  int x = st.pop();

  Why?

  pop() returns void.
  */

  /*
  Correct approach:
  */

  int topValue = st.top();

  st.pop();

  cout << "\nStored then popped: "
       << topValue
       << endl;

  /*
  ==========================================
  6. size()
  ==========================================
  */

  cout << "\nCurrent size: "
       << st.size()
       << endl;

  /*
  ==========================================
  7. empty()
  ==========================================
  */

  if (st.empty())
  {
    cout << "Stack is empty\n";
  }
  else
  {
    cout << "Stack is NOT empty\n";
  }

  /*
  ==========================================
  8. PUSH MULTIPLE VALUES
  ==========================================
  */

  st.push(100);
  st.push(200);
  st.push(300);

  cout << "\nTop after pushes: "
       << st.top()
       << endl;

  /*
  ==========================================
  9. PRINTING STACK
  ==========================================

  Stack does NOT support iterators.

  Must pop manually.
  */

  stack<int> temp = st;

  cout << "\nPrinting stack:\n";

  while (!temp.empty())
  {
    cout << temp.top() << " ";

    temp.pop();
  }

  cout << endl;

  /*
  Original stack unchanged
  because temp is copy.
  */

  /*
  ==========================================
  10. INTERNAL STRUCTURE
  ==========================================

  stack is container adapter.

  Default underlying container:
  deque.
  */

  /*
  ==========================================
  11. CUSTOM UNDERLYING CONTAINER
  ==========================================

  Stack using vector internally.
  */

  stack<int, vector<int>> customStack;

  customStack.push(1);
  customStack.push(2);

  cout << "\nCustom stack top: "
       << customStack.top()
       << endl;

  /*
  ==========================================
  12. STACK COMPLEXITIES
  ==========================================

  push:
  O(1)

  pop:
  O(1)

  top:
  O(1)
  */

  /*
  ==========================================
  13. WHY STACK EXISTS
  ==========================================

  Sometimes restricted access is useful.

  Stack intentionally prevents:
  - random access
  - middle insertion

  This enforces LIFO behavior.
  */

  /*
  ==========================================
  14. REAL-WORLD ANALOGY
  ==========================================

  Stack of plates.

  Last plate added:
  first removed.
  */

  /*
  ==========================================
  15. FUNCTION CALL STACK
  ==========================================

  Very important concept.

  Function calls internally use:
  stack memory.
  */

  /*
  Example:

  main()
    -> funcA()
         -> funcB()

  funcB finishes first.
  */

  /*
  ==========================================
  16. RECURSION
  ==========================================

  Recursion internally uses stack.

  Each recursive call:
  pushed onto call stack.
  */

  /*
  Too much recursion:
  stack overflow.
  */

  /*
  ==========================================
  17. COMMON INTERVIEW USES
  ==========================================

  stack heavily used in:
  - recursion
  - DFS
  - undo systems
  - browser history
  - expression evaluation
  - monotonic stack
  */

  /*
  ==========================================
  18. MONOTONIC STACK
  ==========================================

  Advanced DSA pattern.

  Used in:
  - Next Greater Element
  - Largest Rectangle Histogram
  - Stock Span Problem
  */

  /*
  ==========================================
  19. BALANCED PARENTHESES
  ==========================================

  Classic stack problem.

  Example:

  (()())

  Stack tracks opening brackets.
  */

  /*
  ==========================================
  20. REVERSE STRING USING STACK
  ==========================================
  */

  string str = "Shadow";

  stack<char> charStack;

  for (char c : str)
  {
    charStack.push(c);
  }

  cout << "\nReversed string:\n";

  while (!charStack.empty())
  {
    cout << charStack.top();

    charStack.pop();
  }

  cout << endl;

  /*
  ==========================================
  21. IMPORTANT LIMITATIONS
  ==========================================

  Stack does NOT support:
  - iterators
  - indexing
  - random access

  Restricted by design.
  */

  /*
  ==========================================
  22. COMMON BEGINNER MISTAKES
  ==========================================

  # 1:
  Expecting pop() to return value.

  # 2:
  Trying to iterate directly.

  # 3:
  Accessing top() on empty stack.

  Dangerous.
  */

  /*
  ==========================================
  23. SAFE STACK USAGE
  ==========================================

  Always check:

  empty()

  before:
  top() or pop()
  */

  /*
  ==========================================
  24. STACK vs QUEUE
  ==========================================

  Stack:
  LIFO

  Queue:
  FIFO
  */

  /*
  ==========================================
  25. IMPORTANT INTERVIEW INSIGHT
  ==========================================

  Many problems secretly ask:

  "Which access pattern is needed?"

  If answer is:
  last-in-first-out

  Think stack immediately.
  */

  /*
  ==========================================
  26. REAL ENGINEERING USES
  ==========================================

  Stacks used internally in:
  - compilers
  - interpreters
  - parsers
  - browsers
  - editors
  */

  /*
  ==========================================
  FINAL MESSAGE
  ==========================================
  */

  cout << "\n===== STACK COMPLETED =====\n";

  return 0;
}