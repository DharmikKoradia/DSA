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
   vector<ll> target(n);
   for(int i=0;i<n;i++) cin>>target[i];
   sort(target.begin(),target.end());
   
   ll curr=1;
   for(int i=0;i<n;i++){
       if(curr<target[i]){
           cout<<"No
";
           return;
       }
       if(i!=0)curr+=target[i];
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