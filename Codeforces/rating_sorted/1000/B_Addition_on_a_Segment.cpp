#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0;
        vector<int> b(n);
        for(int &a:b)
        {
            cin>>a;
            sum=sum+a;
        }
        ll max_width=sum-n+1;

        ll nz=n-count(b.begin(),b.end(),0);

        ll mini=min(max_width,nz);

        cout<<mini<<endl;
    }
}