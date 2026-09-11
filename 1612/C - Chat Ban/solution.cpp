#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define PB push_back
#define F first
#define S second
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define FOR(i,a,b) for(ll i=(a); i<(b); i++)
#define RFOR(i,a,b) for(ll i=(a); i>=(b); i--)
 
#define YES cout<<"Yes
"
#define NO cout<<"No
"
#define endl '
'
#define DEBUG(x) cerr<<x<<"
";
 
 
void solve() {
    ll k, x;
    cin >> k >> x;
 
    if (x >= k * k) {
        cout << 2 * k - 1 << '
';
        return;
    }
 
    ll inc = k * (k + 1) / 2;
 
    // Ban in increasing part
    if (x <= inc) {
        ll low = 1, high = k;
 
        while (low <= high) {
            ll mid = low + (high - low) / 2;
 
            if (mid * (mid + 1) / 2 >= x)
                high = mid - 1;
            else
                low = mid + 1;
        }
 
        cout << low << '
';
        return;
    }
 
    // Increasing part completed
    x -= inc;
 
    ll low = 1, high = k - 1;
 
    while (low <= high) {
        ll mid = low + (high - low) / 2;
 
        ll sum = mid * (2 * (k - 1) - mid + 1) / 2;
 
        if (sum >= x)
            high = mid - 1;
        else
            low = mid + 1;
    }
 
    cout << k + low << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}