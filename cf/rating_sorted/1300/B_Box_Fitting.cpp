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
    ll n,W;cin>>n>>W;
    vector<ll> w(n);
    ll nob=0;
    for(auto &x:w) cin>>x;
    map<ll,int> m;
    for(int x:w) m[(int)log2(x)]++;
    ll c=0;
    while(nob<n)
    {
        ll rem=W;
        for(auto it=m.rbegin();it!=m.rend();it++)
        {
            while((rem>=(1LL<<it->first) && it->second>0))
            {
                nob++;it->second--;rem-=(1LL<<it->first);
            }
        }
        c++;
    }
    cout<<c<<endl;
    


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