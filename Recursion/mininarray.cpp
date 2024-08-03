#include <iostream>
#include <limits.h>
using namespace std;
int minrecrusivefunction(int arr[], int size, int index) {
    // Base case: if the index is out of bounds, return INT_MAX
    if (index >= size) {
        return INT_MAX;
    }
    // Recursive case: find the minimum in the rest of the array
    int minInRest = minrecrusivefunction(arr, size, index + 1);
    // Return the minimum of the current element and the minimum of the rest of the array
    return min(arr[index], minInRest);
}

int main() {
    int arr[9] = {45, 78, 33, 22, 553, 55, 2, 11, 332};
    int size = 9; // Corrected size to match the number of elements in the array
    int index = 0;
    // Calculate the minimum value using the recursive function
    int minans = minrecrusivefunction(arr, size, index);
    cout << minans << endl;
    return 0;
}
