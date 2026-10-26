# Personal Expense Tracker (C++)

A simple **console-based Expense Tracker** built in plain C++ — no UI, no database, no external libraries. You record daily expenses and use basic data structures and algorithms to analyze your spending.

## Features

| # | Feature | Concept used |
|---|---------|--------------|
| 1 | Add Expense (amount, category, date, description) | `struct`, `vector`, input validation |
| 2 | View All Expenses | `vector` traversal with loops |
| 3 | Search by ID or Category | Linear search |
| 4 | Sort by Amount (low → high) | Bubble sort written manually |
| 5 | Spending Summary (total, average, highest, per-category) | Single-pass aggregation, `map` |
| 6 | Save to `expenses.txt` + auto-load on startup | `ofstream` / `ifstream` |

## Data Structures

- `struct Expense` — one transaction record (id, date, category, amount, description)
- `vector<Expense>` — stores all records
- `map<string, double>` — category-wise totals in the summary

## How to Build & Run

```bash
g++ -std=c++17 -o expense_tracker expense_tracker.cpp
./expense_tracker
```

## How It Works

The program shows a terminal menu in a loop. Choosing an option calls one function; option 7 exits. On startup, records are automatically loaded from `expenses.txt` if it exists; option 6 saves them back.

```
===== EXPENSE TRACKER =====
1. Add Expense
2. View All Expenses
3. Search Expense
4. Sort Expenses
5. Show Spending Summary
6. Save Expenses
7. Exit
Enter your choice:
```

## Sample Results

Sample data entered (4 transactions):

| Date | Category | Amount | Description |
|------|----------|--------|-------------|
| 2026-10-24 | Food | Rs.150 | Lunch |
| 2026-10-24 | Travel | Rs.80 | Auto fare |
| 2026-10-25 | Shopping | Rs.500 | Clothes |
| 2026-10-25 | Food | Rs.120 | Dinner |

### View All Expenses (option 2)

```
ID   Date        Category   Amount   Description
1    2026-10-24  Food   Rs.150   Lunch
2    2026-10-24  Travel   Rs.80   Auto fare
3    2026-10-25  Shopping   Rs.500   Clothes
4    2026-10-25  Food   Rs.120   Dinner
```

### Spending Summary (option 5)

```
===== SPENDING SUMMARY =====
Total Expenses:  Rs.850
Transactions:    4
Average Expense: Rs.212.5
Highest Expense: Rs.500
Category Breakdown:
  Food: Rs.270
  Shopping: Rs.500
  Travel: Rs.80
```

### Sort by Amount (option 4)

```
Sorted by amount (lowest to highest).
ID   Date        Category   Amount   Description
2    2026-10-24  Travel   Rs.80   Auto fare
4    2026-10-25  Food   Rs.120   Dinner
1    2026-10-24  Food   Rs.150   Lunch
3    2026-10-25  Shopping   Rs.500   Clothes
```

### Search (option 3)

```
Search by 1) ID  2) Category : 1
Enter ID: 3
Found: 2026-10-25 Shopping Rs.500
```

```
Search by 1) ID  2) Category : 2
Enter category: Food
Found: [ID 4] 2026-10-25 Rs.120 Dinner
Found: [ID 1] 2026-10-24 Rs.150 Lunch
```

### Saved File (`expenses.txt`, option 6)

```
2 2026-10-24 Travel 80 Auto fare
4 2026-10-25 Food 120 Dinner
1 2026-10-24 Food 150 Lunch
3 2026-10-25 Shopping 500 Clothes
```

## Time Complexity

| Operation | Algorithm | Complexity |
|-----------|-----------|------------|
| Find expense by ID/category | Linear search | O(n) |
| Sort by amount | Bubble sort | O(n²) |
| Find highest expense | Single traversal | O(n) |
| Category totals | Map aggregation | O(n log n)* |

*Average O(n) with a hash map (`unordered_map`); a `map` is used here for sorted category output.

## Project Files

- `expense_tracker.cpp` — complete source (single file)
- `README.md` — this documentation
