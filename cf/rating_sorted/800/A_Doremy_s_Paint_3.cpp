#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        m[a]++;
    }
    if(m.size()>2)
    {
        cout<<"No"<<endl;
        return;
    }
    else{
        int c1=m.begin()->second;
        int c2=m.rbegin()->second;
        if(abs(c1-c2)<=1)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
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