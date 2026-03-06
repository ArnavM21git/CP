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
    string a,b;cin>>a>>b;
    int c0=0;int c1=0;
    vector<bool> canflip(n);
    bool flip=false,flag=true;
    for(int i=0;i<n;i++)
    {
        char ch=a[i];
        if(ch=='0') c0++;
        if(ch=='1') c1++;
        if(c0==c1) canflip[i]=true;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(flip==false)
        {
            if(a[i]!=b[i])
            {
                if(canflip[i])
                {
                    flip=true;
                }
                else 
                {
                    flag=false;break;
                }
            }
        }
        else{
            if(a[i]==b[i])
            {
                if(canflip[i])
                {
                    flip=false;
                }
                else{
                    flag=false;break;
                }
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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