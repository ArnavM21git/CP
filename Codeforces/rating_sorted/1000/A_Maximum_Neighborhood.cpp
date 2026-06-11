#include<bits/stdc++.h>
using namespace std;
using ll=long long;

 int main()
 {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        
        ll a=n*n+n*n-n+n*n-1;
        ll b=n*n-1+n*n-2+n*n-1-n+n*n;
        ll c=n*n-1-n+n*n-1+n*n-1-n-1+n*n-1-n-n+n*n-1-n+1;

        ll cmax=max(a,max(b,c));
        if(n==2)
        {
            cout<<9<<endl;
        }
        else{
        cout<<cmax<<endl;
        }
    }
 }