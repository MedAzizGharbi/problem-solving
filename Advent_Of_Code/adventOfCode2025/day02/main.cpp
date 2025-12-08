#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

bool checkInvalid(string s) {
  int n = s.length();
  string ss = "";
  int r = 0;
  char last = s[0];
  for (int len = 1; len < n; len++) {
    string pattern = s.substr(0, len);
    if (n % pattern.length() == 0) {
      int i = 0;
      size_t pos = s.find(pattern, 0);
      while (pos != string::npos) {
        i++;
        pos = s.find(pattern, pos + pattern.length());
      }
      if ((i * pattern.length()) == n) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  ifstream fin("input.txt");
  // ifstream fin("test.txt");
  string line;
  long long ans = 0;
  while (getline(fin, line)) {
    stringstream ss(line);
    vector<pair<string, string>> input;
    string t;
    char del = ',';
    while (getline(ss, t, del)) {
      size_t foundPos = t.find('-');
      string x = t.substr(0, foundPos);
      string y = t.substr(foundPos + 1);
      for (long long i = stoll(x); i <= stoll(y); i++) {
        string t = to_string(i);
        string s_tosearch = "";
        if (checkInvalid(t)) {
          ans += i;
        }
      }
    }
    // Houni kamalna krina el input wseparineh
  }
  cout << ans << "\n";
  return 0;
}
