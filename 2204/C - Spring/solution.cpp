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
 
 
ll LCM (ll a,ll b){
    return (a*b)/__gcd(a,b);
}
void solve()
{
    ll a,b,c,days;
    
    vector<ll> ans(3,0);
    cin>>a>>b>>c>>days;
    
    ans[0] = days/a * 6;
    ans[1] = days/b * 6;
    ans[2] = days/c * 6;
    
    
    ll all = LCM(c,LCM(a,b));
    all = days/all;
    FOR(i,0,3) ans[i]-=4*(all);
    
    
    ll f,s,t;
    
    f = LCM(a,b);
    s = LCM(b,c);
    t = LCM(a,c);
    
    f=(days/f);
    s=(days/s);
    t=(days/t);
    
    ans[0]-=3 * (f+t-(2*all));
    ans[1]-=3 * (f+s-(2*all));
    ans[2]-=3 * (s+t-(2*all));
    for(auto it: ans) cout<<it<<" ";
    cout<<"
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