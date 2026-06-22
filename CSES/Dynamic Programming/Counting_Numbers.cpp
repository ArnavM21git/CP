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
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

// ----- MACROS -----
#define rep(i,a,b) for(long long i=(a); i<(b); i++)
#define per(i,a,b) for(long long i=(a); i>=(b); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ff first
#define ss second

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
// vector<bool> is_prime(N, true);
//
// void sieve() {
//     is_prime[0] = is_prime[1] = false;
//
//     for (int i = 2; i * i < N; i++) {
//         if (is_prime[i]) {
//             for (int j = i * i; j < N; j += i) {
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


ll dp[2][19][11][2];

ll dpf(string &s,ll tight,ll idx,ll prev,ll lz)
{
    if((ll)s.size()==idx) return 1;

    if(dp[tight][idx][prev][lz]!=-1) return dp[tight][idx][prev][lz];

    ll res=0;
    ll lb=0;
    ll ub=((tight)?(s[idx]-48):9);
    for(ll i=lb;i<=ub;i++)
    {
        if(i==prev && !lz) continue;
        res+=dpf(s,((tight && i==ub)?1:0),idx+1,i,(lz && i==0)?1:0);
    }
    dp[tight][idx][prev][lz]=res;
    return res;
}

void solve() {
    ll a,b;cin>>a>>b;
    string aa=to_string(a-1);
    memset(dp,-1,sizeof(dp));
    ll ans1=dpf(aa,1,0,10,1);
    string bb=to_string(b);
    memset(dp,-1,sizeof(dp));
    ll ans2=dpf(bb,1,0,10,1);
    cout<<ans2-ans1;
}

int main() {
    fast_io();

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}