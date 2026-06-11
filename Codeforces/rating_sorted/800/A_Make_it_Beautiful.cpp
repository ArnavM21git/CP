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
        int n;cin>>n;
        vector<int> v(n);
        for(auto &a:v)
        {
            cin>>a;
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1])
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            swap(v[1],v[n-1]);
            for(int a:v)
            {
                cout<<a<<" ";
            }
            cout<<endl;
        }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}