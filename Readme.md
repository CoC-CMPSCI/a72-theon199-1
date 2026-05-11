[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=23882952&assignment_repo_type=AssignmentRepo)
# A72: Accessing Array Elements (swapfold / sumfold / equalfold)

**Code your program here:** [https://classroom.github.com/a/TrPJC6bM](https://classroom.github.com/a/TrPJC6bM)

---

## 3. Elaborate on Errors and Troubleshooting

- Programming algorithms used
- Errors encountered and troubleshooting steps taken
- Error experiences and lessons learned (how you identified and fixed each error)

---

## [Programming Assignment Guide]

**Read the Assignment Directions below, then complete the following main.hpp in your cloned Repository.**

In this assignment, you will complete three array-processing functions in main.hpp. **Do NOT edit main.cpp** — it already contains the driver that calls each function.

Full assignment instructions are embedded below. Read them carefully before coding.

Implementation Hint

| Function 1: void swapfold(int number[], int last) |
|---|
| • Reverse the array in place. Element at index i swaps with element at index last - i - 1.<br>• For odd-length arrays, the middle element stays put.<br>• Example: [1,2,3,4,5] → [5,4,3,2,1] |

Implementation Hint

| Function 2: void sumfold(int number[], int last) |
|---|
| • For the first half of the array, set number[i] = number[i] + number[last - i - 1].<br>• The number of folded values is ceil(last / 2.0).<br>• For odd-length arrays, the middle element is added to itself (counted twice).<br>• Example: [1,2,3,4,5,6] → first 3 are [7,7,7] (1+6, 2+5, 3+4) |

Implementation Hint

| Function 3: void equalfold(int number[], int equal[], int last) |
|---|
| • For the first half, set equal[i] = 1 if number[i] == number[last - i - 1], else 0.<br>• The original number[] array is not modified.<br>• Example: palindrome [1,2,3,2,1] → equal = [1,1] |

**To compile and run:**

```cpp
g++ main.cpp
./a.out
```

**To run tests:**

```cpp
make test
make test ARGS="[T1]"
```

**How to compile and run your program:**

- To compile your program in VS Code, open the new terminal (ctrl-`) and type: g++ main.cpp -o main
- To run your program: ./main

**How to test your program:**

- To run all tests: make test
- To run a specific test (e.g., T1): make test ARGS="[T1]"

**[Expected Output]**

*Your output should contain the correct values. The exact wording or formatting may differ — tests check values only, not the entire output.*

Example run (random input from makearray):

```cpp
    8    8    9    1    3    4    8    7    5    1    9    8    7    4    4    8
    8    4    4    7    8    9    1    5    7    8    4    3    1    9    8    8
   16   12   13    8   11   13    9   12
    8    8    9    1    3    4    8    7    5    1    9    8    7    4    4    8
    1    0    0    0    0    0    0    0
```

**How to pass the test:**

Test items: **compile, run, T1, T2, T3, T4**

| Test | Input | Expected Values (checked by test) | Points |
|---|---|---|---|
| T1 | swapfold([1..10], 10) and swapfold([7,8,9,4,1], 5) | [0,9,8,7,...,1] and [1,4,9,8,7] | 20 |
| T2 | sumfold([1,2,3,4,5,6], 6) and sumfold([1,2,3,4,5], 5) | first 3 = [7,7,7] and [6,6,6] | 20 |
| T3 | equalfold([1,2,3,2,1], 5) and equalfold([3,5,7,5,2], 5) | [1,1] and [0,1] | 20 |
| T4 | swapfold-twice and sumfold invariant on makearray output | round-trip preserves array; sum invariant holds | 20 |

To test your program, type the command in your terminal: make test

**Make sure that your program passes the test and there is ✓ in your GitHub Classroom Repository.**

