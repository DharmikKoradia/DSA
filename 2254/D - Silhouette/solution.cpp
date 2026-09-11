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
 
void solve() {
    ll n;
    cin>>n;
 
    vll nums(n);
    FOR(i,0,n) cin>>nums[i];
 
    vll temp = nums;
    sort(ALL(temp));
 
    if(temp[0]!=0) {
        cout<<-1<<"
";
        return;
    }
 
    vll shadow,cnt;
 
    for(auto it: temp){
        if(shadow.empty() || shadow.back()!=it){
            shadow.push_back(it);
            cnt.push_back(1);
        }
        else cnt.back()++;
    }
 
    // for(auto it: shadow) cout<<it<<" ";
    // cout<<"
";
    // for(auto it: cnt) cout<<it<<" ";
    // cout<<"
";
    
    // cout<<"

";
    
    ll un = shadow.size();
    
    if(un==1){
        FOR(i,0,n) cout<<"1 ";
        cout<<"
";
        return;
    }
 
    vll val(un);
 
    FOR(i,0,un-1){
        ll diff = shadow[i+1]-shadow[i];
        if(diff%cnt[i]!=0) {
            cout<<-1<<"
";
            return;
        }
        
        val[i]=diff/cnt[i];
        if (i>0 && val[i]<=val[i-1]) {
            cout<<-1<<"
";
            return;
        }
    }
 
    val[un-1] = val[un-2]+1;
 
    unordered_map<ll, ll> mpp;
    
    for (int i=0; i<un;i++) mpp[shadow[i]]=val[i];
 
    for (ll x:nums) cout<<mpp[x]<<" ";
    cout << "
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