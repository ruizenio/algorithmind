#include <iostream>
#include <vector>

using namespace std;

/**
 * Complexities:
 * 
 * * Time Complexity : O(n)
 * * Space Complexity : O(1)
 */

int commonLinearSearch(vector<int> arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int sentinelLinearSearch(vector<int> arr, int key) {
    arr.push_back(key);
    int index = 0;
    while (arr[index] != key) {
        index += 1;
    }
    arr.pop_back();
    if (index == arr.size()) {
        return -1;
    }
    return index;
}

int main() {
    vector<int> arr = {{2, 3, 4, 10, 40}};

    assert(commonLinearSearch(arr, 10) == 3);
    assert(sentinelLinearSearch(arr, 10) == 3);

    assert(commonLinearSearch(arr, 1) == -1);
    assert(sentinelLinearSearch(arr, 1) == -1);

    assert(commonLinearSearch(arr, 44) == -1);
    assert(sentinelLinearSearch(arr, 44) == -1);

    cout << "All tests passed ✅" << endl;

    return 0;
}