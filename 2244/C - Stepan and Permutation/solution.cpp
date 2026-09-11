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
    ll n,x,y;
    
    cin>>n>>x>>y;
    
    vll nums(n);
    
    unordered_map<ll,ll> loc;
    FOR(i,0,n){
        cin>>nums[i];
        loc[nums[i]] = i;
    }
    
    ll temp = __gcd(x,y);
    for(int i=0;i<n;i++){
        ll curr = loc[i+1];
        
        ll diff = abs(curr-i);
        if(diff%temp!=0){
            NO;
            return;
        }
    }
    YES;
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