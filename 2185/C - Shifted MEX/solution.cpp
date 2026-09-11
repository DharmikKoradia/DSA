#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(),nums.end());
    int ans=0;
    for(int i: s)
    {
        if(s.find(i-1)==s.end())
        {
            int count=0;
            while(s.find(i++)!=s.end()) count++;
            ans=max(ans,count);
        }
    }   
    return ans;
}
void solve()
{
   ll n,ans=0;
   cin>>n;
   vector<int> nums(n);
   for(int i = 0;i<n;i++) cin>>nums[i];
   
   
   cout<<longestConsecutive(nums)<<"
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