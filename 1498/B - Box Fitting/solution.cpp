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
#define DEBUG(x) cerr<<#x<<x<<"
";
void solve()
{
    ll n,k;
    cin>>n>>k;
    
    vll nums(n);
    FOR(i,0,n) cin>>nums[i];
    
    sort(RALL(nums));
    
    ll low = 0,high = n;
    while(low<=high){
        ll mid = low + (high-low)/2;
        
        bool poss = true;
        vll temp(mid,k);
        FOR(i,0,n){
            ll loc = lower_bound(ALL(temp),nums[i]) - temp.begin();
            if(loc==temp.size()){
                poss=false;
                break;
            }
            temp[loc]-=nums[i];
        }
        if(poss) high = mid-1;
        else low = mid+1;
    }
    cout<<low<<"
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