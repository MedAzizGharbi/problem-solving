#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height) {
  int m = 0;
  int N = (int)height.size();
  if (N == 0)
    return 0;
  int l = 0, r = N - 1;
  int lMax = height[l], rMax = height[r];
  while (l < r) {
    if (lMax < rMax) {
      l++;
      lMax = max(lMax, height[l]);
      m += lMax - height[l];
    } else {
      r--;
      rMax = max(rMax, height[r]);
      m += rMax - height[r];
    }
  }
  return m;
}

int main(int argc, char *argv[]) {
  vector<int> height = {0, 2, 0, 3, 1, 0, 1, 3, 2, 1};
  cout << trap(height);
  return 0;
}
