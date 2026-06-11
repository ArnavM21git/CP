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
const int N = 1e6 + 10;
vector<bool> is_prime(N,1);
map<ll,ll> count;
vector<ll> lp(N,0),hp(N,0);


void sieve(){
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2; i < N; i++){
        if(is_prime[i])
        {
            lp[i]=hp[i]=i;
            for(int j = 2 * i; j < N; j += i)
            {
                is_prime[j] = 0;
                hp[j]=i;
                if(lp[j]==0)
                    lp[j]=i;
            }

        }
    }
}

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {

int n;cin>>n;
vector<int> a(n);
for(auto &x:a) cin>>x;
map<int,int> pfacts;
for(int x:a)
{
    while(x>1)
    {
        int pf=hp[x];
        while(x%pf==0)
        {
        x/=pf;
        pfacts[pf]++;
        }
    }

}

for(auto it:pfacts)
{
    if(it.second%n!=0) 
    {
        cout<<"NO"<<endl;return;
    }
}
cout<<"YES"<<endl;
    
}

int main() {
    fast_io();
    int t = 1;
    sieve();
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}