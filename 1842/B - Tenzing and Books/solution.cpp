#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) cin >> c[i];
 
    ll curr = 0;
 
    auto process = [&](vector<ll>& v) {
        for (int i = 0; i < n; ++i) {
            // If this book uses bits outside x, we must stop on this stack
            if ((v[i] & ~x) != 0) break;
            // If it adds some new bit towards x, read it
            if ((v[i] & ~curr) != 0) curr |= v[i];
        }
    };
 
    process(a);
    process(b);
    process(c);
 
    cout << (curr == x ? "Yes
" : "No
");
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}