# Array Extreme Swapper (C++)

This C++ program is designed to manipulate dynamic arrays by identifying their extreme values—the **maximum** and **minimum** elements—and swapping them into specific positions (the first and last elements of the array).

###  Logic & Algorithm
The program performs the following steps:
1. **Dynamic Allocation:** Initializes an array of size $n$ using the `new` operator to manage heap memory.
2. **Search:** Iterates through the array to find the values and indices of the maximum ($maxE$) and minimum ($minE$) elements.
3. **Conditional Swap:** * If the maximum is already at the start and the minimum is at the end, it performs a direct swap.
   * In other cases, it systematically moves the minimum element to the first position ($index = 0$) and the maximum element to the last position ($index = n - 1$).
4. **Memory Management:** Ensures proper cleanup by using `delete[]` to prevent memory leaks.

This project was developed as part of the programming curriculum at **Lviv Polytechnic National University**.

###  Key Features
* **Dynamic Memory:** Demonstrates the use of pointers and manual memory management in C++.
* **Edge Case Handling:** Includes specific logic for cases where extrema are already at the boundaries.
* **Extrema Verification:** Provides a clear output of the modified array along with a confirmation of the new first and last elements.

###  Technical Stack
* **Language:** C++
* **Header:** `iostream` for standard I/O operations.
* **Memory Model:** Manual heap allocation/deallocation.

###  How to Use
1. Compile the source code using a C++ compiler.
2. Enter the desired array size $n$.
3. Input each element of the array.
4. View the "Array after swap" and the confirmed extrema positions.
