# C++ Object-Oriented Programming | week-03

This directory contains the implementations for **week-03**, focusing on data structures, memory management, copy semantics, and real-world system simulations.

## 🎯 Technical Learning Objectives

* **Deep vs Shallow Copy**: Understanding the critical difference between shallow and deep copying when managing dynamically allocated memory.
* **Custom Data Structures**: Building linked lists, stacks, and queues from scratch without relying on STL containers.
* **Copy Constructors**: Implementing proper copy constructors to prevent memory aliasing and ensure independent object copies.
* **Friend Classes**: Using `friend` keyword to grant specific classes controlled access to private members.
* **Static Members**: Managing class-level data that is shared across all instances of a class.
* **Recursion**: Applying recursive algorithms for list traversal and classic computer science problems.

---

## 📂 Task Overview & Logic

### 1. Deep vs Shallow Copy Constructor (`deep-vs-shallow-copy-constructor.cpp`)
* **Logic**: Demonstrates conditional copying based on mode ("battle" vs "practice"). In battle mode, creates independent memory copies; in practice mode, shares memory references.
* **Features**: Custom copy constructor that allocates new memory for deep copies and implements proper destructor to prevent double-deletion.

### 2. Student Score Calculator (`student-score-calculator.cpp`)
* **Logic**: Manages student records with 5 test scores per student using arrays within a class structure.
* **Features**: Calculates total scores, identifies top performers, and displays formatted student information.

### 3. Bank Account Security (`bank-account-security.cpp`)
* **Logic**: Implements secure account management with PIN verification before displaying sensitive information.
* **Features**: Demonstrates encapsulation by keeping account details private and requiring security verification for access.

### 4. Static Member Device Counter (`static-member-device-counter.cpp`)
* **Logic**: Tracks the total number of device instances created using a static counter that persists across all objects.
* **Features**: Uses `const` member initialization list for serial numbers and static display function to show device count.

### 5. Friend Class Bank Verifier (`friend-class-bank-verifier.cpp`)
* **Logic**: Separates verification logic into a dedicated `Verifier` class that has privileged access to `Account` internals.
* **Features**: Demonstrates `friend` class declaration allowing external class to call private methods of another class.

### 6. Student GPA Calculator (`student-gpa-calculator.cpp`)
* **Logic**: Complete grade management system that converts numerical marks to grade points and calculates GPA.
* **Features**: Multi-subject grade calculation with automatic GPA computation and formatted output display.

### 7. Bracket Matching Stack (`bracket-matching-stack.cpp`)
* **Logic**: Validates parentheses, braces, and brackets in expressions using STL stack for matching pairs.
* **Features**: Implements bracket validation algorithm checking for properly nested and matched delimiters.

### 8. Josephus Problem Solver (`josephus-problem-solver.cpp`)
* **Logic**: Solves the classic Josephus elimination problem using both simulation (vector-based) and mathematical recursion.
* **Features**: Dual approach comparing iterative elimination simulation with O(n) recursive formula for finding survivor position.

### 9. Linked List Reverse (`linked-list-reverse.cpp`)
* **Logic**: Implements singly linked list with iterative reversal algorithm using three pointers.
* **Features**: Custom destructor ensures proper memory cleanup of all nodes in the chain.

### 10. Stack with Copy Constructor (`stack-linked-list-copy-constructor.cpp`)
* **Logic**: LIFO stack built on linked list foundation with deep copy constructor for independent duplication.
* **Features**: Demonstrates proper deep copying of dynamic data structures maintaining independence between original and copy.

### 11. Recursive List Print (`linked-list-recursive-print.cpp`)
* **Logic**: Prints linked list in reverse order using recursive traversal without modifying the list structure.
* **Features**: Private recursive helper function demonstrates call stack behavior for backward traversal.

### 12. Palindrome Checker (`palindrome-checker-stack-queue.cpp`)
* **Logic**: Uses both stack (LIFO) and queue (FIFO) to compare forward and backward character sequences.
* **Features**: Implements custom stack and queue classes from scratch using linked lists to detect palindromes.

### 13. Browser History Stack (`browser-history-stack.cpp`)
* **Logic**: Simulates browser back-button functionality using a stack to maintain navigation history.
* **Features**: Push for new pages, pop for going back, peek for current page display.

### 14. Print Job Queue System (`print-job-queue-system.cpp`)
* **Logic**: FIFO queue with additional ID-based removal capability for managing print jobs.
* **Features**: Maintains both head and tail pointers for O(1) enqueue/dequeue operations plus custom removal by job ID.

### 15. Text Editor Undo/Redo (`text-editor-undo-redo.cpp`)
* **Logic**: Dual-stack architecture where undo stack stores actions and redo stack stores reversed actions.
* **Features**: Implements complete undo/redo mechanism with stack clearing on new action to maintain consistency.

### 16. Restaurant Order System (`restaurant-order-system.cpp`)
* **Logic**: Kitchen uses queue (FIFO) for order processing; delivery uses stack (LIFO) for most-recent-first delivery.
* **Features**: Combines queue and stack data structures to model realistic restaurant workflow.

---

## 🛠️ Compilation and Usage

Each task is a standalone C++ program. To compile and run a specific task (e.g., Task 1), use:
```bash
g++ deep-vs-shallow-copy-constructor.cpp -o task1
./task1
```

For C++11 features (recommended):
```bash
g++ -std=c++11 deep-vs-shallow-copy-constructor.cpp -o task1
./task1
```

With warnings enabled for better code quality:
```bash
g++ -Wall -std=c++11 deep-vs-shallow-copy-constructor.cpp -o task1
./task1
```

---

## 📚 Key Concepts Demonstrated

### Memory Management
- Dynamic memory allocation with `new` and `delete`
- Preventing memory leaks through proper destructors
- Understanding pointer ownership and lifecycle

### Copy Semantics
- Shallow copy vs deep copy implications
- Implementing copy constructors for classes with pointers
- Rule of Three: Destructor, Copy Constructor, Copy Assignment

### Data Structures
- Linked Lists (singly linked)
- Stacks (LIFO - Last In First Out)
- Queues (FIFO - First In First Out)
- Custom implementations without STL

### Object-Oriented Design
- Encapsulation and data hiding
- Friend classes and functions
- Static members for class-level data
- Constructor initialization lists
- Const correctness

### Algorithms
- Recursive list traversal
- Iterative list reversal
- Josephus problem solution
- Palindrome detection
- Bracket matching validation

---

## 🎓 Learning Outcomes

By completing these assignments, students will:

1. **Master memory management** in C++ including proper resource cleanup
2. **Understand copy semantics** and when deep copying is essential
3. **Implement fundamental data structures** from scratch
4. **Apply recursion** for elegant algorithmic solutions
5. **Design object-oriented systems** with proper encapsulation
6. **Recognize real-world applications** of abstract data structures

---

## 📝 Notes

- All programs include comprehensive header comments explaining purpose and concepts
- Each file follows consistent naming convention (kebab-case)
- Code demonstrates professional C++ practices including const correctness
- Programs are designed to be educational while remaining practical


