#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums(n, -1);
  unordered_map<int, int> map;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num > n) continue;
    nums[num - 1] = num;
  }

  for (int i = 0; i < n; i++) {
    if (nums[i] == -1) {
      cout << i + 1;
      return 0;
    }
  }
}