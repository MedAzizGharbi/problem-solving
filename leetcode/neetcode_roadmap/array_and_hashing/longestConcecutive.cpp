#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums) {
  unordered_set<int> mySet(nums.begin(), nums.end());
	int longest = 0;
	for(int num : nums){
			if(mySet.find(num-1) == mySet.end()){
				int length = 1;
				while(mySet.find(num + length) != mySet.end()){
						length++;
				} 
				longest = max(longest, length);
			}
	}
	return longest;
}

int main(int argc, char *argv[]) {
		vector<int> nums = {0,3,2,5,4,6,1,1};
		cout << longestConsecutive(nums);
		return 0; }
