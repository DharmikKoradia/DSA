#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define V(x,n) vector<ll> x(n)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define SORT(x,n) sort(x,x+n)
#define RSORT(x) sort(x.rbegin(),x.rend())
#define RSORT(x,n) sort(x,x+n)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
    ll n,k,curr=-1;
    cin>>n>>k;
    
    V(nums,n+1);
    nums[0]=0;
    for(int i=1;i<=n;i++) cin>>nums[i];
    
    vector<ll> uni;
    unordered_map<ll,ll> m;
    for(int i=0;i<=n;i++){
        if(nums[i]>curr){
            uni.push_back(nums[i]);
            curr=nums[i];
            if(m.find(curr)==m.end()) m[curr]=i;
        }
        if(i!=0) nums[i]+=nums[i-1];
    }
    
    FOR(i,0,k){
        ll x; cin>>x;
        ll loc = upper_bound(uni.begin(),uni.end(),x)-uni.begin();
        if(x>=curr) cout<<nums[n]<<" ";
        else{
            ll val=uni[loc];
            cout<<nums[m[val]-1]<<" ";
        }
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