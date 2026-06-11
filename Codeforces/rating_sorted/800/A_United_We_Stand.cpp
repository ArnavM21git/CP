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
    vector<int> a(n);
    vector<int> b;
    vector<int> c;
    for(auto &x:a)
    {
        cin>>x;
    }
    int maxx=*max_element(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]==maxx)
        {
            c.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
        }
    }
    if(b.size()!=0&&c.size()!=0)
    {
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto &x:b)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto &y:c)
        {
            cout<<y<<" ";
        }
        cout<<endl;

    }
    else{
        cout<<-1<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}