#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs) {
  unordered_map<string, vector<string>> myMap;
  for (string s : strs) {
    string ss = s;
    sort(ss.begin(), ss.end());
    myMap[ss].push_back(s);
  }
  vector<vector<string>> ans;
  for (auto i : myMap) {
    ans.push_back(i.second);
  }
  return ans;
}

int main(int argc, char *argv[]) { return 0; }
