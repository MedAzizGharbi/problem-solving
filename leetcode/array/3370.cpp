#include <bits/stdc++.h>
using namespace std;

int smallestNumber(int n) {
  vector<int> bits;
  int j = 2;
	int i = pow(2, 1);
  while (i <= n) {
    i = pow(2, j);
    j++;
  }
  cout << i-1 << "\n";
  return 0;
}

int main(int argc, char *argv[]) {
  int n = 5;
  smallestNumber(5);
  return 0;
}
