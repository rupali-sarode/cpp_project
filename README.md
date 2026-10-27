# Student Roll Number Search (C++)

A simple **console-based program** built in plain C++ that reads student roll numbers into an array and searches for a given roll number using **linear search**.

## Features

| # | Feature | Concept used |
|---|---------|--------------|
| 1 | Read N roll numbers into an array | Arrays, `for` loop, `cin` |
| 2 | Input validation (1–100 students) | `if` condition check |
| 3 | Display all roll numbers | Array traversal |
| 4 | Search a roll number | **Linear search** |
| 5 | Report found / not found with position | Flag variable + `break` |

## How to Build & Run

```bash
g++ -std=c++17 -o student_search student_search.cpp
./student_search
```

## How It Works

1. The program asks for the number of students `n` and validates it (must be between 1 and 100, since the array size is 100).
2. It reads `n` roll numbers into the array `a[100]`.
3. It prints all the roll numbers entered.
4. It asks for a roll number to search and scans the array from left to right.
5. On the first match it prints **Student Found!** along with the **position** (1-based) and stops; otherwise it prints **Student Not Found!**.

## Sample Results (Terminal Output)

### Case 1: Roll number found

Sample input: 5 students with roll numbers `101 102 103 104 105`, searching for `103`.

```
Enter number of students: Enter roll numbers:
Student Roll Numbers: 101 102 103 104 105
Enter roll number to search: Student Found!
Position: 3
```

### Case 2: Roll number not found

Sample input: same 5 roll numbers, searching for `999`.

```
Enter number of students: Enter roll numbers:
Student Roll Numbers: 101 102 103 104 105
Enter roll number to search: Student Not Found!
```

### Case 3: Invalid number of students

Sample input: `0` students.

```
Enter number of students: Invalid number of students!
```

## Time Complexity

| Operation | Algorithm | Complexity |
|-----------|-----------|------------|
| Read & display roll numbers | Array traversal | O(n) |
| Search by roll number | Linear search | O(n) |

**Space complexity:** O(n) for the array (fixed maximum size of 100).

## Project Files

- `student_search.cpp` — complete source (single file)
- `README.md` — this documentation
