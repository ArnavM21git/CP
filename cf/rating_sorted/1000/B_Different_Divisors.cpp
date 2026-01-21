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

ll nearprimeno(int dpo)
{
    for(int i=dpo;;i++)// betwenn 2 conse prime no nth and n+1th diff=loge(nth pno)
    {
        bool ispr=true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                ispr=false;
                break;
            }
        }
        if(ispr) return i;
    }
}

void solve() {
    int d;cin>>d;
    int pr=d+1;
    ll mn;
    ll p=nearprimeno(d+1);
    ll q=nearprimeno(d+p);
    mn=min((ll)pow(p,3),p*q);
    cout<<mn<<endl;
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