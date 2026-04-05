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
const int N = 1e6 + 10;
vector<bool> is_prime(N,1);
vector<int> primes;

void sieve(){
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2; i < N; i++){
        if(is_prime[i]){
            primes.push_back(i);
            for(int j = 2 * i; j < N; j += i)
                is_prime[j] = 0;}
    }
}

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;cin>>n;
    vector<ll> a(n);
    a[0]=primes[0];
    for(int i=1;i<n;i++)
    {
        a[i]=1LL*primes[i]*primes[i-1];
    }
    for(int x:a) cout<<x<<" ";
    cout<<endl;

}

int main() {
    fast_io();
    sieve();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}