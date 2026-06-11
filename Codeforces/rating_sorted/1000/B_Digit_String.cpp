#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using vi = vector<int>;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

template<typename K, typename V>
using fast_o_map = gp_hash_table<K, V, custom_hash>;

typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    string a;cin>>a;int n=a.size();
    vector<ll> pre(n,0);
    if(a[0]=='2') pre[0]=1;
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+((a[i]=='2')?1:0);
    }
    vector<ll> suff(n,0);
    if(a[n-1]=='1'||a[n-1]=='3') suff[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        suff[i]=suff[i+1]+((a[i]=='1'||a[i]=='3')?1:0);
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        if(mx<pre[i]+suff[i]) mx=pre[i]+suff[i];
    }
    cout<<n-mx<<endl;
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