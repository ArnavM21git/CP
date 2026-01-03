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

int minop(string x,string n)
{
    int in=x.size()-1;
    int ops=0;
    for(int i=n.size()-1;i>=0;i--)
    {
        if(n[i]==x[in])
        {
            in--;
            if(in<0) break;
        }
        else{
            ops++;
        }
    }
    return ops;
}

void solve() {
    string n;cin>>n;
    vector<string> v={"00","25","75","50"};
    int opss=INT_MAX;
    for(string x:v)
    {
        opss=min(opss,minop(x,n));
    // int in=x.size()-1;
    // int ops=0;
    // for(int i=n.size()-1;i>=0;i--)
    // {
    //     if(n[i]==x[in])
    //     {
    //         in--;
    //         if(in<0) break;
    //     }
    //     else{
    //         ops++;
    //     }
    // }
    // opss=min(opss,ops);
    }
    cout<<opss<<endl;
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