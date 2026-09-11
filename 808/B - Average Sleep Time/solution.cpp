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
    double total = 0;
    
    ll n,k;
    cin>>n>>k;
    
    vll nums(n);
    
    FOR(i,0,n) cin>>nums[i];
    
    double sum = 0,week = (n-k+1);
    ll l=0,r=0;
    while(r<n){
        sum+=nums[r];
        
        if(r-l+1 == k){
            total+=(sum/(double)k);
            
            // cout<<sum<<" "<<sum/(double)k<<"
";
            
            sum-=nums[l];
            l++;
        }
        
        r++;
    }
    
    cout<<fixed<<setprecision(6)<<(total/week)*k<<"
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