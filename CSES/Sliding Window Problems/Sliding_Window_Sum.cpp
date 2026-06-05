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

void solve() {
    ll n,k;cin>>n>>k;
    ll x,a,b,c;cin>>x>>a>>b>>c;
    vector<ll> xx;
    xx.push_back(x);
    for(int i=1;i<n;i++)
    {
        ll y=(a*xx[i-1]+b)%c;
        xx.push_back(y);
    }//ip

    int l=0,r=k-1;
    ll sum=0;
    for(int i=l;i<=r;i++) sum+=xx[i];//initial window

    ll ans=sum;
    for(int i=0;i<n-k;i++)
    {
        sum=sum-xx[i]+xx[i+k];
        ans^=sum;
    }
    cout<<ans;
}

int main() {
    fast_io();
    int t = 1;

    while (t--) {
        solve();
    }
    return 0;
}