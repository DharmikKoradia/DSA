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
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    string s;
    cin>>s;
    
    ll n = s.size(),ans=0;
    
    vll prefix(n);
    prefix[0] = 0;
    
    for(int i=1;i<n;i++){
        if(s[i]=='v' && s[i-1]=='v') prefix[i] = prefix[i-1]+1;
        else prefix[i] = prefix[i-1];
    }
    
    ll count = 0;
    for(int i=n-2;i>=0;i--){
        if(s[i]=='v' && s[i+1]=='v') count++;
        if(s[i]=='o') ans+=prefix[i]*count;
    }
    
    cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--)
    {
	    solve();
    }
}