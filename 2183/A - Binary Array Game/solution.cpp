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
   ll n,count;
   cin>>n;
   vector<int> nums(n);
   for(int i=0;i<n;i++){
       cin>>nums[i];
    //   cout<<nums[i]<<" ";
   }
   
//   cout<<nums[0]<<" "<<nums[n-1];
   (nums[0]==0 && nums[n-1]==0)? cout<<"Bob
":cout<<"Alice
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