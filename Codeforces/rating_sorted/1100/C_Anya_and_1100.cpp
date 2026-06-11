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
    string s;cin>>s;int c=0;
    int q;cin>>q;
    int n = s.size();
    for(int i=0;i<s.size()-3;i++)
    {
        string f=s.substr(i,4);
        if(f=="1100") c++;
    }

    while(q--) 
    {
        int i,v;cin>>i>>v;i--;
        if(c>0 && s[i]==v+48)
        {
            cout<<"YES"<<endl;continue;
        }
    
            if (i <= n - 4 && s.substr(i, 4) == "1100") c--;
            if(i-1>=0&&i-1<n-3&&s.substr(i-1,4)=="1100") c--;
            if(i-2>=0&&i-2<n-3&&s.substr(i-2,4)=="1100") c--;
            if(i-3>=0&&i-3<n-3&&s.substr(i-3,4)=="1100") c--;


        s[i]=v+48;

           if (i <= n - 4 && s.substr(i, 4) == "1100") c++;
            if(i-1>=0&&i-1<n-3&&s.substr(i-1,4)=="1100") c++;
            if(i-2>=0&&i-2<n-3&&s.substr(i-2,4)=="1100") c++;
            if(i-3>=0&&i-3<n-3&&s.substr(i-3,4)=="1100") c++;
        if(c<=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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