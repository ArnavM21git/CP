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

    // 2. Fast I/O (crucial for competitive programming)
    void fast_io() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }

    void solve() {
        int n,m,h;cin>>n>>m>>h;
        vector<int> a(n),b(n);
        for(auto &x:a) cin>>x;
        b=a;
        vector<int> hi;
        while(m--)
        {
            int bi,ci;cin>>bi>>ci;
            bi--;
            int newv=a[bi]+ci;
            if(newv>h)
            {
                for(int i:hi)
                {
                    a[i]=b[i];
                }
                hi.clear();
            }
            else{
                hi.push_back(bi);
                a[bi]=newv;
            }
        }
        for(int x:a)
        {
            cout<<x<<" ";
        }
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