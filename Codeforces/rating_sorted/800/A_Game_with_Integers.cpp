#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;cin>>n;
    if((n-1)%3==0||(n+1)%3==0)
    {
        cout<<"First"<<endl;
        return;
    }
    cout<<"Second"<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}