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
    
    string a,b;
    cin>>a>>b;
    
    ll a0e=0,a0o=0,b0e=0,b0o=0;
    
    
    
    FOR(i,0,n){
        if(i%2){
            if(a[i]=='0') a0o++;
            if(b[i]=='0') b0o++;
        }
        else{
            if(a[i]=='0') a0e++;
            if(b[i]=='0') b0e++;
        }
    }
    
    if(a0e!=b0e || a0o!=b0o){
        cout<<"-1
";
        return;
    }
    
    queue<int> temp;
    
    ll ans=0;    
    for(int i=0;i<n;i+=2){
        if(a[i]!=b[i]){
            if(temp.empty()) temp.push(i);
            else{
                if(a[temp.front()]!=a[i]){
                    ans+=(i-temp.front())/2;
                    temp.pop();
                }
                else temp.push(i);
            }
        }
    }
    
    
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    // if(!temp.empty()){
    //     cout<<"-1
";
    //     return;
    // }
    
    for(int i=1;i<n;i+=2){
        if(a[i]!=b[i]){
            if(temp.empty()) temp.push(i);
            else{
                if(a[temp.front()]!=a[i]){
                    ans+=(i-temp.front())/2;
                    temp.pop();
                }
                else temp.push(i);
            }
        }
    }
    
    // if(!temp.empty()){
    //     cout<<"-1
";
    //     return;
    // }
    
    
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