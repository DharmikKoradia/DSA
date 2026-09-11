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
    ll sum=0;
    cin>>n;
    
    vll nums(n),ans;
    multiset<ll> temp;
    
    FOR(i,0,n){
        cin>>nums[i];
        sum+=nums[i];
        temp.insert(nums[i]);
    }
    
    FOR(i,0,n){
        sum-=nums[i];
        auto it = temp.find(nums[i]);
        temp.erase(it);
        if(sum%2==0){
            if(temp.find(sum/2)!=temp.end()) ans.push_back(i+1);
        }
        temp.insert(nums[i]);
        sum+=nums[i];
    }
    
    cout<<ans.size()<<"
";
    for(auto &it: ans) cout<<it<<" ";
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