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
    int n;cin>>n;
    vector<pair<int,int>> b(n);// times:building

    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        b[i]={x,i};
    }

    sort(b.rbegin(),b.rend());

    vector<int> ans(n+1);

    ans[0]=0;
    ll min=0;
    long long c = 1;
    for(int i=0;i<n;i++)
    {
        ans[b[i].second+1]=c;
        min += (2 * abs(c) * b[i].first);
        if (c < 0)
				c = abs(c) + 1;
		else
				c = -c;
    }
    cout << min << endl;

		for (auto it : ans)
			cout << it << " ";
		cout << endl;


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