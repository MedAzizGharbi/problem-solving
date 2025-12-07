#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  // ifstream fin("input.txt");
  ifstream fin("test.txt");
  cout << "Day 1 Advent of Code:" << endl;
  string line;
  int ans = 0;
  int cursor = 50;
  char c;
  int diff;
  string wiw = "wiiiiw";
  while (getline(fin, line)) {
    c = line[0];
    diff = stoi(line.substr(1));
    switch (c) {
    case 'L':
      ans += diff / 100;
      diff = diff % 100;
			if(( cursor-diff ) < 0){
					ans++;
			}
      if (diff > cursor) {
        cursor = cursor - diff + 100;
      } else
        cursor = cursor - diff;
      break;
    case 'R':
      ans += diff / 100;
      cursor = (cursor + diff) % 100;
      diff = diff % 100;
      if ((cursor + diff) > 100) {
        ans++;
      }
      break;
    }
    // cout << "CURR  : " << cursor << "\n";
    if (cursor == 0)
      ans++;
  }
  cout << ans << "\n";
  return 0;
}
