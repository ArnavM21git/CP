#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;                 
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; ++i) cin >> b[i];

       
        set<int> distinct;
        for (int x : b) distinct.insert(x);

        cout << (int)distinct.size() << '\n';
    }
    return 0;
}
