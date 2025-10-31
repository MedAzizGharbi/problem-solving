#include <bits/stdc++.h>
using namespace std;

void cout_vi(vector<int> &v) {
  for (int i : v) {
    cout << i << " ";
  }
  cout << "\n";
}

vector<vector<int>> threeSum(vector<int> &nums) {
  // Lezem nal9aw 3 ar9am ma baadhhom yjiw 0.
  // Bch nraj3ou triplets => indices mayhemouch
  // Najmou nraj3ou f ay order.
  // Output should not contain any duplicates.
  // Awel haja najmou nsortiw el vector
  // [-1,0,1,2,-1,-4] => [-4, -1, -1, 0, 1, 2]
  // Behi awel haja lezem nakhtarou el noumrou lowel.
  // elli lezmou ykoun ya 0 ya asgher mel 0?
  int N = (int)nums.size();
  vector<vector<int>> ans;
  sort(nums.begin(), nums.end());
  for (int i = 0; i < N; i++) {
    if (nums[i] > 0)
      break;
    if (i > 0 && nums[i] == nums[i - 1])
      continue;
    int l = i + 1, r = N - 1;
    while (l < r) {
      int sum = nums[i] + nums[l] + nums[r];
      if (sum == 0){
					ans.push_back({nums[i], nums[l], nums[r]});
					l++;
					r--;
					while(l < r && nums[l] == nums[l-1]){
							l++;
					}
			}
      else if (sum < 0) {
        l++;
      } else
        r--;
    }
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> ans1 = threeSum(nums1);
  for (vector<int> v : ans1) {
    cout_vi(v);
  }
  return 0;
}
