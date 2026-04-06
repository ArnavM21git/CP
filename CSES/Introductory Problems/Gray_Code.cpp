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

vector<string> gen(int n)
{
    if(n==1) return {"0","1"};
    else
    {
        vector<string> prev=gen(n-1);
        vector<string> reve=prev;
        reverse(prev.begin(),prev.end());
        for(auto &x:prev)
        {
            x="0"+x;
        }
        for(auto &x:reve)
        {
            x="1"+x;
        }
        prev.insert(prev.end(),reve.begin(),reve.end());
        return prev;
    }
}

void solve() {
    int n;cin>>n;
    vector<string> gc;
    gc=gen(n);
    for(auto &x:gc)
    {
        cout<<x<<endl;
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