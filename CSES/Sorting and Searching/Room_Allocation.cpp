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
    less<int>,
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

struct customer{
    int a;int d;int idx;
};

void solve() {
    int n;cin>>n;
    vector<customer> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].a>>a[i].d;
        a[i].idx=i;
    }
    sort(a.begin(),a.end(),[](customer &x,customer &y)
    {
        return x.a<y.a;
    });

    multiset<pair<int,int>> r;//dep,rno
    vector<int> ans(n);
    int room=1;
    for(int i=0;i<n;i++)
    {
        if(a[i].a>r.begin()->first && !r.empty())
        {
            int rno=r.begin()->second;
            r.erase(r.begin());
            r.insert({a[i].d,rno});
            ans[a[i].idx]=rno;
        }
        else{
            ans[a[i].idx]=room;
            r.insert({a[i].d,room++});
            
        }
    }
    cout<<room-1<<endl;
    for(int &x:ans) cout<<x<<" ";

}

int main() {
    fast_io();
    int t = 1;
    
    while (t--) {
        solve();
    }
    return 0;
}