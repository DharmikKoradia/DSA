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
 
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> p(n),q(n+1);
    FOR(i, 0, n) {
        cin >> p[i]; 
        q[p[i]]=i; 
        
    } 
    
    ll ans = 0;
    ll cnt=0;
    FOR(i, 0, n) {
        cnt++;
        if(q[i+1]<i) cnt--;
        ans = max(ans,cnt);
    }
    
    cout << ans << "
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