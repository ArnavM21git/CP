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

const ll MOD=1e9+7;
ll fact(int n)
{
    if(n==0||n==1) return 1;
    else{
        return (n%MOD*fact(n-1))%MOD;
    }
}
void solve() {
    ll n;cin>>n;
    vector<int> a(n);
    
    for(auto &x:a) {cin>>x;}
    ll andd=a[0];
    for(auto &x:a) {andd&=x;}
    ll c=count(a.begin(),a.end(),andd);

    if(c<=1) {cout<<0<<endl;return;}

    cout<<(c*(c-1)%MOD*fact(n-2))%MOD<<endl;

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