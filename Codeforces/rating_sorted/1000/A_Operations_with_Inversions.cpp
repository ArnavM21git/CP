#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,c=0,max=-1;cin>>n;
    vector<int>v(n);
    for(int &a:v)
    {
        cin>>a;
    }
    
    for(int i:v)
    {
        if(i<max)
        {
            c++;
        }
        else{
            max=i;
        }
    }


    cout<<c<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}