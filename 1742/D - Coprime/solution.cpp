#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
vector<int> pairs[1001];
 
void solve()
{
   ll n;
   cin>>n;
   
   vector<int> index(1001,0);
   
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       index[x]=i+1;
   }
   
   ll ans=-1;
    for(int i=1;i<=1001;i++){
       if(index[i]==0) continue;
       for(int it : pairs[i]){
           if(index[it]!=0) ans = max(ans, (ll)(index[i]+index[it]));
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
    
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1){
                pairs[i].push_back(j);
            }
        }
    }
    while(t--)
    {
	    solve();
    }
}