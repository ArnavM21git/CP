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
    int n=s.size();
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            for(int j=0;j<26;j++)
            {
                char ch=97+j;
                if(s[i]==s[i+1]&&(i+1)<n)
                {
                if(ch!=s[i-1]&&ch!=s[i+1] && i+1<n )
                {
                    s[i]=ch;break;
                }
                }
                else{
                    if(ch!=s[i-1]&&ch!=s[i+1] && i+1<n)
                {
                    s[i]=ch;break;
                }
                }
                
            }
        }
    }
    if(s[n-1]==s[n-2])
    {
        if(s[n-1]=='a')
        {
            s[n-1]='a'+1;
        }
        else if(s[n-1]=='z') s[n-1]='z'-1;
        else s[n-1]=s[n-1]-1;
    }
    cout<<s;
}

int main() {
    fast_io();
    int t = 1;
   
    while (t--) {
        solve();
    }
    return 0;
}