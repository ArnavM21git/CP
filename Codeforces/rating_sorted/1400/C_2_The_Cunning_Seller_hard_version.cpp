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

//-----sieve-----
const int N = 1e7 + 10;
vector<bool> is_prime(N,1);

void sieve(){
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2; i*i < N; i++){
        if(is_prime[i])
            for(int j = i*i; j < N; j += i)
                is_prime[j] = 0;
    }
}

// 1. Typedefs for faster typing
using ll = long long;
using vi = vector<int>;

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
ll power(int ,int);

void solve() {
    ll n,k;cin>>n>>k;

    if(k>=n)
    {
        cout<<3*n<<endl;return;
    }

    ll temp=n;
    vector<ll> base3;
    while(temp>0)
    {
        ll y=temp%3;
        base3.push_back(y);
        temp/=3;
    }

    ll sum=0;
    for(ll x:base3) sum+=x;

    if(sum>k)
    {
        cout<<-1<<endl;return;
    }

    ll ext=k-sum;
    for(int i=base3.size()-1;i>0;i--)
    {
        if(ext<2) break;
        
        ll realext=ext/2;

        ll x=min(base3[i],realext);
        base3[i]-=x;
        base3[i-1]+=3*x;
        ext-=x*2;
    }

    ll cost=0;

    for(int i=0;i<base3.size();i++)
    {
        if(i==0)
        {
            cost+=base3[i]*(ll)(power(3,i+1));
        }
        else
        cost+=base3[i]*(power(3,i+1)+i*power(3,i-1));
    }

    cout<<cost<<endl;

}

ll power(int n,int i)
{
    ll res=1;
    while(i--)
    {
        res*=n;
    }
    return res;
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