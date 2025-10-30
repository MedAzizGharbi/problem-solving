#include <bits/stdc++.h>
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
		int n, m, a, b;
		cin >> n >> m;
		int ca = 0 , cb = 0;
		int ans = 0;
		while(n--){
				cin >> a >> b;
				ans += a - ca;
				if(((a - ca + 2) % 2) != ((b-cb + 2) % 2))ans--;
				ca = a;
				cb = b;
		}
		if(ca!=m){
				ans += m - ca;
		}
		cout << ans << "\n";
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
