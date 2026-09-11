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
 
bool poss(vector<vll> &nums,ll mid){
    ll n = nums.size();
    
    FOR(i,0,n){
        if(nums[i].back()>mid) return false;
        mid += nums[i].size()-1;
    }
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    
    vector<vll> nums(n);
    
    FOR(i,0,n){
        ll s,temp=0;
        cin>>s;
        FOR(j,0,s){
            ll x;
            cin>>x;
            nums[i].push_back(x);
            temp = max(temp,x-j+1);
        }
        nums[i].push_back(temp);
        // for(auto &val: nums[i]) cout<<val<<" ";
        // cout<<"
";
    }
    
    
    
    sort(ALL(nums),[](const vll &a,const vll &b)->bool{
        if(a.back()<b.back()) return true;
        if(a.back()>b.back()) return false;
        return a.size()>b.size();
    });
    
    
    
    ll low = 0, high = nums[n-1].back();
    
    while(low<=high){
        ll mid = low + ((high-low)/2);
        
        if(poss(nums,mid)) high = mid-1;
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