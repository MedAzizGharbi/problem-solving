#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
  unordered_map<int, int> myCount;
  for (int i : nums) {
    myCount[i]++;
  }
	for(auto i : myCount){
			cout << i.second << " ";
	}
  return {};
}

int main(int argc, char *argv[]) {
  vector<int> v = {1, 1, 1, 1, 1, 2, 2, 3, 3, 3};
	topKFrequent(v, 2);
  return 0;
}
