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
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    if(a[n-1]<a[n-2]) {cout<<-1<<endl;return;}

    if(is_sorted(a.begin(),a.end())) {cout<<0<<endl;return;}

    if(a[n-1]>=0)
    {
        cout<<n-2<<endl;
        for(int i=0;i<n-2;i++)
        {
            cout<<i+1<<" "<<n-1<<" "<<n<<endl;
        }
    }
    else{
        cout<<-1<<endl;
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