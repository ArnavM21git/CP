#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    
    int c = 0;
    
 
    while (x.size() < s.size())
     {
        x += x;
        c++;
    }


    if (x.find(s) != string::npos) 
    {
        cout << c << endl;
        return;
    }

   
    x += x;
    c++;
    
    if (x.find(s) != string::npos) 
    {
        cout << c << endl;
        return;
    }


    cout << -1 << endl;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}