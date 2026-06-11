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
    int n,c1=0,cn1=0;cin>>n;
    ll ops=0,sum=0;
    vector<int> v(n);
    for(auto &a:v)
    {
        cin>>a;
        sum+=a;
        if(a==1) c1++;
        if(a==-1) cn1++;
    }

    if(cn1%2!=0)
    {
        ops++;
        sum=sum+2;
    } 
    while(sum<0)
    {
        ops+=2;
        sum+=4;
    }
    cout<<ops<<endl;





}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}