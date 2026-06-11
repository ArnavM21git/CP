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
    vector<int> f;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            f.push_back(i);
        }
    }
    for(int i=1;i<f.size();i++)
    {
        if(n/(f[i]*f[i-1])>=2&&n/(f[i]*f[i-1])<n&&n/(f[i]*f[i-1])!=f[i]&&n/(f[i]*f[i-1])!=f[i-1]&&n%(n/(f[i]*f[i-1]))==0)
        {
            cout<<"YES"<<endl;
            cout<<f[i-1]<<" "<<f[i]<<" "<<n/(f[i]*f[i-1])<<endl;return;
        }
    }
    cout<<"NO"<<endl;
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