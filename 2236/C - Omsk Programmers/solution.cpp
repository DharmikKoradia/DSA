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
 
void solve()
{
    ll a,b,x;
    cin>>a>>b>>x;
    
    
    if(a<b) swap(a,b);
    ll ans = a-b;
    
    ll count=0;
    while(a!=b){
        if(a<b) swap(a,b);
        a/=x;
        count++;
        // cout<<count<<": "<<a<<" "<<b<<"
";
        ans = min(ans,count+abs(a-b));
        
        if(count>ans) break;
    }
    
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