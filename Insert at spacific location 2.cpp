#include <iostream>

int main() {
    const int maxSize = 100; // Maximum size of the array
    int arr[maxSize] = {1, 2, 3, 4, 5};
    int n = 5; // Current number of elements in the array

    // Print the original array
    std::cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int insertElement = 99; // Element to be inserted
    int position = 2; // Index where you want to insert the element

    // Check if there is enough space in the array
    if (n >= maxSize) {
        std::cout << "Array is full. Cannot insert more elements." << std::endl;
        return 1;
    }

    // Shift elements to make room for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = insertElement;

    // Increment the number of elements in the array
    n++;

    // Print the updated array
    std::cout << "Updated Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
