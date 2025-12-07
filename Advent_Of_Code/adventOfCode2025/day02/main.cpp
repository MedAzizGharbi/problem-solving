#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

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
			set<char> seen;
			for(long long i = stoll(x) ; i <= stoll(y) ; i++){
					string t = to_string(i);
					if(t.length() % 2) continue;
					string t1 = t.substr(0, t.length()/2);
					string t2 = t.substr(t.length()/2);
					if(t1 == t2) ans += i;
			}
    }
    // Houni kamalna krina el input wseparineh
  }
	cout << ans << "\n";
  return 0;
}
