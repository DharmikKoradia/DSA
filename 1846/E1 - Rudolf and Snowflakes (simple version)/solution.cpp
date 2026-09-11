#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.rbegin(),x.rend())
#define DEBUG(x) cerr<<#x<<" = "<<x;
#define V(x,n) vector<ll> x(n);
 
bool possible(ll n) {
    for (ll k = 2; k * k <= n; k++) {
        ll sum = 1;
        ll cur = 1;
 
        while (true) {
            cur *= k;
            sum += cur;
 
            if (sum == n) return true;
            if (sum > n) break;
        }
    }
    return false;
}
void solve()
{
    ll n;
    cin>>n;
    
    if(possible(n)) cout<<"Yes
";
    else cout<<"No
";
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