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

bool is_poss(char c,vector<int> &a,int i)
{
    int mx=*max_element(a.begin(),a.end());
    if(mx>(i+1)/2) return false;
    else return true;
}

void solve() {
    string s;cin>>s;
    int n=s.size();
    vector<int> a(26,0);
    int mx=0;
    for(char ch:s) 
    {
        a[ch-65]++;
        if(mx<a[ch-65]) mx=a[ch-65];
    }
    if(mx>(n+1)/2) {cout<<-1;return;}

    string ans="";
    char prev='#';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
        {
            char c=j+'A';
            
            if(c!=prev && a[c-65]>0)
            {
                a[c-65]--;
                if(is_poss(c,a,n-i-1))
                {
                ans.push_back(c);
                prev=c;
                break;
                }
                else a[c-65]++;
            }
            

        }
    }
    cout<<ans;


    
}

int main() {
    fast_io();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}