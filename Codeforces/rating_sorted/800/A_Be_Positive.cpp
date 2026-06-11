#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,c=0,mul=1;cin>>n;
    vector<int> v(n);
    while(n--)
    {
        int a;cin>>a;
        if(a==0)
        {
            c++;
            a++;
            
        }
        mul*=a;
    }
    if(mul<0)
    {
        c+=2;
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