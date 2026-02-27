#include <iostream>
using namespace std;

int main() {
    int a[5], temp, choice;

    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    cout << "\n1. Bubble Sorting";
    cout << "\n2. Selection Sorting";
    cout << "\n3. Insertion Sorting";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        // Bubble Sorting
        case 1:   
        for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
        if (a[j] > a[j + 1]) {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
            }
        }
    }
        break;
        // Selection Sorting
        case 2:   
        for (int i = 0; i < 4; i++) {
        int min = i;
        for (int j = i + 1; j < 5; j++) {
        if (a[j] < a[min])
             min = j;
        }
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
            }
        break;
         // Insertion Sorting
        case 3:  
            for (int i = 1; i < 5; i++) {
            temp = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
            a[j + 1] = temp;
    }
        break;
        default:
        cout << "Invalid choice";
        return 0;
    }
    cout << "\nSorted array:\n";
    for (int i = 0; i < 5; i++)
    cout << a[i] << " ";
    return 0;
}
