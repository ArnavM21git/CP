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
     int n;cin>>n;int c1=0;
     string s;cin>>s;
     for(int i=0;i<n;i++)
     {
        if(s[i]=='1') c1++;
     }
     int mx=c1;
     for(int i=1;i<n-1;i++)
     {
        if(s[i-1]=='1'&&s[i+1]=='1'&&s[i]=='0') 
        {
            mx++;s[i]='1';
        }
     }
     int mn=mx;
     int c=0;

     for(int i=0;i<n;i++)
     {
        if(s[i]=='1') c++;
        else{
            if(c>0)
            {
            mn=mn-(c-1)/2;
            c=0;
            }
        }
     }
     if(c>0)
     {
        mn=mn-(c-1)/2;
     }
     cout<<mn<<" "<<mx<<endl;
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