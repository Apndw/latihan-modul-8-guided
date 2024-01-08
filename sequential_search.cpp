#include <iostream>

using namespace std;

int sequential_search(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) return i;
  }

  return -1;
}

int main() {
  int target = 4;
  int data[] = {5, 2, 4, 6, 1, 3};
  int size = sizeof(data) / sizeof(data[0]);
  int result = sequential_search(data, size, target);

  if (result == -1) cout << "Target not found" << endl;
  else cout << "Target found at index " << result << endl;
}
