#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

ll sum=0;
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        char c;cin>>c;
        if(c=='X')
        {
            int minix=min(i,9-i);
            int miniy=min(j,9-j);
            int mini=min(minix,miniy);
            sum+=mini+1;
        }
    }
}
cout<<sum<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}