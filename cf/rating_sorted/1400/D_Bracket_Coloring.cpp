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
    int n;cin>>n;
    string s;cin>>s;
    int c=0,o=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='(') o++;
        else c++;
    }
    if(c!=o) {cout<<-1<<endl;return;}

    stack<char> st1;
    bool flag1=1;
    for(char ch:s) 
    {
        if(ch=='(') st1.push(ch);
        else{
            if(st1.empty()) {flag1=0;break;}
            st1.pop();
        }
    }
    bool flag2=1;
    stack<char> st2;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='(') st2.push(s[i]);
        else{
            if(st2.empty()) {flag2=0;break;}
            st2.pop();
        }
    }

    if(flag1||flag2)
    {
        cout<<1<<endl;
        for(int i=0;i<n;i++) cout<<1<<" ";
        cout<<endl;
    }
    else{
        vector<int> ans;
        cout<<2<<endl;
        int bal=0;
        for(char ch:s)
        {
            if(ch=='(')
            {
                if(bal>=0) ans.push_back(1);
                else ans.push_back(2);
                bal++;
            }
            else{
                if(bal<=0) ans.push_back(2);
                else ans.push_back(1);
                bal--;
            }
        }
        for(int &x:ans) cout<<x<<" ";
        cout<<endl;
    }

    
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