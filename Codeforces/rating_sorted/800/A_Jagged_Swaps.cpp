#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,mini=INT_MAX;cin>>n;
    vector<int> v(n);
    for(int &a:v)
    {
        cin>>a;
        if(a<mini)
        {
            mini=a;
        }
    }

    if(v[0]==mini)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}