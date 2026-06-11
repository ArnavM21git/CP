#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v;
        while(n--)
        {
            
            int no;
            cin>>no;
            v.push_back(no);
        }

        unordered_set<int> s(v.begin(),v.end());
            int u=s.size();
            while(s.find(u)==s.end())
            {
            u++;
            }

        cout<<u<<endl;
    }
}