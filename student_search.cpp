#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[100], n, key, i, found = 0;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of students!";
        return 0;
    }

    cout << "Enter roll numbers:" << endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array for binary search
    sort(a, a + n);

    cout << "Student Roll Numbers (sorted): ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << "\nEnter roll number to search: ";
    cin >> key;

    // Binary search
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) {
            cout << "Student Found!" << endl;
            cout << "Position: " << mid + 1 << " (in sorted array)" << endl;
            found = 1;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        cout << "Student Not Found!" << endl;
    }

    return 0;
}