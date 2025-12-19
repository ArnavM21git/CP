#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int z=1;z<=n;z++)
    {
        
        cin>>v[z];
        
    }
    int N=v.size()-1;
    long long c=0;
    for(int i=1;i<=N-1;i++)
    {
        int t=log2(N-i);
        c+=v[i];
        v[i+(int)pow(2,t)]+=v[i];
        
        cout<<c<<endl;   
    }
        
}
