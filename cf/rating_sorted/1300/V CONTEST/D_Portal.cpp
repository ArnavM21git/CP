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
    int n,x,y;cin>>n>>x>>y;
    vector<int> a(n);
    for(auto &z:a) cin>>z;

    vector<int> m;
    for(int i=x;i<y;i++) m.push_back(a[i]);

    auto it=min_element(m.begin(),m.end());
    rotate(m.begin(),it,m.end());

    vector<int> lr;
    for(int i=0;i<x;i++) lr.push_back(a[i]);
    for(int i=y;i<n;i++) lr.push_back(a[i]);
    int pos=lr.size();
    for(int i=0;i<lr.size();i++)
    {
        if(!m.empty()&&lr[i]<=m[0])
        {
            cout<<lr[i]<<" ";
        }
        else{
            pos=i;
            break;
        }
    }
    for(int x:m)
    {
        cout<<x<<" ";
    }
    for(int i=pos;i<lr.size();i++)
    {
        cout<<lr[i]<<" ";
    }
    cout<<endl;
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