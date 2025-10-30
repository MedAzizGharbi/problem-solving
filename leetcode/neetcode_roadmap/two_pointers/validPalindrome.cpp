#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
		int n = s.length();
		int l = 0, r = n - 1;
		while(l <= r){
				if(s[l] == ' ' || !isalnum(s[l])){
						l++;
						continue;
				}else if (s[r] == ' ' || !isalnum(s[r])){
						r--;
						continue;
				}
				if(tolower(s[l++]) != tolower(s[r--])) return false;

		}
		return true;
}

int main (int argc, char *argv[]) {
		string s = "Was it a car or a cat I saw?";
		if(isPalindrome(s)){
				cout << "YES\n";
		}else {
				cout << "NO\n";
		}
	
	return 0;
}
