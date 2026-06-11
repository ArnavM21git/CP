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
    int n,c2=0;cin>>n;
    vector<int> v(n);
    for(auto &a:v)
    {
        cin>>a;
        if(a==2) c2++;
    }
    if(c2%2!=0) 
    {
        cout<<-1<<endl;
    }
    else{
        int k=c2/2,ca2=0;
        for(int j=0;j<n;j++)
        {
            if(v[j]==2)
            {
                ca2++;
            }
            if(ca2==k)
            {
                cout<<j+1<<endl;
                return;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}