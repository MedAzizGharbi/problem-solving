#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target) {
  int N = (int)nums.size();
  int l = 0, r = N - 1;
  while (l <= r) {
    int mid = l + (r-l) / 2;
    if (nums[mid] == target) {
      return mid;
    } else if (nums[mid] > target) {
      r = mid - 1;
    } else
      l = mid + 1;
  }
  return -1;
}
int main(int argc, char *argv[]) {
  vector<int> nums = {-1, 0, 2, 4, 6, 8};
  int target = 4;
  cout << search(nums, target);
  return 0;
}
