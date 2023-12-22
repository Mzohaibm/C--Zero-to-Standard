// Linear search, also known as sequential search, is a simple search algorithm where each element in a list is checked one by one until the desired element is found or the end of the list is reached. It works for both ordered and unordered lists. In the worst-case scenario, where the element is not present or is the last element, it has a time complexity of O(n), where n is the number of elements in the list.

#include <iostream>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
