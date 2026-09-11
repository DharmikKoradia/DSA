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
    ll n,ans=0;
    cin>>n;
    
    vll nums(n);
    vector<pair<ll,ll>> loc;
    
    FOR(i,0,n){
        cin>>nums[i];
        if(nums[i]<i+1){
            loc.emplace_back(i+1,nums[i]);
        }
    }
    
    sort(ALL(loc),[](const pair<ll,ll> &a,const pair<ll,ll> &b)->bool{
        return a.second<b.second;
    });
    
    ll size = loc.size();
    
    FOR(i,0,size){
        int temp =  upper_bound(ALL(loc), loc[i].F,
        [](ll value, const pair<ll,ll> t){
            return value<t.S;
        })-loc.begin();
        
        
        ans+=size-temp;
    }
    
    cout<<ans<<endl;
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