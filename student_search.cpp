#include <iostream>
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

    cout << "Student Roll Numbers: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << "\nEnter roll number to search: ";
    cin >> key;

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "Student Found!" << endl;
            cout << "Position: " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << "Student Not Found!" << endl;
    }

    return 0;
}
