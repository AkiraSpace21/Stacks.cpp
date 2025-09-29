# Stack Implementation in C++

## Aim
To implement the **Stack data structure** in C++ using two different approaches and demonstrate stack operations such as **push, pop, display, and top element retrieval**.

---

## Theory
A **stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle.  
- **Push**: Insert an element into the stack.  
- **Pop**: Remove the top element of the stack.  
- **Peek/Top**: Access the top element without removing it.  
- **isEmpty**: Check whether the stack is empty.  
- **isFull**: Check whether the stack is full (only in array-based implementation).  

Stacks are widely used in expression evaluation, function calls (recursion), and undo mechanisms.

---

## Algorithm

### **Algorithm 1: Dynamic Memory Allocation Approach**
1. Start.  
2. Create a `Stack` class with attributes: `maxSize`, `topIndex`, and a dynamically allocated array `data`.  
3. Initialize `topIndex = -1`.  
4. **Push operation**:  
   - If `topIndex < maxSize - 1`, increment `topIndex` and insert the value at `data[topIndex]`.  
   - Else, print "Stack Overflow".  
5. **Pop operation**:  
   - If `topIndex >= 0`, decrement `topIndex`.  
   - Else, print "Stack Underflow".  
6. **Top element retrieval**:  
   - If stack is not empty, return `data[topIndex]`.  
   - Else, return `-1`.  
7. Perform operations in `main()` and display results.  
8. Stop.

---

### **Algorithm 2: Static Array with Menu-Driven Approach**
1. Start.  
2. Create a `Stack` class with attributes: `arr[MAX]` and `top`.  
3. Initialize `top = -1`.  
4. **isFull()**: Returns true if `top == MAX - 1`.  
5. **isEmpty()**: Returns true if `top == -1`.  
6. **Push operation**:  
   - If `isFull()`, print "Stack Overflow".  
   - Else, increment `top` and insert the value at `arr[top]`.  
7. **Pop operation**:  
   - If `isEmpty()`, print "Stack Underflow".  
   - Else, print and decrement `arr[top]`.  
8. **Display operation**:  
   - If stack is empty, print "Stack is empty".  
   - Else, display elements from `arr[top]` to `arr[0]`.  
9. In `main()`, create a **menu-driven program** with options for Push, Pop, Display, and Exit.  
10. Perform operations until the user exits.  
11. Stop.

---

## Conclusion
The stack data structure was successfully implemented in C++ using both **dynamic memory allocation** and **static array with menu-driven operations**.  
Both implementations demonstrate fundamental stack operations and verify the **LIFO principle**.
