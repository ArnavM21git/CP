#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    // 1. Store pairs of (value, index) in a SET to quickly find "Minimum of All"
    set<pair<long long, int>> s;
    
    // 2. Use L and R arrays to simulate a Circular Linked List
    // This lets us "delete" numbers and update neighbors instantly
    vector<int> L(n), R(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert({a[i], i}); // Sorts by value automatically
        
        // Link neighbors (Circular)
        L[i] = (i - 1 + n) % n; // Left neighbor
        R[i] = (i + 1) % n;     // Right neighbor
    }

    long long total_cost = 0;

    // We need to perform n-1 merges
    for(int i = 0; i < n - 1; i++) {
        
        // STEP 1: Choose minimum of all (First element in Set)
        pair<long long, int> min_element = *s.begin();
        s.erase(s.begin()); // Remove it from the set of candidates

        long long val = min_element.first;
        int idx = min_element.second;

        // STEP 2: Find minimum around it (Left vs Right neighbor)
        int left_neighbor = L[idx];
        int right_neighbor = R[idx];

        long long val_L = a[left_neighbor];
        long long val_R = a[right_neighbor];

        // Decide which neighbor to merge with
        int target_neighbor;
        
        // We pick the smaller neighbor to minimize cost
        if (val_L < val_R) {
            target_neighbor = left_neighbor;
        } else {
            target_neighbor = right_neighbor;
        }

        // STEP 3: Merge
        // The rule is cost = max(x, y). 
        // Since 'val' is the global minimum, the neighbor is definitely >= val.
        // So cost is just the neighbor's value.
        total_cost += a[target_neighbor];

        // LOGIC: When 'val' merges with a larger 'neighbor', 'val' effectively dies.
        // The 'neighbor' survives with its original value.
        // So we just need to delete 'val' (idx) from our Linked List.

        // Update neighbors to skip 'idx'
        // Left guy's new Right is 'idx's Right
        R[L[idx]] = R[idx];
        // Right guy's new Left is 'idx's Left
        L[R[idx]] = L[idx];
    }

    cout << total_cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}