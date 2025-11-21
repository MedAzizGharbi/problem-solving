#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  ifstream f("input.txt");
  if (!f.is_open()) {
    cerr << "error opening the file";
    return 1;
  }
  string s;
  vector<vector<char>> matrix;
  while (getline(f, s)) {
    vector<char> temp;
    for (char c : s) {
      temp.push_back(c);
    }
    matrix.push_back(temp);
  }
  int res = 0;
  int N = matrix[0].size();
  // Checking each line
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N - 3; j++) {
      if (matrix[i][j] == 'X' && matrix[i][j + 1] == 'M' &&
          matrix[i][j + 2] == 'A' && matrix[i][j + 3] == 'S')
        res++;
      if (matrix[i][j] == 'S' && matrix[i][j + 1] == 'A' &&
          matrix[i][j + 2] == 'M' && matrix[i][j + 3] == 'X')
        res++;
    }
  }
  // Checking each column
  for (int i = 0; i < N - 3; i++) {
    string s = "";
    for (int j = 0; j < N; j++) {
      if (matrix[i][j] == 'X' && matrix[i + 1][j] == 'M' &&
          matrix[i + 2][j] == 'A' && matrix[i + 3][j] == 'S')
        res++;
      if (matrix[i][j] == 'S' && matrix[i + 1][j] == 'A' &&
          matrix[i + 2][j] == 'M' && matrix[i + 3][j] == 'X')
        res++;
    }
  }
  // Checking diagonals::
  for (int i = 0; i < N - 3; i++) {
    for (int j = 0; j < N - 3; j++) {
      if (matrix[i][j] == 'X' && matrix[i + 1][j + 1] == 'M' &&
          matrix[i + 2][j + 2] == 'A' && matrix[i + 3][j + 3] == 'S')
        res++;
      if (matrix[i][j] == 'S' && matrix[i + 1][j + 1] == 'A' &&
          matrix[i + 2][j + 2] == 'M' && matrix[i + 3][j + 3] == 'X')
        res++;
    }
  }
  for (int i = 0; i < N - 3 ; i++) {
    for (int j = 3; j < N; j++) {
      if (matrix[i][j] == 'X' && matrix[i + 1][j - 1] == 'M' &&
          matrix[i + 2][j - 2] == 'A' && matrix[i + 3][j - 3] == 'S')
        res++;
      if (matrix[i][j] == 'S' && matrix[i + 1][j - 1] == 'A' &&
          matrix[i + 2][j - 2] == 'M' && matrix[i + 3][j - 3] == 'X')
        res++;
    }
  }
  cout << res << "\n";
  f.close();
  return 0;
}
