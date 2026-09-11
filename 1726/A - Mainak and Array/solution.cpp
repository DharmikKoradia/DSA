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
    int n,ans=0,t1=0,t2=0;
    cin>>n;
    vi nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    for(int i=1;i<n;i++){
        ans=max((nums[i-1]-nums[i]),ans);
        t1=max(t1,nums[i]-nums[0]);
        t2=max(t2,nums[n-1]-nums[i-1]);
    }
    cout<<max({ans,t1,t2})<<"
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
 