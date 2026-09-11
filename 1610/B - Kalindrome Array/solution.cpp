#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
bool check(vector<ll> &nums,ll del){
    ll start=0,end=nums.size()-1;
    while(start<end){
        while(nums[start]==del) start++;
        while(nums[end]==del) end--;
        if(start<end && nums[start]!=nums[end]) return false;
        start++;
        end--;
    }
    return true;
}
void solve()
{
   ll n;
   cin>>n;
   
   vector<ll> nums(n);
   for(int i=0;i<n;i++) cin>>nums[i];
   
   ll start=0,end=n-1;
   while(start<end){
       if(nums[start]!=nums[end]){
           if(check(nums,nums[start]) || check(nums,nums[end])){
               cout<<"Yes
";
               return;
           }
           else{
               cout<<"No
";
               return;
           }
       }
       start++;
       end--;
   }
   cout<<"Yes
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