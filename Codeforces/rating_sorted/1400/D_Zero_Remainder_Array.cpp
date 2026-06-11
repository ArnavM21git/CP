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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// 1. Typedefs for faster typing
using ll = long long;
using vi = vector<int>;

// ----- PBDS -----
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;

// Functions:
// find_by_order()
// order_of_key()

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
    vector<ll> a(n);
    for(ll &x:a) cin>>x;
    map<ll,ll> mp;
    for(ll &x:a)
    {
        mp[k-(x%k)]++;
    }
    ll mx=0;
    for(auto &[rem,c]:mp)
    {
        if (rem==0||rem==k) continue;
        else{
        mx=max(rem+(k*(c-1)),mx);
        }
    }
    if(mx==0) cout<<0<<endl;
    else{
    cout<<mx+1<<endl;
    }
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