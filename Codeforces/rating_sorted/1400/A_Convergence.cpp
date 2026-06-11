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

// ----- CUSTOM HASH -----
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();

        return splitmix64(x + FIXED_RANDOM);
    }
};

// Fast Hash Map
template<typename K, typename V>
using fast_o_map = gp_hash_table<K, V, custom_hash>;

// ----- PBDS -----
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;

// find_by_order(k)
// order_of_key(x)

// ----- SIEVE TEMPLATE -----
// TC: O(n log log n)
// const int N = 1e7 + 10;
// vector<bool> is_prime(N, 1);
//
// void sieve() {
//     is_prime[0] = is_prime[1] = 0;
//     for (int i = 2; i < N; i++) {
//         if (is_prime[i]) {
//             for (int j = 2 * i; j < N; j += i) {
//                 is_prime[j] = 0;
//             }
//         }
//     }
// }

// 2. Fast I/O
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    int med=n/2;int ele=a[med];
    int lmed=count(a.begin(),a.begin()+med,ele);
    int rmed=count(a.begin()+med+1,a.end(),ele);
    cout<<max(med-lmed,n-med-1-rmed)<<endl;
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