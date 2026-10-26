// ===== Personal Expense Tracker (C++) =====
// Simple console app: add, view, search, sort, analyze expenses.
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>
using namespace std;

struct Expense {
    int id;
    string date;        // format: YYYY-MM-DD
    string category;
    double amount;
    string description;
};

vector<Expense> expenses;
int nextId = 1;

// ---------- Feature 6b: Load from file on startup ----------
void loadExpenses() {
    ifstream in("expenses.txt");
    Expense e;
    while (in >> e.id >> e.date >> e.category >> e.amount) {
        in.ignore();
        getline(in, e.description);
        expenses.push_back(e);
        if (e.id >= nextId) nextId = e.id + 1;
    }
}

// ---------- Feature 1: Add an expense ----------
void addExpense() {
    Expense e;
    e.id = nextId++;
    cout << "Enter date (YYYY-MM-DD): ";
    cin >> e.date;
    cout << "Enter category (Food/Travel/...): ";
    cin >> e.category;
    cout << "Enter amount: ";
    while (!(cin >> e.amount) || e.amount <= 0) {   // input validation
        cout << "Invalid amount, try again: ";
        cin.clear(); cin.ignore(1000, '\n');
    }
    cin.ignore();
    cout << "Enter description: ";
    getline(cin, e.description);
    expenses.push_back(e);
    cout << "Expense added with ID " << e.id << ".\n";
}

// ---------- Feature 2: View all expenses ----------
void viewExpenses() {
    if (expenses.empty()) { cout << "No expenses recorded.\n"; return; }
    cout << "ID   Date        Category   Amount   Description\n";
    for (const Expense& e : expenses)
        cout << e.id << "    " << e.date << "  " << e.category
             << "   Rs." << e.amount << "   " << e.description << "\n";
}

// ---------- Feature 3: Search (linear search, O(n)) ----------
void searchExpense() {
    cout << "Search by 1) ID  2) Category : ";
    int ch; cin >> ch;
    bool found = false;
    if (ch == 1) {
        int id; cout << "Enter ID: "; cin >> id;
        for (const Expense& x : expenses)          // linear search O(n)
            if (x.id == id) {
                cout << "Found: " << x.date << " " << x.category << " Rs." << x.amount << "\n";
                found = true;
            }
    } else {
        string c; cout << "Enter category: "; cin >> c;
        for (const Expense& x : expenses)          // linear search O(n)
            if (x.category == c) {
                cout << "Found: [ID " << x.id << "] " << x.date << " Rs." << x.amount << " " << x.description << "\n";
                found = true;
            }
    }
    if (!found) cout << "No match found.\n";
}

// ---------- Feature 4: Sort by amount (bubble sort, O(n^2)) ----------
void sortByAmount() {
    for (size_t i = 0; i < expenses.size(); i++)
        for (size_t j = 0; j + 1 < expenses.size() - i; j++)
            if (expenses[j].amount > expenses[j + 1].amount)
                swap(expenses[j], expenses[j + 1]);
    cout << "Sorted by amount (lowest to highest).\n";
    viewExpenses();
}

// ---------- Feature 5: Spending summary (O(n) aggregation) ----------
void summary() {
    if (expenses.empty()) { cout << "No expenses recorded.\n"; return; }
    double total = 0, highest = expenses[0].amount;
    map<string, double> byCategory;
    for (const Expense& e : expenses) {
        total += e.amount;
        if (e.amount > highest) highest = e.amount;
        byCategory[e.category] += e.amount;
    }
    cout << "===== SPENDING SUMMARY =====\n";
    cout << "Total Expenses:  Rs." << total << "\n";
    cout << "Transactions:    " << expenses.size() << "\n";
    cout << "Average Expense: Rs." << total / expenses.size() << "\n";
    cout << "Highest Expense: Rs." << highest << "\n";
    cout << "Category Breakdown:\n";
    for (const auto& p : byCategory)
        cout << "  " << p.first << ": Rs." << p.second << "\n";
}

// ---------- Feature 6: Save to file ----------
void saveExpenses() {
    ofstream out("expenses.txt");
    for (const Expense& e : expenses)
        out << e.id << " " << e.date << " " << e.category << " "
            << e.amount << " " << e.description << "\n";
    cout << "Saved " << expenses.size() << " expenses to expenses.txt\n";
}

int main() {
    loadExpenses();
    cout << "===== EXPENSE TRACKER =====\n";
    int choice;
    do {
        cout << "\n1. Add Expense\n2. View All Expenses\n3. Search Expense\n"
             << "4. Sort Expenses\n5. Show Spending Summary\n6. Save Expenses\n7. Exit\n"
             << "Enter your choice: ";
        if (!(cin >> choice)) break;
        if (choice == 1) addExpense();
        else if (choice == 2) viewExpenses();
        else if (choice == 3) searchExpense();
        else if (choice == 4) sortByAmount();
        else if (choice == 5) summary();
        else if (choice == 6) saveExpenses();
    } while (choice != 7);
    cout << "Goodbye!\n";
    return 0;
}
