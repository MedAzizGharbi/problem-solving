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
		int a, b;
		cin >> a >> b;
		if(__builtin_clz(a) > __builtin_clz(b)) cout << "-1\n";
		else if(a == b) cout << "0\n";
		else{
				vector<int> val;
				for(int i = 0 ; i < 31 ; i++){
						int x = (1 << i);
						if(x <= a && (a & x) == 0) a+=x, val.push_back(x);
				}
				for(int i = 0 ; i < 31; i++){
						int x = (1 << i);
						if(x <= a && (b&x) == 0) val.push_back(x);
				}
				cout << val.size() << '\n';
				for(auto z : val) cout << z << ' ';
				cout << "\n";
		}
		
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
