
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
	for(int i = 1 ; i < N - 1 ; i++){
			for(int j = 1 ; j < N - 1; j++){
					if(matrix[i][j] != 'A') continue;
					if(matrix[i - 1][j-1] == 'M' && matrix[i-1][j+1] == 'M' && matrix[i+1][j-1] == 'S' && matrix[i+1][j+1] == 'S') res++;
					if(matrix[i - 1][j-1] == 'S' && matrix[i-1][j+1] == 'S' && matrix[i+1][j-1] == 'M' && matrix[i+1][j+1] == 'M') res++;
					if(matrix[i - 1][j-1] == 'S' && matrix[i-1][j+1] == 'M' && matrix[i+1][j-1] == 'S' && matrix[i+1][j+1] == 'M') res++;
					if(matrix[i - 1][j-1] == 'M' && matrix[i-1][j+1] == 'S' && matrix[i+1][j-1] == 'M' && matrix[i+1][j+1] == 'S') res++;			}
	}
	cout << res << "\n";
  return 0;
}
