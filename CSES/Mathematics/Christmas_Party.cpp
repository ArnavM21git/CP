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

// ----- TYPEDEFS -----
using ll = int64_t;
using vi = vector<ll>;
using vll = vector<ll>;

// ----- MACROS -----
#define int int64_t
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define per(i,a,b) for(int i=(a); i>=(b); i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ff first    
#define ss second
#define adder(v) accumulate(all(v), 0LL)

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

// ================== SIEVE OF ERATOSTHENES ==================

// ----- BASIC SIEVE -----
// TC: O(n log log n)
// const int N = 1e7 + 10;
// vector<bool> is_prime(N, true);

// void sieve_basic() {
//     is_prime[0] = is_prime[1] = false;
//
//     for (int i = 2; i <= N - 1; i++) {
//         if (is_prime[i]) {
//             for (int j = 2 * i; j <= N - 1; j += i) {
//                 is_prime[j] = false;
//             }
//         }
//     }
// }


// ----- OPTIMIZED SIEVE -----
// TC: O(n log log n)
// const int N = 1e7 + 10;
// vector<bool> is_prime(N, true);
//
// void sieve() {
//     is_prime[0] = is_prime[1] = false;
//
//     for (int i = 2; i * i < N; i++) { // or i*i <= N-1
//         if (is_prime[i]) {
//             for (int j = i * i; j < N; j += i) { // or j <= N-1
//                 is_prime[j] = false;
//             }
//         }
//     }
// }

// Fast I/O
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int binexp(int a, int b, int mod)
{
    a %= mod;
    int res = 1;
    while(b)
    {
        if(b & 1)
        {
            res = (res * a) % mod;
        }
        b >>= 1;
        a = (a * a) % mod;
    }
    return res;
}

int binmul(int a, int b, int mod)
{
    a %= mod;
    int res = 0;
    while(b)
    {
        if(b & 1)
        {
            res = (res + a) % mod;
        }
        b >>= 1;
        a = (a + a) % mod;
    }
    return res;
}
const int m=1e9+7;
void solve() {
    int n;cin>>n;
    vector<int> dp(n+1,0);
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++)
    {
        dp[i]=((dp[i-2]*(i-1))%m+(dp[i-1]*(i-1))%m)%m;
    }
    cout<<dp[n];
}

int32_t main() {
    fast_io();

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}