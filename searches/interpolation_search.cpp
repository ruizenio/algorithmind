#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

/**
 * Complexities:
 *
 * * Time Complexity: O(log2(log2 n)) or O(n)
 * * Space Complexity: O(1)
 */

int interpolationSearch(vector<int> arr, int num) {
	int size = arr.size();
	int low = 0, high = size - 1;

	while (low <= high && num >= arr[low] && num <= arr[high])
	{
		if (low == high) {
			if (arr[low] == num) {
				return low;
			}
			return -1;
		}

		int mid = low + ((high - low) / (arr[high] - arr[low])) * (num - arr[low]);

		if (arr[mid] == num) {
			return mid;
		}
		if (arr[mid] < num) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

int main()
{
	vector<int> arr = {{10, 12, 13, 16, 18, 19, 20, 22}};
	int num = 20;
	int idx = 6;

	assert(interpolationSearch(arr, 8) == -1);
	assert(interpolationSearch(arr, num) == idx);
	assert(interpolationSearch(arr, 25) == -1);

	cout << "All tests passed ✅" << endl;

	return 0;
}
