#include <bits/stdc++.h>
using namespace std;
 
// Macro definition
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
    cin >> n;
 
    vll nums(n);
 
    ll first = -1, last = -1;
    pll neg = {-1, -1};
    
    FOR(i,0,n){
        cin>>nums[i];
        if(nums[i]==1){
            if(first==-1) first=i;
            last = i;
        }
        if(nums[i]==-1){
            if(neg.F==-1) neg.F=i;
            neg.S=i;
        }
    }
 
    if (last == -1) {
        if (neg.F != -1) {
            nums[neg.F] = 1;
            nums[neg.S] = 1;
        }
    } else {
        if (neg.F != -1 && neg.F < first) nums[neg.F] = 1;
        if (neg.S != -1 && neg.S > last) nums[neg.S] = 1;
    }
 
    for (int i = 0; i < n; i++) cout<<(nums[i]==-1?0:nums[i])<<" ";
    
    cout<<"
";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while(t--)
    {
        solve();
    }
}
 
 
 
void buildSegmentTree(vll &tree, vll &nums, ll i, ll l, ll r)
{
    if(l == r){
        tree[i] = nums[l];
        return;
    }
 
    ll mid = l + ((r - l) >> 1);
 
    buildSegmentTree(tree, nums, 2*i + 1, l, mid);
    buildSegmentTree(tree, nums, 2*i + 2, mid + 1, r);
 
    tree[i] = treeOperator(tree[2*i + 1], tree[2*i + 2]);
}
 
ll treeOperator(ll a, ll b)
{
    return (a & b);
}
 
ll treeQuery(vll &tree, ll start, ll end, ll i, ll l, ll r)
{
    ll mid = l + ((r - l) >> 1);
 
    if(start > r || end < l)
        return 0;
 
    else if(l <= start && r <= end)
        return tree[i];
 
    else{
        return treeOperator(
            treeQuery(tree, start, end, 2*i + 1, l, mid),
            treeQuery(tree, start, end, 2*i + 2, mid + 1, r)
        );
    }
}