// INT_MAX        // int
// INT_MIN

// LONG_MAX       // long
// LONG_MIN

// LLONG_MAX      // long long
// LLONG_MIN

// UINT_MAX       // unsigned int
// ULONG_MAX      // unsigned long
// ULLONG_MAX     // unsigned long long
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;cin>>n;
    int mini=INT_MAX;
    while(n--)
    {
        int a;cin>>a;
        if((abs(a))<mini)
        {
            mini=abs(a);
        }
    }
    cout<<mini<<endl;
}

int main() {

        solve();
    
}