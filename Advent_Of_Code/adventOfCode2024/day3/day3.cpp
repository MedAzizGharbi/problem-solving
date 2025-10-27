#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char *argv[]) {
		ifstream f("input.txt");
		string s;
		while(getline(f , s)){
				regex regexp("mul\\([0-9]+, [0-9]+\\)");
				smatch m;
				regex_search(s, m , regexp);
				for(auto x : m){
						cout << x << "||";
				}
				cout << endl;
		}
  return 0;
}
