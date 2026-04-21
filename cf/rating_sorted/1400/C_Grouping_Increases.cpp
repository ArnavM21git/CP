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
    for(auto &x:a) cin>>x;
    vector<int> b,c;
    b.push_back(a[0]);
    int pos=n+1;
    for(int i=1;i<n;i++)
    {
        if(a[i]<=b[b.size()-1]) b.push_back(a[i]);
        else{
            c.push_back(a[i]);
            pos=i+1;break;
        }
    }
    for(int i=pos;i<n;i++)
    {
        int x=b[b.size()-1],y=c[c.size()-1];
        if(a[i]>x&&a[i]>y) 
        {
            if(x>y) c.push_back(a[i]);
            else b.push_back(a[i]);
        }
        else if(a[i]>x)
        {
            c.push_back(a[i]);
        }
        else if(a[i]>y)
        {
            b.push_back(a[i]);
        }
        else{
            if(x>y) c.push_back(a[i]);
            else b.push_back(a[i]);
        }
    }
    ll p=0;
    for(int i=1;i<b.size();i++)
    {
        if(b[i]>b[i-1]) p++;
    }
    for(int i=1;i<c.size();i++)
    {
        if(c[i]>c[i-1]) p++;
    }
    cout<<p<<endl;
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