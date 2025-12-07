#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  ifstream fin("input.txt");
  // ifstream fin("test.txt");
  cout << "Day 1 Advent of Code:" << endl;
  string line;
  int ans = 0;
  int cursor = 50;
  char c;
  int diff;
  while (getline(fin, line)) {
    c = line[0];
    diff = stoi(line.substr(1));
    // Calculating the full loops
    ans += (diff / 100);
    int remaining = diff % 100;
    switch (c) {
    case 'L':
      if (remaining > cursor) {
        if (cursor != 0)
          ans++;
        cursor = 100 + (cursor - remaining);
      } else {
        cursor -= remaining;
        if (cursor == 0)
          ans++;
      }
      break;
    case 'R':
      if ((remaining + cursor) > 99) {
        if (cursor != 0)
          ans++;
        cursor = remaining + cursor - 100;
      } else {
        cursor += remaining;
        if (cursor == 0)
          ans++;
      }
      break;
    }
  }
  cout << ans << "\n";
  return 0;
}
