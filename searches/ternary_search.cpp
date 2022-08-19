#include <iostream>

using namespace std;

/**
 * Complexities:
 * 
 * * Time Complexity : O(log3 n)
 * * Space Complexity : O(1)
 */

int recursiveTernarySearch(int l, int r, int key, int arr[]) {
    if (l <= r) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == key) {
            return mid1;
        }
        if (arr[mid2] == key) {
            return mid2;
        }

        if (key < arr[mid1]) {
            return recursiveTernarySearch(l, mid1 - 1, key, arr);
        }
        else if (key > arr[mid2]) {
            return recursiveTernarySearch(mid2 + 1, r, key, arr);
        }
        else {
            return recursiveTernarySearch(mid1 + 1, mid2 - 1, key, arr);
        }
    }
    return -1;
}

int iterativeTernarySearch(int l, int r, int key, int arr[]) {
    while (l <= r) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == key) {
            return mid1;
        }
        if (arr[mid2] == key) {
            return mid2;
        }

        if (key < arr[mid1]) {
            r = mid1 - 1;
        }
        else if (key > arr[mid2]) {
            l = mid2 + 1;
        }
        else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

int main() {
    int l, r, res, key;
    int arr[] = {11, 13, 14, 21, 26, 34, 56, 78};

    l = 0;
    r = 8;

    assert(recursiveTernarySearch(l, r, 14, arr) == 2);
    assert(iterativeTernarySearch(l, r, 14, arr) == 2);

    assert(recursiveTernarySearch(l, r, 8, arr) == -1);
    assert(iterativeTernarySearch(l, r, 8, arr) == -1);

    assert(recursiveTernarySearch(l, r, 72, arr) == -1);
    assert(iterativeTernarySearch(l, r, 72, arr) == -1);

    cout << "All tests passed ✅" << endl;

    return 0;
}