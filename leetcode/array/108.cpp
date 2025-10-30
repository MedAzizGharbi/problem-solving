#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
TreeNode *sortedArrayToBST(vector<int> &nums) {
		TreeNode root = TreeNode();
		int l = 0 , r = (int) nums.size() - 1;
		int midE = = nums[(r-l) + 2]; 
		while( l < r) = 
}
int main(int argc, char *argv[]) {
  cout << "wiw";
  return 0;
}
