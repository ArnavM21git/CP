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
    vector<int> a(n);
    bool flag=0;
    for(int &x:a) {cin>>x;x+=x%10;}

    if(count(a.begin(),a.end(),a[0])==n) {cout<<"Yes"<<endl;return;}

    for(int x:a) if(x%10==0) {cout<<"No"<<endl;return;}
    for(int &x:a)
    {
        while(x%10!=2&&x%10!=0)
        {
            x+=x%10;
        }
    }
    bool flag2=false;
    int tar=a[0]%20;
    for(int &x:a)
    {
        if(x%20!=tar) {flag2=1;break;}
    }
    
    if(flag2) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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