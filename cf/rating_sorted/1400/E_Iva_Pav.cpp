// ================== LIMITS REFERENCE ==================
// INT_MAX        // int
// INT_MIN
//
// LONG_MAX       // long
// LONG_MIN
//
// LLONG_MAX      // long long
// LLONG_MIN
//
// UINT_MAX       // unsigned int
// ULONG_MAX      // unsigned long
// ULLONG_MAX     // unsigned long long
// ======================================================

#include <bits/stdc++.h>
using namespace std;

// 1. Typedefs for faster typing
using ll = long long;
using vi = vector<int>;

// ----- SIEVE TEMPLATE -----
// TC: O(n log log n)
// const int N = 1e7 + 10;
// vector<bool> is_prime(N,1);
//
// void sieve(){
//     is_prime[0] = is_prime[1] = 0;
//     for(int i = 2; i < N; i++){
//         if(is_prime[i])
//             for(int j = 2 * i; j < N; j += i)
//                 is_prime[j] = 0;
//     }
// }

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}




void precomp(vector<int> &a,vector<vector<int>> &pre)
{
    for(int j=0;j<a.size();j++)
    {
        for(int i=0;i<30;i++)
        {
             pre[i][j+1]=pre[i][j];
            
            if(!(1<<i&a[j])) pre[i][j+1]++;
        }
    }
}

bool checkat(int l,int m,vector<vector<int>> &pre,int k)
{
    ll sum=0;
    for(int i=0;i<30;i++)
    {
        if(pre[i][m+1]-pre[i][l]==0) sum+=(1LL<<i);
    }
    if(sum>=k) return true;
    else return false;
}

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<vector<int>> pre(30,vector<int> (n+1));
    precomp(a,pre);
    int q;cin>>q;
    while(q--)
    {
        int l,k;cin>>l>>k;l--;
        int r=n-1;

        if(a[l]<k) {cout<<-1<<" ";continue;}

        int res=0;
        int lo=l;
        while(lo<=r)
        {
            int m=(r-lo)/2+lo;
            if(checkat(l,m,pre,k))
            {
                res=max(res,m);
                lo=m+1;
            }
            else{
                r=m-1;
            }
        }
        cout<<res+1<<" ";
    }
    cout<<endl;
}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}