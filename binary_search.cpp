#include <iostream>

using namespace std;

int binary_search(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid = (left + right) / 2;

    if (arr[mid] == target) return mid;
    else if (arr[mid] < target) left = mid + 1;
    else right = mid - 1;
  }

  return -1;
}

int main() {
  int target = 6;
  int data[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(data) / sizeof(data[0]);
  int result = binary_search(data, size, target);

  if (result == -1) cout << "Target not found" << endl;
  else cout << "Target found at index " << result << endl;
}
