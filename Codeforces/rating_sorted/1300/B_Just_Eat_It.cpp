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
    ll sum=0;
    for(auto &x:a)
    {
        cin>>x;sum+=x;
    } 
    

    ll gsum1 = a[0];
    ll csum1 = 0;
    for(int i=0;i<n-1;i++)
    {
        csum1+= a[i];
        gsum1= max(gsum1,csum1);

        if(csum1<0)
        csum1=0;
    }


    ll gsum2=a[0];
    ll csum2=0;
    for(int i=1;i<n;i++)
    {
        csum2+=a[i];
        gsum2=max(gsum2,csum2);
        if(csum2<0) csum2=0;
    }



    ll gsum=max(gsum1,gsum2);
    if(gsum>=sum)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

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