#include <bits/stdc++.h>
#include <utility>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define coutvi(v) {for(int i : v) cout << i << " ";}
#define coutvs(v) {for(string s : v) cout << i << " ";}
#define REP(i,a,b) for(int i = a ; i <= b ; i++)
#define si(x) int(x.size())

void solve(){
		int n,k;
		string s;
		cin >> n >> k >> s;
		int ans = 0;
		int last = -1e9;
		for (int i = 0; i < n ; i++){
				if(s[i] == '1' && i - last >= k){ ans++; }
				if(s[i] == '1') last = i;
		}
		cout << ans << endl;
}
int main (int argc, char *argv[]) {
		ios::sync_with_stdio(false);
		cin.tie(0);
		freopen("input.txt" , "r" , stdin);
		int t;
		cin >> t;
		while(t--){
				solve();
		}
		return 0;
}
