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
    ll n,diff=0;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(i!=0) diff+=nums[i]-nums[i-1];
    }
    if(nums[0]==-1 && nums[n-1]==-1){
        diff=0;
        nums[0]=nums[n-1]=0;
    }
    else if(nums[0]==-1){
        diff=0;
        nums[0]=nums[n-1];
    }
    else if(nums[n-1]==-1){
        nums[n-1]=nums[0];
        diff=0;
    }
    cout<<abs(diff)<<"
";
    for(int i=0;i<n;i++){
        if(nums[i]==-1) cout<<0<<" ";
        else cout<<nums[i]<<" ";
    }
    cout<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}
 