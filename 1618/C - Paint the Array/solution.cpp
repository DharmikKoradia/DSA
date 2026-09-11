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
   
   vector<ll> nums(n);
   for(int i=0;i<n;i++) cin>>nums[i];
   
   ll op1=nums[0],op2=nums[1];
   for(int i=0;i<n-1;i+=2){
       op1=__gcd(op1,nums[i]);
       op2=__gcd(op2,nums[i+1]);
   }
   
   if(n%2) op1=__gcd(op1,nums[n-1]);
   
   for(int i=0;i<n;i++){
       if(op1!=0 && i%2 && nums[i]%op1==0) op1=0;
       
       else if(op2!=0 && i%2==0 && nums[i]%op2==0) op2=0;
   }
   
   if(op1==0 && op2==0) cout<<"0
";
   else op1==0? cout<<op2<<"
":cout<<op1<<"
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