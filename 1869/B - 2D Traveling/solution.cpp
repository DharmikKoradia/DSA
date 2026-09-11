#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
bool comp(pair<pair<ll,ll>,bool> &p1,pair<pair<ll,ll>,bool> &p2){
    if(p1.first.first<p2.first.first) return true;
    else if(p1.first.first>p2.first.first) return false;
    else return p1.first.second<p2.first.second;
}
 
ll dist(pair<ll,ll> &start,pair<pair<ll,ll>,bool> &end){
    return (ll)(abs(start.first-end.first.first) + abs(start.second-end.first.second));
}
void solve()
{
   ll n,k,a,b;
   cin>>n>>k>>a>>b;
   pair<ll,ll> start,end;
   vector<pair<pair<ll,ll>,bool>> locs(n);
   for(int i=0;i<n;i++){
       cin>>locs[i].first.first;
       cin>>locs[i].first.second;
       if(i<k) locs[i].second=true;
       else locs[i].second=false;
       
       if(i+1==a){
           start.first=locs[i].first.first;
           start.second=locs[i].first.second;
       }
       else if(i+1==b){
           end.first=locs[i].first.first;
           end.second=locs[i].first.second;
       }
   }
   
   ll direct = abs(start.first-end.first) + abs(start.second-end.second);
   
   sort(locs.begin(),locs.end(),comp);
   
   ll to_dist=direct;
   ll from_dist=direct;
   for(int i=0;i<n;i++){
       if(locs[i].second){
           to_dist=min(to_dist,dist(start,locs[i]));
           from_dist=min(from_dist,dist(end,locs[i]));
       }
       
   }
   
   cout<<min(direct,to_dist+from_dist)<<"
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
 