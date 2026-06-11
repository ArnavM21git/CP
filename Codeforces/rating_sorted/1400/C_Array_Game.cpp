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
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    if(k>=3) {cout<<0<<endl;return;}
    sort(a.begin(),a.end());
    vector<ll> diff;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            diff.push_back(a[j]-a[i]);

    if(k==1) {cout<<min(a[0],*(min_element(diff.begin(),diff.end())))<<endl;return;}

    ll ans=min(*(min_element(diff.begin(),diff.end())),a[0]);
    for(ll &x:diff)
    {
        auto xx=(lower_bound(a.begin(),a.end(),x));
        if(xx==a.end())
        {
            ans=min(ans,x-(*(xx-1)));
        }
        else if(xx==a.begin())
        {
            ans=min(ans,*xx-x);
        }
        else{
            ans=min(ans,abs(*xx-x));
            ans=min(ans,abs(*(xx-1)-x));
        }
    }
    cout<<ans<<endl;
    

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