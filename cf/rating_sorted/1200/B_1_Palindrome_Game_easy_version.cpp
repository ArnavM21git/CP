#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int  n,c=0,b=0;cin>>n;string s;cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            c++;
        }
        
    }
    if(c==1)
        {
            cout<<"BOB"<<endl;
        }
        else if(c%2==0)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"ALICE"<<endl;
        }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}