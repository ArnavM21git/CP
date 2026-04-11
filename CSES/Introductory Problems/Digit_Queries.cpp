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
    int q;cin>>q;
    while(q--)
    {
        ll k;cin>>k;
        ll prev=1;
        ll c=9,d=1;
        while(k>prev+c*d-1)
        {
            prev=prev+c*d;
            c*=10;
            d++;
        }
        ll end=prev+c*d-1;

        ll offset=k-prev;
        ll ion=offset/d;
        
        ll stno=1;
        for(int i=1;i<=d-1;i++) stno*=10;
        ll no=stno+ion;
        ll dd=offset%d;
        string s=to_string(no);
        cout<<s[dd]<<endl;
    }
}

int main() {
    fast_io();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}