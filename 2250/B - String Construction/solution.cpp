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
    int n,k;
    cin>>n>>k;
 
    int z = (n+1)/2;
    int o = n/2;
 
    int runs =n-k;
    
    bool ok = false;
    int rz, ro;
 
    for (rz = 1; rz <= z; rz++) {
        ro = runs-rz;
        if (ro<1 || ro>o) continue;
        if (abs(rz - ro) <= 1) {
            ok = true;
            break;
        }
    }
 
    if (!ok) {
        cout<<-1<<"
";
        return;
    }
 
    vector<int> zero(rz, 1), one(ro, 1);
 
    int extra = z-rz;
    for (int i=0; extra;i=(i+1)%rz){
        zero[i]++;
        extra--;
    }
 
    extra = o - ro;
    for (int i = 0; extra; i = (i + 1) % ro){
        one[i]++;
        extra--;
    }
 
    string ans;
 
    if (rz >= ro) {
        for (int i = 0; i < rz; i++) {
            ans.append(zero[i], '0');
            if (i < ro) ans.append(one[i], '1');
        }
    } 
    else {
        for (int i = 0; i < ro; i++) {
            ans.append(one[i], '1');
            if (i < rz) ans.append(zero[i], '0');
        }
    }
 
    cout << ans << '
';
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