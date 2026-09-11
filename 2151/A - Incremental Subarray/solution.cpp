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
   int n,m;
   cin>>n>>m;
   vector<int> nums(m);
   for(int i=0;i<m;i++) cin>>nums[i];
   
   bool sorted=true;
   
   for(int i=1;i<m;i++){
       if(nums[i-1]>=nums[i]){
           sorted=false;
           break;
       }
   }
   
   if(!sorted) cout<<"1
";
   else cout<<n-nums[m-1]+1<<"
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
 