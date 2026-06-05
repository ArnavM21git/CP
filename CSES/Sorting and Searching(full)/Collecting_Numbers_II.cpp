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
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<int> pos(n+2);
    for(int i=0;i<n;i++)
    {
        pos[a[i]]=i;
    }
    ll c=1;
    pos[0]=-1;
    pos[n+1]=n+1;
    for(int x:a)
    {
        if(pos[x]<pos[x-1]) c++;
    }
    while(m--)
    {
        int x,y;cin>>x>>y;
        int v1=a[x-1],v2=a[y-1];
        set<int> s;
        s.insert(v1);s.insert(v1+1);
        s.insert(v2);s.insert(v2+1);
        for(int x:s) if(pos[x]<pos[x-1]) c--;
        swap(a[x-1], a[y-1]);
        swap(pos[v2],pos[v1]);
        
        for(int x:s) if(pos[x]<pos[x-1]) c++;
        cout<<c<<endl;
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