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
    ll n,k;
    cin>>n>>k;
    
    vector<int> nums(n);
    vector<int> place[k+1];
    
    for(int i=1;i<=k;i++) place[i].push_back(0);
    
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
        place[nums[i]].push_back(i+1);
    }
    
    for(int i=1;i<=k;i++) place[i].push_back(n+1);
    
    priority_queue<int> jumps[k+1];
    for(int i=1;i<=k;i++){
        for(int j=0;j<place[i].size()-1;j++){
            jumps[i].push(place[i][j+1]-place[i][j]-1);
        }
        ll temp = jumps[i].top();
        jumps[i].pop();
        jumps[i].push(temp/2);
    }
    
    ll ans=INT_MAX;
    for(int i=1;i<=k;i++){
        ll temp = jumps[i].top();
        ans = min(ans,temp);
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