#include <bits/stdc++.h>
using namespace std;

bool hasDuplicate(vector<int>& nums){
		unordered_set<int> seen;
		for(int i : nums){
				if(seen.count(i) != 0){
						return true;
				}else {
						seen.insert(i);
				}
		}
		return false;
}

int main (int argc, char *argv[]) {
		vector<int> nums = {}
	return 0;
}
