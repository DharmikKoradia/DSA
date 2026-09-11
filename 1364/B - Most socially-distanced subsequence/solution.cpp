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
#define DEBUG(x) cerr<<#x<<" "<<x<<"
";
void solve()
{
    ll n;
    cin>>n;
    
    vll nums(n);
    
    FOR(i,0,n) cin>>nums[i];
    
    vll ans;
    
    ans.push_back(nums[0]); 
    ll r=1;
    bool ascend = (nums[0]<nums[r]) ;
    while(r<n){
        // DEBUG(r);
        if(ascend){
            while(r<n-1 && nums[r]<nums[r+1]) r++;
        }
        else{
            while(r<n-1 && nums[r]>nums[r+1]) r++;
        }
        ans.push_back(nums[r]);
        ascend = !ascend;
        r++;
    }
    
    cout<<ans.size()<<"
";
    for(auto &it: ans) cout<<it<<" ";
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