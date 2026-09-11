#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define PB push_back
#define F first
#define S second
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define FOR(i,a,b) for(ll i=(a); i<(b); i++)
#define RFOR(i,a,b) for(ll i=(a); i>=(b); i--)
 
#define YES cout<<"Yes
"
#define NO cout<<"No
"
#define endl '
'
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    ll blue = 0,red = 0;
    
    ll n;
    cin>>n;
    
    vector<vector<int>> graph(n+1);
    
    FOR(i,0,n-1){
        ll u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    vector<bool> vis(n+1,false);
    queue<int> q;
    bool isRed = true;
    q.push(1);
    
    vis[1] = true;
    while(!q.empty()){
        int size = q.size();
        if(isRed) red+=size;
        else blue+=size;
        
        while(size--){
            int curr = q.front();
            q.pop();
            
            for(auto &it: graph[curr]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = true;
                }
            }
        }   
        
        isRed = !isRed;
    }    
    
    
    cout<<blue*red-(n-1)<<"
";
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