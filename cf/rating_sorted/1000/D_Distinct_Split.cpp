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
    string s;cin>>s;

    vector<int> pre(n);
    vector<int> suf(n);

    unordered_set<char> st;

    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
        pre[i]=st.size();
    }
    st.clear();
    for(int i=n-1;i>=0;i--)
    {
        st.insert(s[i]);
        suf[i]=st.size();
    }
    int large=INT_MIN;
    for(int i=1;i<n;i++)
    {
        large=max(large,pre[i-1]+suf[i]);
    } 
    cout<<large<<endl;

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