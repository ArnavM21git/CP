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
    ll n,m;cin>>n>>m;
    ll x=n,c5=0,c2=0,c0=0;
    while(x>0)
    {
        if(x%2==0) {c2++;x/=2;}
        else break;
    }
    while(x>0)
    {
        if(x%5==0) {c5++;x/=5;}
        else break;
    }

    // if(c2>=c5) c0+=c2-c5;
    // else c0+=c5-c2;

    ll k=1;
    while(k*5<=m && c2>c5)
    {
        c5++;
        k*=5;
        // c0++;
    }
    while(k*2<=m && c2<c5)
    {
        c2++;
        k*=2;
        // c0++;
    }
    while(k*10<=m)
    {
        // c0++;
        k*=10;
    }

    ll mx=k*(m/k);

    cout<<n*mx<<endl;


    

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