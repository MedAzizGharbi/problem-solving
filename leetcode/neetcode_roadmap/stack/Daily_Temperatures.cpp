#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures) {
  // Brute Force Approach o(n²)
  // int N = (int) temperatures.size();
  // vector<int> ans(N, 0);
  // for(int i = 0 ; i < N; i++){
  // 		for(int j = i+1 ; j < N; j++){
  // 				if(temperatures[j] > temperatures[i]){
  // 						ans[i] = j-i;
  // 						break;
  // 				}
  // 		}
  // }
  // return ans;
  int N = temperatures.size();
  vector<int> ans(N, 0);
  stack<pair<int, int>> myStack; // pair {temp, index}
  for (int i = 0; i < N; i++) {
    int t = temperatures[i];
    while (!myStack.empty() && t > myStack.top().first) {
      auto p = myStack.top();
      myStack.pop();
      ans[p.second] = i - p.second;
    }
    myStack.push({t,i});
  }
	return ans;
}

int main(int argc, char *argv[]) {
  vector<int> temperatures = {30, 38, 30, 36, 35, 40, 28};
  for (int i : dailyTemperatures(temperatures)) {
    cout << i << " | ";
  }

  return 0;
}
