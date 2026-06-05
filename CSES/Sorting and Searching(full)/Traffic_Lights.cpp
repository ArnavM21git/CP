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
    int x,n;cin>>x>>n;
    vector<int> a(n);
    for(auto &y:a) cin>>y;
    set<int> s;
    multiset<int> ms;
    s.insert(0);
    s.insert(x);
    ms.insert(x);
    for(int &y:a)
    {
        s.insert(y);
        auto it=s.lower_bound(y);
        int len=*next(it)-*prev(it);
        ms.erase(ms.find(len));
        ms.insert(*it-*prev(it));
        ms.insert(*next(it)-*it);
        cout<<*(ms.rbegin())<<" ";
    }
}1

int main() {
    fast_io();
    int t = 1;
  
    while (t--) {
        solve();
    }
    return 0;
}