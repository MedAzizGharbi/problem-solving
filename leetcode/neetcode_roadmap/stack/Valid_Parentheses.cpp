#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
  stack<char> myStack;
  set<string> right = {"{}", "()", "[]"};
  for (char c : s) {
			
    if (!myStack.empty() && right.find(string() + myStack.top() + c) != right.end()) {
      myStack.pop();
    } else {
      myStack.push(c);
    }
  }
	if(myStack.empty()) return true;
	else return false;
}

int main(int argc, char *argv[]) {
  string s = "[]";
  string s2 = "([{}])";
  string s3 = "[(])";

  if (isValid(s2))
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}
