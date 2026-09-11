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
    
    ll l1=-1,l2=-1,pen = 0;
    
    vll nums(n);
    FOR(i,0,n) cin>>nums[i];
    
    l1 = nums[0];
    FOR(i,1,n){
        if(nums[i]>l1 && l2==-1) {
            l2 = nums[i];
            continue;
        }
        if(nums[i]<=l1 && nums[i]<=l2){
            if(l1<l2) l1 = nums[i];
            else l2 = nums[i];
        }
        else if(nums[i]<=l1){
            l1 = nums[i];
        }
        else if(nums[i]<=l2){
            l2 = nums[i];
        }
        else{
            pen++;
            if(l1<l2) l1 = nums[i];
            else l2 = nums[i];
        }
    }
    
    cout<<pen<<"
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