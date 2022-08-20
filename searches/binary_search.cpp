#include <iostream>

using namespace std;

/**
 * Complexities:
 *
 * * Time Complexity : O(log n)
 * * Space Complexity : O(1)
 */

int recursiveBinarySearch(int l, int r, int arr[], int key) {
    if (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            return recursiveBinarySearch(l, mid - 1, arr, key);
        }
        return recursiveBinarySearch(mid + 1, r, arr, key);
    }
    return -1;
}

int iterativeBinarySearch(int l, int r, int arr[], int key) {
    while (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {
    int l, r, res, key;
    int arr[] = {2, 3, 4, 10, 40};

    l = 0;
    r = 5;

    assert(recursiveBinarySearch(l, r, arr, 40) == 4);
    assert(iterativeBinarySearch(l, r, arr, 40) == 4);

    assert(recursiveBinarySearch(l, r, arr, 1) == -1);
    assert(iterativeBinarySearch(l, r, arr, 1) == -1);

    assert(recursiveBinarySearch(l, r, arr, 55) == -1);
    assert(iterativeBinarySearch(l, r, arr, 55) == -1);

    cout << "All tests passed ✅" << endl;

    return 0;
}