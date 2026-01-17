#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    int mn=min(x,y);
    cout<<0<<" "<<0<<" "<<mn<<" "<<mn<<endl;
    cout<<0<<" "<<mn<<" "<<mn<<" "<<0<<endl;
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}