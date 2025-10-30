#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {
  int n = (int)nums.size();
  vector<int> ans;
  // Awel haja nehsbou el product kbal (prefix)
  vector<int> pre(n);
  // Then haja nehsblou el product bard (postfix)
  vector<int> post(n);
  pre[0] = 1;
  post[n - 1] = 1;
  for (int i = 1; i < n; i++) {
    pre[i] = nums[i - 1] * pre[i - 1];
  }
  for (int i = n - 2; i >= 0; i--) {
    post[i] = nums[i + 1] * post[i + 1];
  }
  for (int i = 0; i < n; i++) {
    ans.push_back(post[i] * pre[i]);
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {1, 2, 4, 6};
  vector<int> wiw = productExceptSelf(nums);
  for (int i : wiw) {
			cout << i << " | ";
  }
	cout << "\n";
  return 0;
}
