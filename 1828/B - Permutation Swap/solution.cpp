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
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int  i=0;i<n;i++) cin>>nums[i];
    int ans=abs(nums[0]-1);
    for(int i=1;i<n;i++){
        int diff=abs(nums[i]-(i+1));
        if(diff>0) ans=__gcd(diff,ans);
    }
    cout<<ans<<"
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
 