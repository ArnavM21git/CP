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

bool exro(ll a)
{
    int c0=0,cd=0;
    while(a>0)
    {
    if(a%10==0) c0++;
    cd++;
    a/=10;
    }
    return c0==(cd-1);
}

void solve(vector<int> v) {
    int n;cin>>n;
    int i=0,c=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=n) c++;
    }
    cout<<c<<endl;
}

int main() {
    vector<int> v;
    for(ll i=1;i<=999999;i++)
    {
        if(exro(i))
        {
            v.push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--) {
        solve(v);
    }
}