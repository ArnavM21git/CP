#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,c=0,wake=-1;cin>>n>>k;
        string s(n,'x');cin>>s;
        
        for(int i=0;i<s.length();i++)
        {
            if(i<=wake&&s[i]=='0')
            {
                continue;
            }
            if(s[i]=='1')
            {
                wake=i+k;
            }
            else{c++;}
        }
        cout<<c<<endl;
    }
}