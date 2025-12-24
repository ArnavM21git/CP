#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; 
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (__gcd(v[i], v[j]) <= 2) {
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(found) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}