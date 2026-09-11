#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
 
static bool comp(const pair<ll,ll> &p1,const pair<ll,ll> &p2){
    return p1.first<p2.first;
}
void solve()
{
    ll n,k;
    cin>>n;
    vector<pair<ll,ll>> nums(n);
    for(size_t i=0;i<n;i++){
        cin>>nums[i].first;
        nums[i].second=i;
    }
 
    sort(nums.begin(),nums.end(),comp);
    
    vector<ll> prefix(n),ans(n);
    prefix[0]=nums[0].first;
    for(size_t i=1;i<n;i++){
        prefix[i]=prefix[i-1]+nums[i].first;
    }
    ans[nums[n-1].second]=n-1;  
    ll temp=n-1,count=1;
    size_t i=n-1;
    while(i>0){
        if(nums[i].first>prefix[i-1]){
            temp-=count;
            count=1;
        }
        else count++;
        ans[nums[i-1].second]=temp;
        i--;
    }
    
    for(auto val: ans) cout<<val<<" ";
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
 