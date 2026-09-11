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
   ll n;
   cin>>n;
   
   vector<int> nums(n);
   for(int i=0;i<n;i++) cin>>nums[i];
   
   int ans=0,pre=0,post=0;
   pre=nums[0];
   post=nums[n-1];
   int i=0,j=n-1;
   while(i<j){
       if(pre==post){
           ans = i + (n-1-j) + 2;
           i++;
           pre+=nums[i];
       }
       else if(pre<post){
           i++;
           pre+=nums[i];
       }
       else{
           j--;
           post+=nums[j];
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