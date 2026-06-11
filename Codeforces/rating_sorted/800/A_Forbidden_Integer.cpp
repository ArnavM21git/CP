#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,x,c=0,p;cin>>n>>k>>x;
    if(x!=1)
    {
        int i=n;
        cout<<"YES"<<endl;
        cout<<i<<endl;
        while(n--)
        {
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    if(k==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==0)
    {
        cout<<"YES"<<endl;
        int z=n/2;
        cout<<z<<endl;
        while(z--)
        {
            cout<<2<<" ";
            
        }
        cout<<endl;
        return;
    }
    if(k>=3)
    {
        cout<<"YES"<<endl;
        int c2=(n/2)-1;
        cout<<c2+1<<endl;
        while(c2--)
        {
            cout<<2<<" ";
        }
        cout<<3<<" ";
        cout<<endl;
        return;
        
    }
    cout<<"NO"<<endl;


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}