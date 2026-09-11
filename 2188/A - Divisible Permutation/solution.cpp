#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
    ll n;
    cin>>n;
    ll start=1,end=n;
 
    vector<int> nums(n);
    ll temp=n-1;
    while(temp>-1){
        nums[temp--]=end--;
        if(temp>=0) nums[temp--] = start++;
    }
    
    for(auto val: nums) cout<<val<<" ";
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