#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        unordered_map<int,int> m;
        int n,g=1;
        cin>>n;
        while(n--)
        {
            int no;
            cin>>no;
            m[no]++;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            
            if(v[i+1]!=v[i]+1)
            {
                
                    g++;
            }
        }
        cout<<g<<endl;
    }
}