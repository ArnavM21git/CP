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
    int n,k,p,m;cin>>n>>k>>p>>m;

    vector<int> a(n);
    for(auto &x:a) cin>>x;

    if(n<=k)
    {
        cout<<m/a[p-1]<<endl;return;
    }
    vector<int> first;
    for(int i=0;i<p-1;i++)
    {
        first.push_back(a[i]);
    }

    sort(first.begin(),first.end());
    ll sumf=0;
    int rem=max(0,p-k);
    for(int i=1;i<=rem;i++)
    {
        sumf+=first[i-1];
    }

    int wcidx=p-1;
    int wc=a[p-1];
    ll sumc=0;
    vector<int> rest;
    for(int i=0;i<n;i++)
    {
        if(i!=p-1)
        {
            rest.push_back(a[i]);
        }
    }
    sort(rest.begin(),rest.end());
    
    ll sumcy=wc;
    for(int i=1;i<=n-k;i++)
    {
        sumcy+=rest[i-1];
    }
    if(sumf+wc>m)
    { 
        cout<<0<<"; return;
    }
    cout<<1+(m-sumf-wc)/sumcy<<"\n";
    


    
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