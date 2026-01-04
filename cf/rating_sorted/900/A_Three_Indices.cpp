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
    for(int j=1;j<n-1;j++)
    {
        int pos1=-1,pos3=-1,pos2;
        for(int i=j-1;i>=0;i--)
        {
            if(a[j]>a[i]) pos1=i;
        }
        for(int k=j+1;k<n;k++)
        {
            if(a[j]>a[k]) pos3=k;
        }
        if(pos1!=-1&&pos3!=-1)
        {
            pos2=j;
            cout<<"YES"<<endl<<pos1+1<<" "<<pos2+1<<" "<<pos3+1<<endl;
            return;
        }
    }

    
     cout<<"NO"<<endl;
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