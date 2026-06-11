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
    int n,he;cin>>n>>he;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    ll mx=0;
    for(ll i=1;i<=n;i++)
    {
        vector<ll> b(i);
        for(int j=0;j<i;j++)
        {
            b[j]=a[j];
        }
        sort(b.begin(),b.end());
        ll h=0;
        for(int k=b.size()-1;k>=0;k=k-2)
        {
            h+=b[k];
        }
        
        if(h<=he)
        {
            mx=max(mx,i);
        }
    }
    cout<<mx<<endl;
}

int main() {
    fast_io();
    int t = 1;
  
    while (t--) {
        solve();
    }
    return 0;
}