#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll x,ll y)
{
    if(y==0)
    {
        return x;
    }
    else{
        return gcd(y,x%y);
    }
}

void solve() 
{
    ll n;cin>>n;
    ll mini=LLONG_MAX;
    bool found=false;
    while(n--)
    {
        ll a;cin>>a;
        ll x=2;
        while(true)
        {
        if(gcd(x,a)==1)
        {
            mini=min(mini,x);
            found=true;
        }
        x++;
        if(x>53) break;
    }
    }
        
    
    if(!found)
        {
          cout<<-1<<endl;
        }
        else{
            cout<<mini<<endl;
        }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}