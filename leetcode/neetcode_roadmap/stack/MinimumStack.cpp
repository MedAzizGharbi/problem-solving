#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
  stack<int> stk;
  stack<int> minS;
  MinStack() {}
  void push(int val) {
    stk.push(val);
    if (minS.empty() || val <= minS.top()) {
      minS.push(val);
    }
  }
  void pop() {
    if (stk.empty())
      return;
    if (stk.top() == minS.top()) {
      minS.pop();
    }
    stk.pop();
  }
  int top() {
    if (stk.empty())
      return 0;
    return stk.top();
  }
  int getMin() { return minS.top(); }
};

int main(int argc, char *argv[]) {
  MinStack minStack = *new MinStack();
  minStack.push(1);
  minStack.push(2);
  minStack.push(0);
  cout << minStack.getMin(); // return 0
  minStack.pop();
  cout << minStack.top();    // return 2
  cout << minStack.getMin(); // return 1
  return 0;
}
