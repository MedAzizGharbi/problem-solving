#include <algorithm>
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
#define YES() cout << "YES" << endl;
#define NO() cout << "NO" << endl;

void solve(){
    int n, k;
    cin >> n >> k;
    k--;
    vector<int> h(n);
    REP(i, 0, n-1){
        cin >> h[i];
    }
    sort(h.begin(),h.end());
    coutvi(h);
    int curr = h[k];
    int wl = 1;
    if(wl > curr){
        NO();
        return;
    }
    YES();

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
