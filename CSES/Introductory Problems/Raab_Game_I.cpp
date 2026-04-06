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
    int n,a,b;cin>>n>>a>>b;
    if((a+b)>n || (a==0&&b!=0) || (a!=0&&b==0)) 
    {
        cout<<"NO"<<endl;return;
    }
    
    cout<<"YES"<<endl;

    for(int i=1;i<=n;i++) cout<<i<<" ";
    cout<<endl;

    int s1=a,s2=b;
    vector<int> ans;
    int no=s1+1;
    for(int i=1;i<=s2;i++)
    {
        ans.push_back(no);no++;
    }
    int no2=1;
    for(int i=1;i<=s1;i++)
    {
        ans.push_back(no2);no2++;
    }

    for(int i=no;i<=n;i++)
    {
        ans.push_back(i);
    }
    for(int x:ans) cout<<x<<" ";
    cout<<endl;


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