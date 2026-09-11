#include <bits/stdc++.h>
 
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector < int > vi;
#define PB push_back
#define POP pop_back()
#define FOR(i, a, b) for (int i = a; i < b; i++)
    #define DEBUG(x) cerr << #x << " = " << x << "
";
 
void solve()
{
    ll n, k;
    cin >> n >> k;
 
    vector < vector < int >> grid(n, vector < int > (n, 0));
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> grid[i][j];
    }
 
    ll change = 0;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] != grid[n - 1 - i][n - 1 - j]) change++;
            if (change > k) {
                cout << "No
";
                return;
            }
        }
    }
    if (n % 2 == 1) {
        int mid = n / 2;
        for (int j = 0; j < n / 2; j++) {
            if (grid[mid][j] != grid[mid][n - 1 - j]) change++;
            if (change > k) {
                cout << "No
";
                return;
            }
        }
    }
 
    ll temp=k-change;
    if(temp%2==0 || n%2==1) cout<<"Yes
";
    else cout<<"No
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}