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
    int n;cin>>n;
    vector<pair<ll,ll>> a(n);
    for(auto &x:a) 
    {
        ll p,q;cin>>p>>q;x={p,q};
    }
    sort(a.begin(),a.end());
    ll dur=0;ll r=0;
    for(auto &[du,de]:a)
    {
        dur+=du;
        r+=de-dur;
    }
    cout<<r;
}

int main() {
    fast_io();
    int t=1;
    while (t--) {
        solve();
    }
    return 0;
}