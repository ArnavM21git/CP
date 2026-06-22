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

ll nos_atk(vll &a,ll L,ll R,ll k)
{
    fast_o_map<ll,ll> freq;
    ll l=0;
    ll uni=0;
    ll ans=0;
    for(ll r=0;r<a.size();r++)
    {
        if(freq[a[r]]==0) uni++;
        freq[a[r]]++;
        while(uni>k || r-l+1>R)
        {
            freq[a[l]]--;
            if(freq[a[l]]==0) uni--;
            l++;
        }
        if(r-l+1>=L)
        {
            ans+=r-l+1-(L-1);// 1..L-1 array shorter
        }

    }
    return ans;
}

void solve() {
    ll n,k,L,R;cin>>n>>k>>L>>R;
    vll a(n);
    rep(i,0,n) cin>>a[i];
    cout<<nos_atk(a,L,R,k)-nos_atk(a,L,R,k-1)<<endl;
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