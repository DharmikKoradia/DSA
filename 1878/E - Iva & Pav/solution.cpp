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
 
void solve()
{
    ll n;
    cin>>n;
    
    vll nums(n);
    FOR(i,0,n) cin>>nums[i];
    
    vll tree(4*n);
    
    buildSegmentTree(tree,nums,0,0,n-1);
    
    // cout<<treeQuery(tree,0,1,0,0,n-1)<<"
";
    
    ll q;
    cin>>q;
    while(q--){
        ll l,tar;
        cin>>l>>tar;
        l--;
        
        if(nums[l]<tar){
            cout<<"-1 ";
            continue;
        }
        
        ll start = l;
        ll r = n-1;
        while(l<=r){
            ll mid = l + ((r-l)/2);
            
            ll temp = treeQuery(tree,start,mid,0,0,n-1);
            
            if(temp>=tar) l = mid+1;
            else r = mid-1;
        }
        cout<<r+1<<" ";
    }
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
    if(start>r || end<l) return INT_MAX;
    else if(l>=start && end>=r) return tree[i];
    else{
        return treeOperator(treeQuery(tree,start,end,2*i+1,l,mid),treeQuery(tree,start,end,2*i+2,mid+1,r));
    }
}