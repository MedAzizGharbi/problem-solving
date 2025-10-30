#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> mymap;
	vector<int> ans;
  for (int i = 0; i < nums.size(); i++) {
    mymap[nums[i]] = i + 1;
  }

  for (int i = 0; i < nums.size(); i++) {
    int diff = target - nums[i];
    if (mymap[diff] && mymap[diff] != (i + 1)){
				ans = { min(i , mymap[diff] - 1) , max(i , mymap[diff] - 1)};
		}
  }
  return ans; 
}

int main(int argc, char *argv[]) { return 0; }
