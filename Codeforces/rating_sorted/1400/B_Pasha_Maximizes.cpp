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
    string a;int k;cin>>a>>k;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(k==0) break;
        int mx=i;
        for(int j=i+1;j<=i+k&&j<n;j++)
        {
            if(a[j]>a[mx]) mx=j;
        }
        if(mx==i) continue;
        for(int j=mx;j>i;j--)
        {
            swap(a[j],a[j-1]);
            k--;
        }
    }
    cout<<a<<endl; 
}

int main() {
    fast_io();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}