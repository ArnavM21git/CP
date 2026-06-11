#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;cin>>n;
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        int a;cin>>a;
        sum+=a;
    }
    cout<<-(sum)<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}