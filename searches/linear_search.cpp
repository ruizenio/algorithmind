#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size = 5, arr[] = {2, 3, 4, 10, 40};

    assert(linearSearch(arr, size, 10) == 3);
    assert(linearSearch(arr, size, 1) == -1);
    assert(linearSearch(arr, size, 44) == -1);

    cout << "All tests passed ✅" << endl;

    return 0;
}