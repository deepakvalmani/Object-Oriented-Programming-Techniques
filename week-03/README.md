# Week 3 - Object-Oriented Programming Assignments

This repository contains all programming assignments completed during Week 3 of the Object-Oriented Programming course

## Course Information
- **Week:** 3
- **Total Programs:** 16

## Files

### 1. Memory Management & Copy Constructors

#### deep-vs-shallow-copy-constructor.cpp
Demonstrates the difference between deep and shallow copy constructors with dynamic memory allocation.
- **Concepts:** Copy Constructor, Deep Copy, Shallow Copy, Dynamic Memory Management
- **Key Learning:** Understanding when to use deep vs shallow copying

#### stack-linked-list-copy-constructor.cpp
Implements a stack using linked list with proper copy constructor for deep copying.
- **Concepts:** Stack, Linked List, Copy Constructor, Deep Copy, LIFO
- **Key Learning:** Implementing copy constructors for data structures

### 2. OOP Principles & Encapsulation

#### bank-account-security.cpp
Bank account system with security verification and access control.
- **Concepts:** Encapsulation, Private Members, Access Control, Security
- **Key Learning:** Data hiding and controlled access

#### friend-class-bank-verifier.cpp
Demonstrates friend class concept for accessing private members of bank account.
- **Concepts:** Friend Class, Encapsulation, Access Control
- **Key Learning:** When and how to use friend classes

#### static-member-device-counter.cpp
Device counter using static members to track total number of instances.
- **Concepts:** Static Members, Static Functions, Const Members, Constructor Initialization List
- **Key Learning:** Class-level data vs object-level data

### 3. Student Management Systems

#### student-score-calculator.cpp
Basic student scoring system with class implementation.
- **Concepts:** Classes, Arrays, Member Functions, Object Creation
- **Key Learning:** Basic class design and object manipulation

#### student-gpa-calculator.cpp
Complete GPA calculation system with grade computation.
- **Concepts:** Classes, Arrays, GPA Calculation, User Input, Member Functions
- **Key Learning:** Complex class design with multiple methods

### 4. Stack Implementations & Applications

#### bracket-matching-stack.cpp
Validates bracket matching in expressions using STL stack.
- **Concepts:** Stack Data Structure, Bracket Validation, STL Stack, String Processing
- **Key Learning:** Stack applications in parsing

#### browser-history-stack.cpp
Browser history management using stack for back navigation.
- **Concepts:** Stack, Linked List, Browser History, Back Navigation
- **Key Learning:** Real-world stack applications

#### text-editor-undo-redo.cpp
Text editor with undo/redo functionality using dual stacks.
- **Concepts:** Stack, Undo/Redo Mechanism, Linked List
- **Key Learning:** Managing action history

### 5. Queue Implementations & Applications

#### print-job-queue-system.cpp
Print job queue with ID-based job management and removal.
- **Concepts:** Queue, Linked List, Job Scheduling, FIFO, Tail Pointer
- **Key Learning:** Queue with custom operations

#### restaurant-order-system.cpp
Restaurant order management combining queue for orders and stack for delivery.
- **Concepts:** Queue, Stack, Order Management, FIFO and LIFO, Real-world Application
- **Key Learning:** Using multiple data structures together

### 6. Linked List Operations

#### linked-list-reverse.cpp
Linked list implementation with iterative reverse operation.
- **Concepts:** Linked List, Pointers, Reverse Algorithm, Dynamic Memory, Node Structure
- **Key Learning:** Pointer manipulation for reversing lists

#### linked-list-recursive-print.cpp
Linked list with recursive reverse printing (without modifying list).
- **Concepts:** Linked List, Recursion, Recursive Traversal, Pointers
- **Key Learning:** Recursive thinking and implementation

#### palindrome-checker-stack-queue.cpp
Palindrome detection using both stack and queue implementations.
- **Concepts:** Stack, Queue, Linked List, Palindrome Detection, Data Structures
- **Key Learning:** Combining data structures for algorithm implementation

### 7. Algorithms & Advanced Topics

#### josephus-problem-solver.cpp
Solves the Josephus problem using both simulation and recursive approaches.
- **Concepts:** Recursion, Simulation, Vectors, Josephus Problem, Algorithms
- **Key Learning:** Different approaches to same problem (iterative vs recursive)

## Concepts Covered This Week

### Object-Oriented Programming
- Classes and Objects
- Encapsulation and Data Hiding
- Constructors (Default, Parameterized, Copy)
- Destructors and Resource Management
- Static Members and Functions
- Friend Classes
- Access Specifiers (public, private)

### Data Structures
- Linked Lists (Single Linked List)
- Stacks (LIFO - Last In First Out)
- Queues (FIFO - First In First Out)
- Arrays and Vectors

### Advanced Concepts
- Dynamic Memory Allocation (new/delete)
- Deep Copy vs Shallow Copy
- Recursion and Recursive Algorithms
- Pointer Manipulation
- Memory Management and Leak Prevention

## How to Compile and Run

### Basic Compilation
```bash
g++ filename.cpp -o output_name
./output_name
```

### With C++11 Standard
```bash
g++ -std=c++11 filename.cpp -o output_name
./output_name
```

### With Warnings Enabled
```bash
g++ -Wall -std=c++11 filename.cpp -o output_name
./output_name
```

### Example
```bash
g++ deep-vs-shallow-copy-constructor.cpp -o test
./test
```

## File Organization

All files follow consistent naming convention:
- Lowercase letters
- Hyphen-separated words (kebab-case)
- Descriptive names indicating program purpose

## Code Quality

Each file includes:
- **Header comments** describing the program
- **Concept documentation** listing key topics
- **Inline comments** explaining logic
- **Clean code** following best practices
- **Proper indentation** and formatting

## Learning Progression

### Beginner Level
1. student-score-calculator.cpp
2. bank-account-security.cpp
3. static-member-device-counter.cpp

### Intermediate Level
4. deep-vs-shallow-copy-constructor.cpp
5. friend-class-bank-verifier.cpp
6. student-gpa-calculator.cpp
7. bracket-matching-stack.cpp

### Advanced Level
8. josephus-problem-solver.cpp
9. linked-list-reverse.cpp
10. stack-linked-list-copy-constructor.cpp
11. linked-list-recursive-print.cpp
12. palindrome-checker-stack-queue.cpp
13. browser-history-stack.cpp
14. print-job-queue-system.cpp
15. text-editor-undo-redo.cpp
16. restaurant-order-system.cpp

## Key Takeaways

1. **Memory Management:** Understanding when and how to allocate/deallocate memory
2. **Copy Constructors:** Knowing when deep copy is necessary
3. **Data Structures:** Implementing fundamental structures from scratch
4. **Encapsulation:** Properly hiding data and providing controlled access
5. **Recursion:** Thinking recursively for elegant solutions
6. **Real-world Applications:** Applying concepts to practical problems


## About

These assignments were completed as part of the OOP course at IBA Karachi. All programs demonstrate fundamental object-oriented programming concepts and data structure implementations in C++.

---

For questions or clarifications, please refer to course materials or contact me.
