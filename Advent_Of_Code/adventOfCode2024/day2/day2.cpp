#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

bool isOk(vector<int> a){
    int k = (int)a.size();
    bool ok = true;
    bool only_inc = true;
    bool only_dec = true;
    for (int i = 0; i < k - 1; i++) {
      int diff = a[i + 1] - a[i];
      if (diff < 0) {
        only_inc = false;
      }
      if (diff > 0) {
        only_dec = false;
      }
      if (!(1 <= abs(diff) && abs(diff) <= 3)) {
        ok = false;
        break;
      }
    }
    if (ok && (only_dec || only_inc)) {
      return true;
    }else {
				return false;
		}
}

int main(int argc, char *argv[]) {
  freopen("input.txt", "r", stdin);
  int n = 1000;
  int ans = 0;
  for (int i = 0; i < 1000; i++) {
    vector<int> a;
    while (true) {
      int x;
      cin >> x;
      a.push_back(x);
      char c;
      scanf("%c", &c);
      if (c == '\n') {
        break;
      }
    }
		if(isOk(a)){
				ans++;
		}
		else{
				for(int j = 0 ; j < a.size(); j++){
						vector<int>b = a;
						b.erase(b.begin() + j);
						if(isOk(b)){
								ans++;
								break;
						}
				}
		}
  }
  cout << ans << "\n";
  return 0;
}
