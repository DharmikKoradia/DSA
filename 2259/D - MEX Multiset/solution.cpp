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
    
    map<ll,vll> loc;
    
    vll nums;
    FOR(i,0,n){
        ll x;
        cin>>x;
        nums.push_back(x);
        loc[x].push_back(i);
    }
    
    if(loc.count(0) && loc[0].size()==1){
        cout<<"NO
";
        return;
    }
    
    vector<char> ans(n);
    ll dig = INT_MAX;
    for(auto &[x,y]:loc){
        if(y.size()<3){
            if(y.size()==2){
                ans[y[0]]='A';
                ans[y[1]]='B';
            }
            else{
                ans[y[0]]='A';
            }
            dig=x;
            break;
        }
        
        ll t = y.size();
        for(int i=0;i<t-2;i++){
            ans[y[i]] = 'A';
        }
        ans[y[t-2]]='B';
        ans[y[t-1]]='C';
    }
    
    cout<<"YES
";
    for(int i=0;i<n;i++){
        if(nums[i]<=dig) cout<<ans[i];
        else cout<<'C';
    }
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