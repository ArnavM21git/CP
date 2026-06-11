#include<bits/stdc++.h>
using namespace std;
void solve()

{
int n;cin>>n;
int msb =log2(n-1);
int st=pow(2,msb)-1;
while(st>=0)

{
    cout<<st<<" ";
    st--;
}


int nxtst=pow(2,msb);

while(nxtst<=n-1)
{
    cout<<nxtst<<" ";
    nxtst++;
}
cout<<endl;

}
int main()


{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}