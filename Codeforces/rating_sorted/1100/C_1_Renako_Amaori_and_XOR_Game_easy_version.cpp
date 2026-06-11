#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,cha=0,chb=0;cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    int xorr=0;
    for(int &i:a)
    {
        cin>>i;
        xorr^=i;
    }
    for(int &j:b)
    {
        cin>>j;
        xorr^=j;
    }
    if(xorr==0)
    {
        cout<<"Tie"<<endl;
        return;
    }
    else{
        for(int i=n-1;i>=0;i--)
        {
            if(i%2==0)
            {
                if(a[i]!=b[i])
                {
                    cout<<"Ajisai"<<endl; return;
                }
            }
            else{
                if(a[i]!=b[i])
                {
                    cout<<"Mai"<<endl; return;
                }
            }
        }
    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}