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

int getMex(set<int> &a)
{
    int s=a.size();
    for(int i=0;i<s;i++)
    {
        if(!a.count(i)) return i;
    }
    return s;
}

void solve() {
    int n;cin>>n;
    vector<int> a(2*n);
    for(auto &x:a) cin>>x;
    int f=-1,s=-1;
    int mexx=0;
    for(int i=0;i<2*n;i++)
    {
        int x=a[i];
        if(x==0&&f==-1) f=i;
        else {
            if(x==0) s=i;
        }
    }
    int l1=f,r1=f;
    set<int> st1;
    while(l1>=0&&r1<2*n&&a[l1]==a[r1])
    {
        st1.insert(a[l1]);
        st1.insert(a[r1]);
        l1--;r1++;
       
    }

    mexx=max(mexx,getMex(st1));

    int l2=s,r2=s;
    set<int> st2;
    while(l2>=0&&r2<2*n&&a[l2]==a[r2])
    {
        st2.insert(a[l2]);
        st2.insert(a[r2]);
        l2--;r2++;
       
    }

    mexx=max(mexx,getMex(st2));

    int l3=(f+s)/2,r3=(f+s+1)/2;
    set<int> st3;
    while(l3>=0&&r3<2*n&&a[l3]==a[r3])
    {
        st3.insert(a[l3]);
        st3.insert(a[r3]);
        l3--;r3++;
    }

    mexx=max(mexx,getMex(st3));

    cout<<mexx<<endl;


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