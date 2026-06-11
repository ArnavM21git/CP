#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    vector<pair<char,int>> v;

    char cc=s[0];
    int ccc=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==cc)
        {
            ccc++;
        }
        else{
            v.push_back({cc,ccc});
            cc=s[i];
            ccc=1;
        }
        
    }
    v.push_back({cc,ccc});

    if(v.size()%2==0)
    {
        cout<<0;
    }
       else{
        int mid=v.size()/2;
        if(v[mid].second<2)
        {
            cout<<0;
            
        }
        else{
        int lci=mid-1;
        int rci=mid+1;
        while(lci>=0)
        {
            if(v[lci].first!=v[rci].first)
            {
                cout<<0;
                return 0;
            }
            if(v[lci].second+v[rci].second<3)
            {
                cout<<0;
                return 0;
            }
            lci--;
            rci++;
        }
        cout<<v[mid].second+1<<endl;
    }
       
    }
}