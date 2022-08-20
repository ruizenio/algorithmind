#include <iostream>
#include <vector>

using namespace std;

/**
 * Complexities:
 * 
 * * Time Complexity : O(n)
 * * Space Complexity : O(1)
 */

int linearSearch(vector<int> arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr;

    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(10);
    arr.push_back(40);

    assert(linearSearch(arr, 10) == 3);
    assert(linearSearch(arr, 1) == -1);
    assert(linearSearch(arr, 44) == -1);

    cout << "All tests passed ✅" << endl;

    return 0;
}