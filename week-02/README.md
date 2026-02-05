# C++ Object-Oriented Programming | week-02

This directory contains the implementations for **week-02**, focusing on advanced class interactions, manual resource management, and operator overloading.



## 🎯 Technical Learning Objectives
* **Dynamic Memory & The Rule of Three**: Implementing custom destructors and copy constructors to handle heap-allocated data (pointers) without memory leaks or aliasing.
* **Friendship**: Utilizing `friend` classes and functions to allow specific external entities access to private members.
* **Operator Overloading**: Extending C++ syntax to handle custom object operations (e.g., adding fractions with `+` or indexing polynomials with `[]`).
* **System Simulation**: Developing objects that maintain internal state and react to thresholds (e.g., Oxygen Tank refills and Tic-Tac-Toe boards).

---

## 📂 Task Overview & Logic

### 1. Rational Number Arithmetic (`task1.cpp`)
* **Logic**: Represents mathematical fractions. It includes a GCD algorithm to ensure every fraction is stored in its simplest form.
* **Features**: Overloads `+`, `-`, and `*` operators. Supports initialization via `string` (e.g., "1/2") or `double` (e.g., 0.5).

### 2. Tic-Tac-Toe Game Engine (`task2.cpp`)
* **Logic**: Manages a 3x3 grid using a 2D integer array where `0=Empty`, `1=X`, and `2=O`.
* **Features**: Includes logic for validating moves and a `gameStatus()` function that detects wins across rows, columns, and diagonals.

### 3. Boolean Set Theory (`task3.cpp`)
* **Logic**: Uses a `vector<bool>` of size 100 to represent a set of integers from 0–99.
* **Features**: Implements high-speed `UnionOfSets` and `intersectionOfSets` using boolean logic gates.

### 4. User Session & Deep Copying (`task4.cpp`)
* **Logic**: Manages profile data and session IDs stored on the heap.
* **Features**: Implements a **Deep Copy Constructor** to ensure that when a User is copied, they get their own memory allocation rather than sharing a pointer with the original.

### 5. Friend Class Age Calculator (`task5.cpp`)
* **Logic**: A `Date` class stores birth information privately.
* **Features**: Demonstrates the `friend` keyword by allowing an external `AgeCalculator` class to access private `Year` data to compute age.

### 6. Oxygen Tank Monitoring (`task6.cpp`)
* **Logic**: Simulates a life-support system where consuming units reduces the oxygen level.
* **Features**: Automated state control—if the level drops below 100, the `refill()` method is automatically triggered.

### 7. Athlete Contract Management (`task7.cpp`)
* **Logic**: Encapsulates player names and monthly contract values.
* **Features**: Includes validation to prevent negative salaries and a method to apply percentage-based contract raises.

### 8. Artifact Registry (`task8.cpp`)
* **Logic**: A database for museum artifacts tracking IDs, origins, and discoverers.
* **Features**: Demonstrates object array management and string concatenation for generating consolidated metadata reports.

### 9. Secure Bank Transactions (`task9.cpp`)
* **Logic**: A robust banking class handling account IDs and balances.
* **Features**: Strict encapsulation ensures that `withdraw()` calls fail if the amount exceeds the available balance.

### 10. Football Team Statistics (`task10.cpp`)
* **Logic**: Tracks goals and tournament points for various teams.
* **Features**: Overloads the `+` operator to merge statistics from two teams and uses a **Friend Function** to compare performance levels.

---

## 🛠️ Compilation and Usage
Each task is a standalone C++ program. To compile and run a specific task (e.g., Task 4), use:

```bash
g++ task4.cpp -o task4
./task4