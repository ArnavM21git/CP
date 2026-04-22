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

bool check(vector<pair<int,int>>& seg,int m)
{
    int currentl=0,currentr=0;
    for(auto &it:seg)
    {
        if(currentl-m>it.second) return false;
        if(currentr+m<it.first) return false;
        currentl=max(currentl-m,it.first);
        currentr=min(currentr+m,it.second);
    }
    return true;
}

void solve() {
    int n;cin>>n;
    vector<pair<int,int>> seg;
    while(n--)
    {
        int l,r;cin>>l>>r;
        seg.push_back({l,r});
    }
    int l=0;int r=1e9;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(check(seg,m)) r=m-1;
        else l=m+1;
    }
    cout<<l<<endl;
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