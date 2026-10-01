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
 
ll MOD = 1e9+7;
ll factorialMod(ll n, ll mod) {
    ll ans = 1;
 
    for (ll i = 2; i <= n; i++) {
        ans = (ans * i) % mod;
    }
 
    return ans;
}
 
void solve()
{
    ll n;
    cin>>n;
    
    vll nums(n);
    ll least = INT_MAX;
    ll x=INT_MAX;
    unordered_map<ll,ll> freq;
    FOR(i,0,n){
        cin>>nums[i];
        least = min(nums[i],least);
        x&=nums[i];
        freq[nums[i]]++;
    }
    
    if(x!=least || freq[least]<=1){
        cout<<"0
";
        return;
    }
    
    if(freq[least] == n){
        cout<<factorialMod(n,MOD)<<"
";
        return;
    }
    cout<<((freq[least] * (freq[least]-1))%MOD * factorialMod(n-2,MOD)) %MOD<<"
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