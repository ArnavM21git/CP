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
    int n,m;cin>>n>>m;
    vector<ll> a(m);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    ll l=0;ll r=m-1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
        for(int j=0;j<6;j++)
        {
            if(j%2==0)
            {
                cout<<a[l]<<" ";
            }
            else{
                cout<<a[r]<<" ";
            }
        }
        }
        else
        {
            for(int j=0;j<6;j++)
        {
            if(j%2==0)
            {
                cout<<a[r]<<" ";
            }
            else{
                cout<<a[l]<<" ";
            }
        } 
        l++;r--;
        }
        cout<<endl;
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