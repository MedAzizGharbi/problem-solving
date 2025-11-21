#include <bits/stdc++.h>
using namespace std;

bool checkSequence(vector<int> v, unordered_map<int, set<int>> myMap) {
  set<int> seen;
  for (int i : v) {
    for (int x : myMap[i]) {
      if (seen.count(x)) {
        return false;
      }
      seen.insert(i);
    }
  }
  return true;
}
void solve(unordered_map<int, set<int>> myMap, vector<vector<int>> v) {
  int ans = 0;
  for (vector<int> x : v) {
    if (checkSequence(x, myMap)) {
      ans += x[x.size() / 2];
    }
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("input.txt", "r", stdin);
  string line;
  bool isOrderingRules = true;
  unordered_map<int, set<int>> myMap;
  vector<vector<int>> sequences;
  while (getline(cin, line)) {
    if (line.empty())
      continue;
    if (isOrderingRules && line.find('|') != string::npos) {
      stringstream ss(line);
      int before, after;
      char del;
      ss >> before >> del >> after;
      myMap[before].insert(after);
    } else {
      isOrderingRules = false;
      int num;
      stringstream ss(line);
      vector<int> seq;
      while (ss >> num) {
        seq.push_back(num);
        if (ss.peek() == ',')
          ss.ignore();
      }
      if (!seq.empty()) {
        sequences.push_back(seq);
      }
    }
  }
  solve(myMap, sequences);
  return 0;
}
