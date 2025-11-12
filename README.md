# Data Structures and Recursion in C++

This repository contains C++ implementations of fundamental **data structures** and **recursive algorithms**.  
Each structure is implemented from scratch to demonstrate low-level memory management, pointer manipulation, and object-oriented design principles.

## 📘 Contents

### 1. Array-Based List
A dynamic array implementation that automatically resizes when full.  
- Supports adding, inserting, removing, and accessing elements.  
- Similar behavior to C++ `std::vector`.  

**Key methods:**
- `add(T value)`
- `insert(int index, T value)`
- `remove(int index)`
- `get(int index)`
- `set(int index, T value)`
- `isEmpty()`
- `length()`

---

### 2. Singly Linked List
A simple linked list where each node points to the next one.  
Demonstrates pointer manipulation and dynamic memory usage.

**Key methods:**
- `InsertFirst(T value)`
- `InsertLast(T value)`
- `RemoveFirst()`
- `RemoveLast()`
- `print()`
- `length()`
- `DestroyList()`

---

### 3. Stack Implementations
Two different stack structures are included:

#### • Stack with Array
Implements a fixed-size stack using a static array.  
Demonstrates **LIFO (Last In, First Out)** behavior.

**Key methods:**
- `push(T value)`
- `pop()`
- `peek()`
- `isEmpty()`

#### • Stack with Linked List
A dynamically sized stack using linked list nodes.  
No overflow limit — grows as needed in memory.

**Key methods:**
- `push(T value)`
- `pop()`
- `peek()`
- `isEmpty()`

---

### 4. Recursion Functions
Includes example recursive functions (such as factorial, sum of digits, string reversal, Fibonacci, and Tower of Hanoi) to illustrate:
- Base case and recursive case design
- Stack frame behavior during recursive calls

---

## 🧠 Concepts Covered
- Dynamic memory allocation (`new`, `delete`)
- Pointers and node-based data structures
- Function templates in C++
- Stack operations (LIFO)
- Recursive problem solving

---

## 🛠️ Compilation & Usage
You can compile and run the program with:
```bash
g++ main.cpp -o main
./main
