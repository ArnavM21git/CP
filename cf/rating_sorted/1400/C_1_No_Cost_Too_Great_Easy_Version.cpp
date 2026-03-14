#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAXVAL = 2e5+10;
int freq[MAXVAL];  // ✅ global

vector<int> primeFactors(int x) {
    vector<int> res;
    for(int i=2; (ll)i*i<=x; i++) {
        if(x%i==0) {
            res.push_back(i);
            while(x%i==0) x/=i;
        }
    }
    if(x>1) res.push_back(x);
    return res;
}

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<int> b(n);
    for(auto &x:b) cin>>x;

    int ans = 2;
    set<int> primes;

    for(int x : a) {
        for(int p : primeFactors(x))   primes.insert(p);
        for(int p : primeFactors(x+1)) primes.insert(p);
    }

    for(int p : primes) {
        int c0=0, c1=0;
        for(int x : a) {              // ✅ scan array, not multiples
            if(x % p == 0)     c0++;
            if((x+1) % p == 0) c1++;  // x+1 is next multiple of p
        }
        if(c0>=2)            { ans=0; break; }
        if(c0>=1 && c1>=1)    ans = min(ans,1);
        if(c1>=2)             ans = min(ans,2);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}