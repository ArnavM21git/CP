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

int check(int k,vector<pair<int,int>> a,int n)
{
    int lo=0,hi=0;
    for(int i=0;i<n;i++)
    {
        lo=max(lo-k,a[i].first);
        hi=min(hi+k,a[i].second);
        if(lo>hi) return 0;
    }
    return 1;
}

void solve() {
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for(auto &x:a)
    {
        int l,r;cin>>l>>r;
        x={l,r};
    }
    int l=0,r=1e9;int res=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(check(m,a,n))
        {
            res=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<res<<endl;
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