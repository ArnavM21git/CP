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
    int n,m,k;cin>>n>>m>>k;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<int> b(m);
    for(auto &x:b) cin>>x; 

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int i=0;int j=0;int c=0;
    while(i<n&&j<m)
    {
        if(a[i]>b[j]+k) j++;
        else if(a[i]<b[j]-k) i++;
        else 
        {
            c++;i++;j++;
        }
    }
    cout<<c;
}

int main() {
    fast_io();
    int t = 1;
  
    while (t--) {
        solve();
    }
    return 0;
}