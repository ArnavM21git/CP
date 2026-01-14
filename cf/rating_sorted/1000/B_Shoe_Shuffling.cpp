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
    vector<int > s(n);
    for(auto &x:s) cin>>x;

map<int,int> m;
    for(int x:s)
    {
        m[x]++;
    }
    for(auto it:m)
    {
        if(it.second==1)
        {
            cout<<-1<<endl;
            return;
        }
    }
    int l=0,r=0;
    vector<int> st(n);
    for(int i=0;i<n;i++)
    {
        st[i]=i+1;
    }
    while(r<n)
    {
        if(s[l]==s[r]) r++;
        else{
            rotate(st.begin()+l,st.begin()+l+1,st.begin()+r);
            l=r;
        }
    }
    rotate(st.begin()+l,st.begin()+l+1,st.begin()+r);
    for(int x:st)
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