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
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int ans = 0;
		int c0 = 0;
		bool isOnly0 = true;
		if(s[0] == '1') {
				isOnly0 = false;
				ans++;
		}else{
				c0 = 1;
		}
		for(int i = 1 ; i < n ; i++){
				if(s[i] == '0') {
						c0++;
				}
				else if(s[i] == '1' && isOnly0 == true){
						ans++;
						c0 = 0;
						isOnly0 = false;
				}
				else {
						isOnly0 = false;
						if ( c0 >= (k - 1)){
								ans++;
						}
						c0 = 0;
				}
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
