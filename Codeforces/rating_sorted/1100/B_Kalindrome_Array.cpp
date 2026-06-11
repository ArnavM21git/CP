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

bool check(const vector<int> &a,int x)
{
    int l=0,r=a.size()-1;
    while(l<r)
    {
        if(a[l]==x) l++;
        else if (a[r]==x) r--;
        else if(a[l]!=a[r]) return false;
        else {l++;r--;}
        
    }
    return true;
}

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int l=0,r=n-1;
    while(l<r)
    {
        if(a[l]!=a[r])
        {
            bool f1=check(a,a[l]);
            bool f2=check(a,a[r]);

            if(f1||f2)
            {
                cout<<"YES"<<endl;return;
            }
            else {
                cout<<"NO"<<endl;return;
            }
        }
        l++;r--;
    }
    cout<<"YES"<<endl;
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