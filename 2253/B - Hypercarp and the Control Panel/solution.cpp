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
    bool allsame=true;
    FOR(i,0,n){
        cin>>nums[i];
        if(i!=0 && nums[i]!=nums[i-1]) allsame=false;
    }
    
    if(allsame){
        cout<<"1
";
        return;
    }
    
    vll val;
    vector<ll> grp;
    ll c=1;
    
    for(auto it: nums){
        if(val.empty() || val.back()!=it){
            val.push_back(it);
            grp.push_back(1);
        }
        else grp.back()++;
    }
    
    
    ll m = grp.size();
    ll del = 0;
    FOR(i,1,m){
        if(grp[i]>1 && grp[i-1]>1){
            del=max(del,2ll);
        }
        else if(i>=2 && grp[i-1]==1 && grp[i]>1 && val[i-2]!=val[i]) del=max(del,1ll);
    }
    
    FOR(i,0,m){
        if(i<m-2 && grp[i+1]==1 && grp[i]>1 && val[i]!=val[i+2]) del=max(del,1ll);
    }
    
    
if((grp[0]==1 && grp[1]!=1) || (grp[m-1]==1 && grp[m-2]!=1)) del=max(del,1ll);
    
    ll count=0;
    
    for(auto &it: grp){
        count+=(it-1);
    }
    
    cout<<n-(count-del)<<"
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