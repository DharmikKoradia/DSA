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
 
vector<vll> dp;
 
ll calc(ll idx, vll &left, vll &right, ll turn) {
    if (idx == (ll)left.size()) return 0;
 
    if(dp[idx][turn]!=LLONG_MIN) return dp[idx][turn];
    if (turn == 0) {
        ll buy = left[idx]-right[idx]+calc(idx + 1, left, right, 0);
 
        ll skip = calc(idx+1,left,right,1);
 
        return dp[idx][turn] = max(buy,skip);
    }
    else {
        ll buy = right[idx]-left[idx]+calc(idx+1,left,right,1);
 
        ll skip = calc(idx+1,left,right,0);
 
        return dp[idx][turn] = min(buy, skip);
    }
}
void solve()
{
    ll n;
    cin>>n;
    
    dp.assign(n, vector<ll>(2, LLONG_MIN));
    vll a(n);
    vll b(n);
    
    for(auto &it: a) cin>>it;
    for(auto &it: b) cin>>it;
    
    ll val = calc(0,a,b,0);
    if(val>0) cout<<"Sunny
";
    else if(val==0) cout<<"Draw
";
    else cout<<"Aubrey
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
    else if(l>=start && r<=end) return tree[i];
    else{
        return treeOperator(treeQuery(tree,start,end,2*i+1,l,mid),
            treeQuery(tree,start,end,2*i+2,mid+1,r)
        );
    }
}