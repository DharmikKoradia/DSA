#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
   ll n,ans=0;
   cin>>n;
   
   vector<int> nums(n);
   for(int i=0;i<n;i++) cin>>nums[i];
   
   ll tar=nums[n-1],count=0;
   
   for(int i=n-1;i>=0;){
       if(nums[i]==tar){ 
           count++;
           i--;
       }
       else{
           ans++;
           i-=count;
           count*=2;
       }
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