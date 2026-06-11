// ================== LIMITS REFERENCE ==================
// INT_MAX        // int
// INT_MIN
//
// LONG_MAX       // long
// LONG_MIN
//
// LLONG_MAX      // long long
// LLONG_MIN
//
// UINT_MAX       // unsigned int
// ULONG_MAX      // unsigned long
// ULLONG_MAX     // unsigned long long
// ======================================================

#include <bits/stdc++.h>
using namespace std;

// 1. Typedefs for faster typing
using ll = long long;
using vi = vector<int>;

// ----- SIEVE TEMPLATE -----
// TC: O(n log log n)
// const int N = 1e7 + 10;
// vector<bool> is_prime(N,1);
//
// void sieve(){
//     is_prime[0] = is_prime[1] = 0;
//     for(int i = 2; i < N; i++){
//         if(is_prime[i])
//             for(int j = 2 * i; j < N; j += i)
//                 is_prime[j] = 0;
//     }
// }

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool check(int ttime,vector<int> &fre,int n,int m)
{
    ll totask=0;
    for(int i=1;i<=n;i++)
    {
        if(fre[i]>=ttime)
        {
            totask+=ttime; 
        }
        else totask+=fre[i]+(ttime-fre[i])/2;
    }
    if(totask>=m) return true;
    else return false;
}

void solve() {
    int n,m;cin>>n>>m;
    vector<int> a(m);
    for(auto &x:a) cin>>x;
    int l=0;int r=2*m;
    vector<int> fre(n+1,0);
    for(int &x:a) fre[x]++;
    int res=2*m;
    while(l<=r)
    {
        int mi=l+(r-l)/2;
        if(check(mi,fre,n,m))
        {
            res=min(res,mi);
            r=mi-1;
        }
        else{
            l=mi+1;
        }
    }
    cout<<res<<endl;
}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}