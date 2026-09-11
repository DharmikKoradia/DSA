#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
    ll n;
    cin>>n;
    
    vector<ll> nums(n);
    vector<ll> diff;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(i!=0){
            diff.push_back(abs(nums[i]-nums[i-1]));
        }
    }
    int ans=accumulate(diff.begin(),diff.end(),0);
    int sum=ans;
    ans=min(ans-diff[0],ans-diff[n-2]);
    for(int i=1;i<n-1;i++){
        int temp=sum-diff[i]-diff[i-1]+abs(nums[i-1]-nums[i+1]);
        ans=min(ans,temp);
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
 