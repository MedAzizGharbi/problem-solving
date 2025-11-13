#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool searchRow(vector<int> row, int target){
		return binary_search(row.begin(), row.end() , target);
}
bool searchMatrix(vector<vector<int>>& matrix , int target){
		int N = (int) matrix.size();
		int M = (int) matrix[0].size();
		int l = 0 , r = N - 1;  
		while (l <= r){
				int mid = (l+r) / 2;
				int val = matrix[mid][0];
				if(val == target){
						return true;
				}
				else if(val > target) {
						r = mid - 1;
				}else l = mid + 1;
		}
		if(!(r <= l)){
				return false;
		}
		int row = (l + r) / 2;
		return searchRow(matrix[row], target);
}

int main (int argc, char *argv[]) {
	vector<vector<int>> matrix = {{1,2,3,8},{10,11,12,13},{14,20,30,40}};
	int target = 3;
		if(searchMatrix(matrix, target)) cout << "YES\n";
		else cout << "NO\n";
	return 0;
}
