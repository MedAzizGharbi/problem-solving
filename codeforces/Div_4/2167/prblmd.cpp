#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <vector>
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
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0 ; i < n ; i++){
				cin >> a[i];
		}
		for(int p : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67})
		if( any_of(a, a + n, [&p](long long x){return x%p;}))
		{
				cout << p << "\n";
				break;
		}
}

int main (int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //freopen("input.txt" , "r" , stdin);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

