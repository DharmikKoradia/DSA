#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
 
ll water_held(vector<ll> &nums,ll h){
    ll sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=max((ll)0,h-nums[i]);
    }
    return sum;
}
void solve()
{
    ll n,x,temp=0;
    cin>>n>>x;
    vector<ll> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        temp=max(temp,nums[i]);
    }
    
    ll low=1,high=x+temp;
    while(low<=high){
        ll mid=low+((high-low)/2);
        ll sum=water_held(nums,mid);
        if(sum>x) high=mid-1;
        else low=mid+1;
    }
    cout<<high<<"
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
 