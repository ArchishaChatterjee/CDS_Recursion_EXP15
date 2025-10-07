# Experiment 15 : Recursion in C++

---

## Introduction

Recursion is a programming technique in which a function calls itself directly or indirectly to solve a problem. It is particularly useful for problems that can be broken down into smaller, similar subproblems. Recursion allows for elegant and concise solutions, especially for mathematical computations, data structure manipulations, and algorithmic tasks such as searching and sorting. Understanding recursion is fundamental in computer science, as it is closely linked with concepts like divide-and-conquer strategies, backtracking, and tree traversal.

This experiment focuses on applying recursion to basic mathematical and programming problems. It demonstrates how recursive logic can simplify tasks that might otherwise require complex iterative solutions. The problems chosen illustrate fundamental recursion concepts, including base cases, recursive calls, and problem decomposition.

---

## Tools and Requirements  
- **Programming Language:** C++  
- **Compiler:** Turbo C++, g++, or MinGW  
- **IDE/Editor:** Visual Studio Code / Dev C++ / Code::Blocks  
- **Operating System:** Windows / Linux / macOS  
- **Hardware:** Standard desktop or laptop computer  

---


## Theory

A recursive function generally consists of two main components:  

1. **Base Case:** The condition under which the recursion stops. Without a base case, a recursive function would continue indefinitely, leading to a stack overflow error.  
2. **Recursive Case:** The portion of the function where it calls itself to solve a smaller instance of the problem. Each recursive call should make progress toward the base case.

Recursion is particularly useful for tasks where the solution depends on smaller instances of the same problem. It is also closely tied with stack memory, as each recursive call is stored on the system stack until it returns a value.

Some common examples of recursion include computing factorials, summing a series of numbers, reversing numbers or strings, and traversing hierarchical structures like trees.

---

## Algorithm

The general algorithm for a recursive function is as follows:  

1. Define the base case for the recursion to terminate.  
2. Define the recursive case that reduces the problem size.  
3. Call the function recursively until the base case is reached.  
4. Combine the results of recursive calls to produce the final output.  

For each of the problems in this experiment, these steps are implemented to achieve the desired results.

---

## Experiments and Functions

### A. Addition of Numbers Until n

**Problem:** Calculate the sum of first n natural numbers using recursion.  

**Algorithm:**
1. Base Case: If n equals 1, return 1.  
2. Recursive Case: Sum(n) = n + Sum(n-1).  
3. Call Sum(n) for the given value of n.  

---

### B. Factorial

**Problem:** Compute the factorial of a given number using recursion.  

**Algorithm:**
1. Start with the input number `n`.  
2. Check if `n` is 0 or 1. If yes, return 1 as the factorial (Base Case).  
3. Otherwise, multiply `n` by the factorial of `n-1` (Recursive Case).  
4. Continue the recursive calls until the base case is reached.  
5. Return the final result, which is `n!`.  


---

### C. Reversing a Number

**Problem:** Reverse a given number using recursion.  

**Algorithm:**
1. Start with the input number `n` and initialize `rev = 0`.  
2. If `n` is 0, return `rev` (Base Case).  
3. Otherwise, update `rev = rev * 10 + (n % 10)`.  
4. Call the function recursively with `n / 10` and updated `rev`.  
5. Repeat until the number is completely processed.  
6. Return the reversed number.  

---

### D. Reversing a String

**Problem:** Reverse a given string using recursion.  

**Algorithm:**
1. Start with the input string `str`.  
2. Check if the string length is 0 or 1. If yes, return the string as it is (Base Case).  
3. Otherwise, take the last character of the string.  
4. Call the function recursively on the substring excluding the last character.  
5. Concatenate the last character with the result of the recursive call.  
6. Return the final reversed string.  


--- 
## Conclusion

The Recursion experiment demonstrated how recursive functions can be used to solve problems that can be broken down into smaller, similar subproblems. Through the implementation of addition of numbers until n, factorial calculation, number reversal, and string reversal, the experiment highlighted key concepts of recursion, including base cases and recursive calls. 

Recursive solutions provide a clear and elegant approach to problem-solving compared to iterative methods, although care must be taken to avoid excessive stack usage and potential stack overflow for large inputs. The experiment also illustrated how recursion interacts with memory through the call stack and how operations like string manipulation can affect time complexity. 

Overall, recursion is a powerful programming technique that forms the foundation for advanced concepts such as divide-and-conquer algorithms, backtracking, and tree or graph traversals. Mastery of recursion enhances problem-solving skills and provides a deeper understanding of algorithmic thinking in computer science.
