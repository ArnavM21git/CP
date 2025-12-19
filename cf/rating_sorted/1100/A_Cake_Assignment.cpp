#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll k,x;cin>>k>>x;
    ll temp_x=x;
    ll tzeroes=0;
    while((temp_x&1)==0&&temp_x!=0)
    {
        tzeroes++;
        temp_x>>=1;
    }
    //or ll zeroes=__builtin_ctzll(x);
    cout<<k-tzeroes<<endl;;
    for(ll i=tzeroes+1;i<=k;i++)
    {
        if((x>>i)&1)
        {
            cout<<2<<" ";
        }
        else cout<<1<<" ";
    }
    cout<<endl;

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}