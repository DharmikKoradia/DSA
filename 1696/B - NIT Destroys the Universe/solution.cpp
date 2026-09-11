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
    int count=0,n;
    cin>>n;
    vi nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    for(int i=1;i<n;i++){
        if(nums[i]==0 && nums[i-1]!=0) count++;
    }   
    if(count==0 && nums[0]==0 && nums[n-1]==0) cout<<0<<"
";
    else if(count==1 && nums[n-1]!=0) cout<<2<<"
";
    else if(count>=2) cout<<2<<"
";
    else cout<<1<<"
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
 