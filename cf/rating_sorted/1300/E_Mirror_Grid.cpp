#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,ans=0;cin>>n;
        vector<string> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int p1=v[i][j]-48;
                int p2=v[n-1-j][i]-48;
                int p3=v[n-1-i][n-1-j]-48;
                int p4=v[j][n-1-i]-48;
                int sum=p1+p2+p3+p4;

                ans+=min(sum,4-sum);
            }
        }
        cout<<ans<<endl;
    }
}