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
   ll n,q;
   cin>>n>>q;
   
   deque<int> nums;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       nums.push_back(x);
   }
   
    deque<int>::iterator it =nums.begin();
    while(q--){
      int x;
      cin>>x;
      it = nums.begin();
      while(it!=nums.end()){
          if(*it==x){
              cout<<(it-nums.begin())+1<<" ";
              nums.erase(it);
              nums.push_front(x);
              break;
            }
          it++;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--)
    {
	    solve();
    }
}