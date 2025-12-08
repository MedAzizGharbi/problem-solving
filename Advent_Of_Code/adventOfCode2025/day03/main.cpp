#include <bits/stdc++.h>
using namespace std;

pair<int, int> findFirstMax(string s) {
  int n = s.length();
  int mx = -1;
  int mx2 = -1;
  int idx = -1;
  for (int i = 0; i < n - 1; i++) {
    int t = s[i] - '0';
    if (t > mx) {
      mx = max(mx, t);
      idx = i;
    }
  }
  for (int j = ( idx + 1 ); j < n; j++) {
    int t = s[j] - '0';
    mx2 = max(mx2, t);
  }
  return {mx, mx2};
}

int main() {
  ifstream fin("input.txt");
  // ifstream fin("test.txt");
  string line;
  int ans = 0;
  while (getline(fin, line)) {
			pair<int,int> res = findFirstMax(line);
			ans += (res.first * 10) + (res.second);
  }
  cout << ans << "\n";
  return 0;
}
