#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
ll MOD = 1e9+7;
void solve()
{
    ll n;
    cin>>n;
    // ll ans = (((n)%MOD)*((4*n-1)%MOD)*((n+1)%MOD)*337)%MOD;
    ll ans = ((((n%MOD)*(4*n-1))%MOD*(n+1))%MOD*337)%MOD;
    
    cout<<ans<<"
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