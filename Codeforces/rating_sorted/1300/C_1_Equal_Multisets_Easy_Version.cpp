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
using vi = vector<long long>;
using vll = vector<long long>;

// ----- MACROS -----
#define rep(i, a, b) for (long long i = (a); i < (b); i++)
#define per(i, a, b) for (long long i = (a); i >= (b); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((long long)(x).size())
#define pb push_back
#define ff first
#define ss second

// ----- CUSTOM HASH -----
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();

        return splitmix64(x + FIXED_RANDOM);
    }
};

// Fast Hash Map
template <typename K, typename V>
using fast_o_map = gp_hash_table<K, V, custom_hash>;

// ----- PBDS -----
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_set;

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
void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    vi prb(n + 1, 0);
    for (int x : b)
    {
        if (x != -1)
        {
            prb[x]++;
            if (prb[x] > 1 && x != -1)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    int it = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == -1)
        {
            while (it < n && prb[a[it]] != 0)
            {
                it++;
            }
            if (it < n)
            {
                b[i] = a[it];
                prb[a[it]] = 1;
            }
        }
    }
    vi cnta(n + 1, 0), cntb(n + 1, 0);
    rep(i, 0, k)
    {
        cnta[a[i]]++;
        cntb[b[i]]++;
    }
    rep(i, 0, k)
    {
        if (cnta[a[i]] != cntb[a[i]])
        {
            cout << "NO" << endl;
            return;
        }
    }
    ll p = 0;
    rep(i, k, n)
    {
        cnta[a[i]]++;
        cnta[a[i - k]]--;
        cntb[b[i]]++;
        cntb[b[i - k]]--;
        if (cnta[a[i]] != cntb[a[i]] || cnta[a[i - k]] != cntb[a[i - k]] || cntb[b[i]] != cnta[b[i]] || cntb[b[i - k]] != cnta[b[i - k]])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    fast_io();

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}