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
    ll n;
    cin>>n;
    
    vll nums(n);
    
    ll max_sum = 0;
    FOR(i,0,n){
        cin>>nums[i];
        max_sum+=nums[i];
    }
    
 
 
    
    ll l=0,r=0,sum=0;
    
    while(r<n){
        sum+=nums[r];
        if(sum<=0){
            l = r+1;
            sum=0;
        }
        
        if(sum>=max_sum && r-l+1 != n){
            NO;
            return;
       }
        r++;
    }
    YES;
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