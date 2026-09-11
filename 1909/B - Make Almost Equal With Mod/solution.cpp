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
   vector<ll> nums(n);
   unordered_set<ll> temp;
   for(int i=0;i<n;i++) cin>>nums[i];
   ll ans=2;
    do{
       temp.clear();
       for(auto it: nums){
           temp.insert(it%ans);
       }
       if(temp.size()==2) {
           cout<<ans<<"
";
           return;
       }
       ans<<=1;
   } while(temp.size()!=2);
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