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

void solve() {
    string s;cin>>s;
    ll n=s.size();
    map<char,int> m;
    for(char ch:s)
    {
        m[ch]++;
    }
    int flag=0;
    char ch;
    for(auto &it:m)
    {
        if((it.second)%2!=0)
        {
            if(flag==1) 
            {
                flag=2;break;
            }
            else 
            {
                flag++; ch=it.first;
            }
        }
    }
    if(flag==2) {cout<<"NO SOLUTION"<<endl;return;}

    string nw(n,' ');
    int l=0,r=n-1;
    if(flag==1)
    {
        nw[n/2]=ch;m[ch]--;
        for(auto &it:m)
        {
            if(it.second%2==0)
            {
                for(int i=1;i<=it.second/2;i++)
                {
                    nw[l]=it.first;l++;
                    nw[r]=it.first;r--;
                }
            }
        }
    }
    else{
        for(auto &it:m)
        {
            if(it.second%2==0)
            {
                for(int i=1;i<=it.second/2;i++)
                {
                    nw[l]=it.first;l++;
                    nw[r]=it.first;r--;
                }
            }
        }
    }
    cout<<nw;
}

int main() {
    fast_io();
    int t = 1;
 
    while (t--) {
        solve();
    }
    return 0;
}