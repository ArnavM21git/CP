#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,t,d=0;cin>>n>>t;
    while(n--)
    {
    int a;cin>>a;
    
    int rem_after_work=86400-a;

    if(t==0)
    {
       break;
    }

    else if(t>=rem_after_work)
    {
        t-=rem_after_work;
        d++;
    }

    else
    {
        d++;
        break;
    }
    
    }
    cout<<d;
}

int main() {
    
        solve();
    
}