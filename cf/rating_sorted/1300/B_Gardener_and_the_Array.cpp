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
    int n;cin>>n;
    map<int,int> freq;
    vector<vector<int>> bit(n);
    
    for(int i=0;i<n;i++)
    {
        int nos;cin>>nos;
        for(int j=0;j<nos;j++)
        {
            int x;cin>>x;
            bit[i].push_back(x);
            freq[x]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int b:bit[i])
        {
            if(freq[b]==1)
            {
                flag=false;
                break;
            }
        }
        if(flag) {cout<<"Yes"<<endl;return;} 
    }
    cout<<"No"<<endl;

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