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
        vector<int> a(n);
        for(auto &x:a) cin>>x;
        vector<ll> pre_abs(n,0);
        for(int i=1;i<n;i++)
        {
            pre_abs[i]=pre_abs[i-1]+abs(a[i-1]);
        }
        vector<ll> suff(n,0);
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=suff[i+1]+a[i+1];
        }
        ll mx=accumulate(a.begin(),a.end(),0LL);
        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0&&mx<(pre_abs[i]-a[i]+suff[i]))
                mx=pre_abs[i]-a[i]+suff[i],pos=i;
        }
        if(pos==-1) {cout<<0<<endl;cout<<endl;return;}
        int z=0;
        vector<int> ans;
        for(int i=pos-1;i>=0;i--)
        {
            int m=(z%2==0)?1:-1;
            if(a[i]*m>0) ans.push_back(i),z++;
        }
        ans.push_back(pos);
        cout<<ans.size()<<endl;
        for(int &x:ans) cout<<x+1<<" ";
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