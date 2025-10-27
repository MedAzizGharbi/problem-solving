#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

void part1(vector<int> left, vector<int> right) {
  int ans = 0;
  sort(left.begin(), left.end());
  sort(right.begin(), right.end());
  for (int i = 0; i < 1000; i++) {
    ans += abs(right[i] - left[i]);
  }
  cout << ans << "\n";
}

void part2(vector<int> left, vector<int> right) {
  int ans = 0;
	unordered_map<int,int> countR;
	for(int i : right){
		countR[i]++;
	}
	for(int i : left){
			ans += i * countR[i];
	}
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  freopen("input.txt", "r", stdin);
  vector<int> left(1000);
  vector<int> right(1000);
  for (int i = 0; i < 1000; i++) {
    cin >> left[i];
    cin >> right[i];
  }
  cout << "part 1: \n";
  part1(left, right);
  cout << "part 2: \n";
  part2(left, right);
  return 0;
}
