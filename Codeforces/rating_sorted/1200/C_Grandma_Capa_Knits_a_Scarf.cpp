#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    int n;
    
cin>>n;
string s;cin>>s;
int mnod=INT_MAX;
bool flag2=false;
for(char ch='a';ch<='z';ch++)
{
    int l=0;
    int r=s.size()-1;
    int dc=0;
    bool flag=true;
    while(l<r)
    {
        if(s[l]==s[r])
        {
            l++;r--;
        }
        else if(s[l]==ch)
        {
            dc++;
            l++;
        }
        else if(s[r]==ch)
        {
            dc++;
            r--;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)
    {
        flag2=true;
        mnod=min(mnod,dc);
    }
}
if(flag2)
{
    cout<<mnod<<endl;
}
else {
    cout<<-1<<endl;
}}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}