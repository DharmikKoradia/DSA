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
    ll n,m;
    cin>>n>>m;
    
    vector<vector<char>> grid(n);
    
    vll row,col;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            grid[i].push_back(x);
        }
    }
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(grid[i][j]=='.') count++;
        }
        row.push_back(count);
    }
    
    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(grid[j][i]=='.') count++;
        }
        col.push_back(count);
    }
    
    ll ans=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans = min(ans,row[i]+col[j]-(grid[i][j]=='.'));
        }
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