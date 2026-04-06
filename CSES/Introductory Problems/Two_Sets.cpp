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
    int n;cin>>n;ll sumi=0;
    for(int i=1;i<=n;i++) sumi+=i;
    if(sumi%2!=0) {cout<<"NO";return;}
    cout<<"YES"<<endl;
    ll sum=sumi/2;
    vector<int> a1,a2;
    for(int i=n;i>=1;i--)
    {
        if(sum-i>=0) {a1.push_back(i);sum-=i;}
        else a2.push_back(i);
        
    }
    cout<<a1.size()<<endl;
    for(int x:a1) cout<<x<<" ";
    cout<<endl;
    cout<<a2.size()<<endl;
    for(int x:a2) cout<<x<<" ";
    cout<<endl;
}

int main() {
    fast_io();
    int t = 1;
 
    while (t--) {
        solve();
    }
    return 0;
}