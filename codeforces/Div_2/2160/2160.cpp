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
		int N;
		cin >> N;
		vector<int> B(N);
		for(int i = 0 ; i < N ; i++){
				cin >> B[i];
		}
		vector<int> ans(N);
		ans[0] = 1;
		int x = 1;
		for(int i = 0 ; i < N -1 ; i++){
				if(B[i+1] - B[i] == 1){
						ans[i + 1] = x; 
				}else{
						ans[i+1] = ++x;
				}
		}
		for (int i = 0 ; i < N ; i++){
				cout << ans[i] << " ";
		}
		cout << "\n";
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
