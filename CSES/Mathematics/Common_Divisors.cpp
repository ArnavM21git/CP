#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> freq(MAX + 1, 0);

    while (n--) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int d = MAX; d >= 1; d--) {
        int cnt = 0;

        for (int j = d; j <= MAX; j += d) {
            cnt += freq[j];
            if (cnt >= 2) { 
                cout << d << '\n';
                return 0;
            }
        }
    }

    return 0;
}