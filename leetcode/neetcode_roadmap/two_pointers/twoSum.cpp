#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target){
		int n= numbers.size();
		int l = 0, r = n - 1;
		while(l < r){
				int s = numbers[l] + numbers[r];
				if(s == target) return {l , r};
				if(s > target) r--;
				else l++;
		}
		return {};
}

int main (int argc, char *argv[]) {
	vector<int> numbers = {1, 2, 3, 4};
	int target = 3;
	for(int i : twoSum(numbers, target)){
			cout << i << " | "; 
	}
	return 0;
}
