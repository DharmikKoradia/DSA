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
    int n,ans=0;
    cin>>n;
    vi nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    for(int i=n-2;i>=0;i--){
        while(nums[i]>=nums[i+1]){
            if(nums[i]==0){
                cout<<"-1
";
                return;
            }
            nums[i]/=2;
            ans++;
        }
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
 