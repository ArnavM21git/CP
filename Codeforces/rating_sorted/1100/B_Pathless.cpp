#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,ta,c0=0,c1=0,c2=0,sum=0;cin>>n>>ta;
    vector<int> a(n);
    for(int &x:a)
    {
        cin>>x;
        sum+=x;
        if(x==0) c0++;
        if(x==1) c1++;
        if(x==2) c2++;
    }

    if(sum>ta)
    {
    for(int &x:a)    
    {
        cout<<x<<' ';
    }
    cout<<endl;
    return;
    }
    else if(sum==ta)
    {
        cout<<-1<<endl;
        return;
    }
    else if(sum==ta-1)
    {
        for(int i=0;i<c0;i++) cout<<0<<" ";
        for(int i=0;i<c2;i++) cout<<2<<" ";
        for(int i=0;i<c1;i++) cout<<1<<" ";
        cout<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
        return;
    }

        
    }



int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}