#include <bits/stdc++.h>
using namespace std;

bool isAlnumString(string &s) {
  for (unsigned char c : s) {
    if (!isalnum(c))
      return false;
  }
  return true;
}

int evalRPN(vector<string> &tokens) {
  int ans = 0;
  int N = (int)tokens.size();
  stack<int> nums;
	for(const string c : tokens){
			if(c == "+"){
					int a = nums.top();nums.pop();
					int b = nums.top();nums.pop();
					nums.push(b + a);
			}
			else if(c == "-"){
					int a = nums.top();nums.pop();
					int b = nums.top();nums.pop();
					nums.push(b - a);
			}
			else if(c == "*"){
					int a = nums.top();nums.pop();
					int b = nums.top();nums.pop();
					nums.push(b * a);
			}
			else if(c == "/"){
					int a = nums.top();nums.pop();
					int b = nums.top();nums.pop();
					if(a == 0) nums.push(0);
					else nums.push(b / a);
			}else{
					nums.push(stoi(c));
			}
	}
	return nums.top();
}

int main(int argc, char *argv[]) {
  vector<string> s = {"10", "6", "9",  "3", "+", "-11", "*",
                      "/",  "*", "17", "+", "5", "+"};
  cout << evalRPN(s);
  return 0;
}
