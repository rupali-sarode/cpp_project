#include <iostream>
using namespace std;

void accept(int &a, int c[])
{
    cout << "Enter number of array elements: ";
    cin >> a;

    cout << "Enter array elements: ";
    for(int i = 0; i < a; i++)
        cin >> c[i];
}

void display(int m, int arr[])
{
    cout << "The array is: ";
    for(int i = 0; i < m; i++)
        cout << arr[i] << " ";
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int m, int arr[])
{
    for(int i = 0; i < m - 1; i++)
    {
        for(int j = 0; j < m - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    int n, arr[10];

    accept(n, arr);

    cout << "\nThe unsorted array is: ";
    display(n, arr);

    sort(n, arr);

    cout << "\nThe sorted array is: ";
    display(n, arr);

    return 0;
}
