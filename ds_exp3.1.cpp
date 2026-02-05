#include <iostream>
using namespace std;

int main() {
    int a[5], temp, choice;

    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter element to search: ";
    cin >> temp;

    switch (choice) {
    case 1:
        for (int i = 0; i < 5; i++) {
        if (a[i] == temp) {
        cout << "Element found at position " << i + 1;
        return 0;
        }
    }
    cout << "Element not found";
    break;
    case 2: {
    int low = 0, high = 4, mid;
    while (low <= high) {
    mid = (low + high) / 2;
    if (a[mid] == temp) {
    cout << "Element found at position " << mid + 1;
    return 0;
    }
    else if (a[mid] < temp)
    low = mid + 1;
    else
    high = mid - 1;
    }
    cout << "Element not found";
    break;
    }
    default:
    cout << "Invalid choice";
    }
    return 0;
}
