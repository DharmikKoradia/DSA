#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
bool comp(const pair<int,int> &p1,const pair<int,int> p2){
    return p1.first>p2.first;
}
void solve()
{
    ll n,ans=0;
    cin>>n;
    vector<pair<ll,ll>> freq(n);
    vector<ll> loc(n+1);
    loc[0]=0;
    for(int i=0;i<n;i++){
        cin>>freq[i].first;
        freq[i].second=i+1;
    }
    sort(freq.begin(),freq.end(),comp);
    
    ll dist=1;
    for(int i=0;i<n;i++){
        ans+=dist*2*freq[i].first;
        loc[freq[i].second]=dist;
        i++;
        if(i<n){
            ans+=dist*2*freq[i].first;
            loc[freq[i].second]=(-dist);
        }
        else break;
        dist++;
    }
    cout<<ans<<"
";
    for(ll val:loc) cout<<val<<" ";
    cout<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}
 