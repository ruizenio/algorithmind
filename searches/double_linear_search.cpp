#include <iostream>
#include <vector>

using namespace std;

/**
 * Complexities:
 * 
 * * Time Complexity : O(n/2)
 * * Space Complexity : O(1)
 */

int doubleLinearSearch(vector<int> arr, int key) {
    int start = 0, end = arr.size() - 1;
    while (start <= end) {
        if (arr[start] == key) {
            return start;
        } else if (arr[end] == key) {
            return end;
        } else {  
            start += 1;
            end -= 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {{2, 3, 4, 10, 40}};

    assert(doubleLinearSearch(arr, 10) == 3);
    assert(doubleLinearSearch(arr, 1) == -1);
    assert(doubleLinearSearch(arr, 44) == -1);

    cout << "All tests passed ✅" << endl;

    return 0;
}