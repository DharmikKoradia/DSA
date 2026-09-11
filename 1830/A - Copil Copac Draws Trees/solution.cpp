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
 
 
ll treeOperator(ll a,ll b);
void buildSegmentTree(vll &tree,vll &nums,ll i,ll l,ll r);
ll treeQuery(vll &tree,ll start,ll end,ll i,ll l,ll r);
 
 
void dfs(ll par,ll vert, map<pll,int> &idx,vll &dp,vector<vll> &graph){
    for(auto x: graph[vert]){
        if(x==par) continue;
        
        if(idx[{vert,x}]>idx[{par,vert}]) dp[x] = dp[vert];
        else dp[x] = dp[vert]+1;
        
        dfs(vert,x,idx,dp,graph);
    }
}
void solve()
{
    ll n;
    cin>>n;
    
    map<pair<ll,ll>,int> idx;
    idx[{0,1}] = -1;
    
    vector<vll> graph(n+1);
    
    FOR(i,0,n-1){
        ll x,y;
        cin >> x >> y;
    
        graph[x].push_back(y);
        graph[y].push_back(x);
    
        idx[{x,y}] = i;
        idx[{y,x}] = i;
    }
    
    vll dp(n+1,0);
    dp[1]=1;
    
    dfs(0,1,idx,dp,graph);
    
    ll ans = INT_MIN;
    for(auto &x: dp) ans = max(ans,x);
    
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
 
 
 
void buildSegmentTree(vll &tree,vll &nums,ll i,ll l,ll r){
    if(l==r){
        tree[i] = nums[l];
        return;
    }
    
    ll mid = l + ((r-l)>>1);
    buildSegmentTree(tree,nums,2*i+1,l,mid);
    buildSegmentTree(tree,nums,2*i+2,mid+1,r);
    
    tree[i] = treeOperator(tree[2*i+1],tree[2*i+2]);
}
 
ll treeOperator(ll a,ll b){
    return (a&b);    
}
 
ll treeQuery(vll &tree,ll start,ll end,ll i,ll l,ll r){
    ll mid = l + ((r-l)>>1);
    if(start>r || end<l) return 0;
    else if(l<=start && r<=end) return tree[i];
    else{
        return treeOperator(treeQuery(tree,start,end,2*i+1,l,mid),
            treeQuery(tree,start,end,2*i+2,mid+1,r)
        );
    }
}