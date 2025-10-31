#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &heights) {
  int maxA = 0;
  int N = heights.size();
  int l = 0, r = N - 1;
  while (l < r) {
    int area = min(heights[l], heights[r]) * (r - l);
    maxA = max(area, maxA);
		if(heights[l] >= heights[r]){
				r--;
		}else{
				l++;
		}
  }
  return maxA;
}

int main(int argc, char *argv[]) {
  vector<int> heights = {2, 2, 2};
  cout << maxArea(heights);
  return 0;
}
