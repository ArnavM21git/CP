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
vector<ll> palindrome;

ll rev(ll mul)
{
    ll sum=0;
    while(mul>0)
    {
        ll d=mul%10;
        sum=sum*10+d;
        mul/=10;
    }
    return sum;
}

void precomp()
{
    for(int i=100;i<=999;i++)
    {
        for(int j=i;j<=999;j++)
        {
            ll mul=i*j;
            if(rev(mul)==mul) palindrome.push_back(mul);
        }
    }
}

void solve() {
    int n;cin>>n;
    sort(palindrome.begin(),palindrome.end());
    cout<<*(lower_bound(palindrome.begin(),palindrome.end(),n)-1)<<endl;
}

int main() {
    fast_io();
    precomp();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}