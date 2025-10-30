#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <string>
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
    int count1=0 , count0=0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '1') count1++;
        else count0++;
    }
    if(count1 == count0){
        cout << "YES" << endl;
        return;
    }
    int p1 = k - ( count1 / 2),p0 = k - ( count0/2);
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
