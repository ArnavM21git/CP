#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,cmax=0,cmin=0;cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            ll redmax=cmax-a[i];
            ll bluemax=b[i]-cmin;
            ll redmin=cmin-a[i];
            ll bluemin=b[i]-cmax;

            cmax=max(redmax,bluemax);
            cmin=min(redmin,bluemin);
        }
        cout<<cmax<<endl;
    }
}