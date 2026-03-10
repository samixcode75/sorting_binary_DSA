#include <iostream>
using namespace std;

// Template function for binary search
template <class T>
int binarySearch(T arr[], int size, T key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid; // Found
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // Not found
}

// Template function to print result
template <class T>
void printIndex(int index, T key) {
    if (index != -1)
        cout << "The index of " << key << " is " << index << endl;
    else
        cout << key << " is not found in the array" << endl;
}

int main() {
    // Sorted integer array
    int arr[5] = { 22, 44, 55, 111, 333 };
    int key = 55;
    int index = binarySearch(arr, 5, key);
    printIndex(index, key);

    // Sorted float array
    float arr2[5] = { 1.1, 2.2,2.3,3.3, 5.5 };
    float key2 = 3.3;
    int floatIndex = binarySearch(arr2, 5, key2);
    printIndex(floatIndex, key2);

    return 0;
}