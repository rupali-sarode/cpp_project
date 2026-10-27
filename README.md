# Student Roll Number Search (C++)

A simple **console-based program** built in plain C++ that reads student roll numbers into an array, sorts them, and searches for a given roll number using **binary search**.

## Features

| # | Feature | Concept used |
|---|---------|--------------|
| 1 | Read N roll numbers into an array | Arrays, `for` loop, `cin` |
| 2 | Input validation (1–100 students) | `if` condition check |
| 3 | Display all roll numbers | Array traversal |
| 4 | **Binary search** for a roll number | Sorting + binary search algorithm |
| 5 | Report found / not found with position | Flag variable + `while` loop |

## How to Build & Run

```bash
g++ -std=c++17 -o student_search student_search.cpp
./student_search
```

## How It Works

1. The program asks for the number of students `n` and validates it (must be between 1 and 100, since the array size is 100).
2. It reads `n` roll numbers into the array `a[100]`.
3. It sorts the array in ascending order using `std::sort` (from `<algorithm>`).
4. It prints the sorted roll numbers.
5. It asks for a roll number to search and performs **binary search**:
   - Repeatedly divides the search interval in half.
   - Compares the target key with the middle element.
   - If match found, prints **Student Found!** with the **1-based position** in the sorted array.
   - If the key is less than the middle element, searches the left half; otherwise searches the right half.
   - If the interval becomes empty, prints **Student Not Found!**.

## Sample Results (Terminal Output)

### Case 1: Roll number found

Sample input: 5 students with roll numbers `101 105 103 102 104`, searching for `103`.

```
Enter number of students: Enter roll numbers:
Student Roll Numbers (sorted): 101 102 103 104 105 
Enter roll number to search: Student Found!
Position: 3 (in sorted array)
```

### Case 2: Roll number not found

Sample input: same 5 roll numbers, searching for `999`.

```
Enter number of students: Enter roll numbers:
Student Roll Numbers (sorted): 101 102 103 104 105 
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
| Sort roll numbers | `std::sort` (introsort) | O(n log n) |
| Search by roll number | Binary search | O(log n) |

**Space complexity:** O(1) additional space (sorting is in-place; array is O(n)).

## Project Files

- `student_search.cpp` — complete source (single file)
- `README.md` — this documentation