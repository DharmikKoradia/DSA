#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
 
void split(ll n, unordered_map<ll,ll> &track,ll move,ll k){
    
    if(n < k) return;
    if(track.find(n)!=track.end()){
        track[n] = min(track[n],move);
        return;
    }
    track[n] = move;
    
    split(((n+1)/2),track,move+1,k);
    split((n/2),track,move+1,k);
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    
    unordered_map<ll,ll> moves;
    
    split(n,moves,0,k);
    
    moves.find(k)!=moves.end()? cout<<moves[k]<<"
":cout<<"-1
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