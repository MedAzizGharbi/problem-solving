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

int main (int argc, char *argv[]) {
		ll n;
		cin >> n;
		ll ans = 0;
		ans += n / 100;
		n = n % 100;
		ans += n / 50;
		n = n % 50;
		ans += n / 20;
		n = n % 20;
		ans += n / 5 ;
		n = n % 5;
		ans += n;
		cout << ans << "\n";
		return 0;
}
