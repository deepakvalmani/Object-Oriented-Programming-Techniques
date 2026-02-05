# C++ Object-Oriented Programming | Week-01

This repository contains a collection of C++ applications developed to demonstrate fundamental and advanced OOP concepts. Each task focuses on a specific pillar of programming, from data encapsulation to complex operator overloading.



## 🛠️ Key Technical Concepts
* **Encapsulation**: Safeguarding internal data by using `private` access modifiers.
* **Constructors**: Implementing both Default and Parameterized constructors for robust object initialization.
* **Operator Overloading**: Customizing standard C++ operators (`+`, `[]`, `==`) for user-defined classes.
* **Data Validation**: Enforcing logical constraints (e.g., month ranges or non-negative salaries) within class logic.
* **STL Integration**: Utilizing `std::vector` for dynamic memory management.

---

## 📂 Project Structure & Module Descriptions

### 1. Date Validation System (`DateHandler.cpp`)
Handles calendar dates with logic to ensure data integrity.
* **Feature**: Automatically resets invalid month inputs (outside 1-12) to a default value of 1.
* **Method**: Includes `formatdate()` for standardized string output.

### 2. Warehouse Inventory Manager (`WarehouseInventory.cpp`)
A dynamic stock-tracking system using parallel vectors.
* **Logic**: Updates existing product quantities or pushes new entries to the inventory.
* **Security**: Validates stock availability before processing orders to prevent negative inventory.

### 3. Book Grading & Review Logic (`BookReviewSystem.cpp`)
A utility to manage book metadata and user feedback.
* **Algorithm**: Calculates a real-time average rating based on total grade points and review count.

### 4. Quadratic Polynomial Math (`PolynomialMath.cpp`)
An advanced implementation of a quadratic equation $ax^2 + bx + c$.
* **Operator Overloading**: 
    * `+`: Facilitates direct addition of two polynomial objects.
    * `[]`: Provides index-based access to coefficients.
    * `==`: Enables direct comparison between two objects.


### 5. Liquid State Simulator (`GlassLiquidTracker.cpp`)
A behavioral simulation of a drinking glass.
* **State Management**: Tracks current liquid levels and features an automatic `refill()` trigger once the volume reaches zero.

### 6. Employee Payroll System (`EmployeeSalary.cpp`)
Manages professional staff records and financial adjustments.
* **Business Logic**: Includes methods for calculating annual compensation and applying percentage-based salary increments.

### 7. Library Metadata Catalog (`BookMetadata.cpp`)
Focuses on organized data storage for publication details including ISBN, Author, and Publisher strings.

---

## 🚀 Getting Started

### Prerequisites
* A C++ compiler (GCC/G++, Clang, or MSVC).

### Compilation
To compile a specific module (e.g., the Polynomial task):
```bash

g++ PolynomialMath.cpp -o PolyMath
