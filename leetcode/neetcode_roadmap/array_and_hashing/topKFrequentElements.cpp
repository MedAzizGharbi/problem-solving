#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
  unordered_map<int, int> myCount;
	// We will use Bucket Sort
	// The count array will actually have the count as the indicies ::
	//
		vector<vector<int>> freq(nums.size() + 1);
		for(int i : nums){
				myCount[i]++;
		}

		for(auto i : myCount){
				freq[i.second].push_back(i.first); 
		}
		vector<int> ans;
		for(int i = freq.size() - 1 ; i >= 0 ; i--){
				for(int n : freq[i]){
						ans.push_back(n);
						if(ans.size() == k){
								return ans;
						}
				}
		}
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> v = {1, 1, 1, 1, 1, 2, 2, 3, 3, 3};
	topKFrequent(v, 2);
  return 0;
}
