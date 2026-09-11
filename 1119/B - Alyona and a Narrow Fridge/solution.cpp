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
 
bool isValid(vll &nums,ll h){
    sort(RALL(nums));
    
    for(int i=0;i<nums.size();i+=2){
        h-=nums[i];
    }
    return h>=0;
}
void solve()
{
    ll n,h;
    cin>>n>>h;
    
    vll nums(n);
    FOR(i,0,n) cin>>nums[i];
    
    ll low = 0,high = n,ans=0;
    while(low<=high){
        ll mid = low + (high-low)/2;
        vll temp(nums.begin(),nums.begin()+mid);
        
        if(isValid(temp,h)){
            low = mid+1;
        }
        else high = mid-1;
        
    }
    
    cout<<high<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--)
    {
	    solve();
    }
}