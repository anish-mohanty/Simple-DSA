#include <iostream>
using namespace std;

int main() {
    int n, largest;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for 'n' integers
    int* arr = new int[n];

    // Check if memory allocation was successful
    if (arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit with error code
    }

    // Input elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume the first element is the largest
    largest = arr[0];

    // Traverse the array and find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest element
    cout << "The largest number is: " << largest << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
