#include <iostream>

int main() {
    const int maxSize = 10; // Maximum size of the array
    int arr[maxSize] = {2, 3, 4, 5, 6}; // Existing array with some elements
    int newElement = 1; // Element to be inserted at the beginning

    int currentSize = 5; // Current number of elements in the array

    // Shift elements to the right to make space for the new element
    for (int i = currentSize; i > 0; --i) {
        std::cout<<i<<std::endl;
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the beginning
    arr[0] = newElement;

    // Increase the current size of the array
    ++currentSize;

    // Print the updated array
    std::cout << "Updated array: ";
    for (int i = 0; i < currentSize; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
