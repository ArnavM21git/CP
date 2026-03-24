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
    int n;cin>>n;
    vector<int> par(n+1);
    for(int i=2;i<=n;i++)
    {
        cin>>par[i];
    }

    string s;cin>>s;

    vector<int> w(n+1),b(n+1);
    for(int i=1;i<=n;i++)
    {
        w[i]=(s[i-1]=='W')?1:0;
        b[i]=(s[i-1]=='B')?1:0;
    }

    for(int i=n;i>=2;i--)
    {
        w[par[i]]+=w[i];
        b[par[i]]+=b[i];
    }
    ll c=0;

    for(int i=1;i<=n;i++)
    {
        if(w[i]==b[i]) c++;
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