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

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;cin>>n;string s;cin>>s;
    for(char ch1='a';ch1<='z';ch1++)
    {
        if(s.find(ch1)==string::npos)
        {
            cout<<ch1<<endl;return;
        }
    }
    
    for(char ch1='a';ch1<='z';ch1++)
    {
        for(char ch2='a';ch2<='z';ch2++)
        {
            string temp="";
            temp.push_back(ch1);temp.push_back(ch2);
            if(s.find(temp)==string::npos)
            {
                cout<<temp<<endl;return;
            }
        }
    }

    for(char ch1='a';ch1<='z';ch1++)
    {
    for(char ch2='a';ch2<='z';ch2++)
    {
    for(char ch3='a';ch3<='z';ch3++)
    {
        string temp="";
        temp.push_back(ch1);
        temp.push_back(ch2);
        temp.push_back(ch3);
        if(s.find(temp)==string::npos)
        {
            cout<<temp<<endl;return;
        }
    }
    }
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