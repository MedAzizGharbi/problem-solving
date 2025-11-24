#include <bits/stdc++.h>
#include <utility>
using namespace std;

enum Direction { UP, RIGHT, DOWN, LEFT };

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
  freopen("input.txt", "r", stdin);
  string line;
  set<pair<int, int>> visitedCords;
  vector<vector<char>> map;
  pair<int, int> currPos;
  Direction currDirection = UP;
  int i = 0;
  while (getline(cin, line)) {
    vector<char> temp;
    for (int j = 0; j < line.size(); j++) {
      temp.push_back(line[j]);
      if (line[j] == '^')
        currPos = make_pair(i, j);
    }
    map.push_back(temp);
    i++;
  }
  int n = map.size(), m = map[0].size();
  i = 0;
  while (true) {
    visitedCords.insert({currPos.first, currPos.second});
    int nx = currPos.first + dx[currDirection];
    int ny = currPos.second + dy[currDirection];

    if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
      break;
    }
    if (map[nx][ny] == '#') {
      currDirection = (Direction)((currDirection + 1) % 4);
      continue;
    }
    currPos = {nx, ny};
  }
  cout << visitedCords.size() << "\n";
  return 0;
}
