#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int &a:v)
    {
        cin>>a;
    }
    if(k==1)
    {
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    else{
        cout<<"yes"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}