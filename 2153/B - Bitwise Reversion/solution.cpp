#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    bool possible = true;
    for (int i = 0; i < 31; ++i) {
        int xi = (x >> i) & 1;
        int yi = (y >> i) & 1;
        int zi = (z >> i) & 1;
        int sum = xi + yi + zi;
        if (sum == 2) { 
            possible = false;
            break;
        }
    }
    cout << (possible ? "YES
" : "NO
");
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}