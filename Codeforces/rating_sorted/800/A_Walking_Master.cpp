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

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a,b,c,d;cin>>a>>b>>c>>d;
    int s=0;
    if(b>d) 
    {
        cout<<-1<<endl; return;
    }
    while(b<d)
    {
        a++;
        s++;
        b++;
    }
    if(c>a) {cout<<-1<<endl; return;}
    while(a!=c)
    {
        s++;
        a--;
    }
    cout<<s<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}