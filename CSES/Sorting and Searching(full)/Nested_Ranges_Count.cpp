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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// 1. Typedefs for faster typing
using ll = long long;
using vi = vector<int>;

// ----- PBDS -----
typedef tree<
    int,
    null_type,
    less_equal<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;

// Functions:
// find_by_order()
// order_of_key()

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
    vector<pair<pair<int,int>,int>> a(n);
    for(int i=0;i<n;i++)
    {
        int x,y;cin>>x>>y;
        a[i]={{x,y},i};
    }
    sort(a.begin(),a.end(),[](pair<pair<int,int>,int> x,pair<pair<int,int>,int> y)
    {
        if(x.first.first!=y.first.first) return x.first.first<y.first.first;
        return x.first.second>y.first.second;
    });
    vector<int> ans1(n,0),ans2(n,0);
    
    ordered_set l;
    for(int i=0;i<n;i++)
    {
        int no=l.order_of_key(a[i].first.second);
        ans1[a[i].second]=l.size()-no;
        l.insert(a[i].first.second);
    }

    ordered_set r;
    for(int i=n-1;i>=0;i--)
    {
        int no=r.order_of_key(a[i].first.second+1);//+1 as  used less_equal<int>
        ans2[a[i].second]=no;
        r.insert(a[i].first.second);
    }

    for(int &x:ans2) cout<<x<<" ";
    cout<<endl;
    for(int &x:ans1) cout<<x<<" ";
}

int main() {
    fast_io();
    int t = 1;
    
    while (t--) {
        solve();
    }
    return 0;
}