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
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    vll nums(n);
    
    ll ans = LLONG_MAX;
    FOR(i,0,n){
        cin>>nums[i];
        ans = min(ans,nums[i]);
    }
    
    if(k>=3){
        cout<<"0
";
        return;
    }
    
    if(k==0){
        cout<<ans<<"
";
        return;
    }
    
    sort(ALL(nums));
    
    if(k==1){
        FOR(i,1,n){
            ans = min(ans,nums[i]-nums[i-1]);
        }
        cout<<ans<<"
";
        return;
    }
    
    
    vll diff;
    
    FOR(i,0,n){
        FOR(j,i+1,n){
            diff.push_back(abs(nums[j]-nums[i]));
            ans = min(ans,diff.back());
        }
    }
    
    sort(ALL(diff));
    
    ll i=0,j=0;
    while(i<n && j<diff.size()){
        if(abs(nums[i]-diff[j])<ans){
            ans = abs(nums[i]-diff[j]);
        } 
        
        if(nums[i]<diff[j]) i++;
        else j++;
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