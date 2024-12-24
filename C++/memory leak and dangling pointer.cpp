#include <iostream>
using namespace std;

int main() {
    // Memory leak example
    int* ptr = new int;
    ptr = new int; // The original memory is lost and can no longer be freed
    delete ptr; // This deletes the second allocation, but leaves the first one unfreed

    // Dangling pointer example
    int* arr = new int[5];
    int* ptr2 = &arr[2]; // Pointer points to the third element of the array
    delete[] arr; // The memory is freed, but the pointer is left dangling

    // Attempting to dereference the dangling pointer
    cout << *ptr2 << endl; // This may cause undefined behavior

    return 0;
}

