#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.rbegin(),x.rend())
#define DEBUG(x) cerr<<#x<<" = "<<x;
#define V(x,n) vector<ll> x(n);
 
void boothsAlgorithm(vector<ll>& arr) {
    ll n = arr.size();
    vector<ll> s(2*n);
    
    for(int i=0; i<n;i++) {
        s[i] = arr[i];
        s[i+n] = arr[i];
    }
 
    int i=0,j=1, k=0;
 
    while(i<n && j<n) {
        k=0;
        while(k<n && s[i+k]==s[j+k])
            k++;
 
        if(k>=n) break;
        if(s[i+k]>s[j+k]) i=i+k+1;
        
        else j=j+k+1;
 
        if(i==j) j++;
    }
    
    int start=min(i,j);
    for(int i=0;i<n;i++){
        arr[i]=s[(start+i)%n];
    }
}
 
void solve()
{
   ll n,s,l;
   cin>>n>>s>>l;
   
   V(nums,n);
   
   vector<ll> a;
  vector<ll> b;
   FOR(i,0,n) cin>>nums[i];
   FOR(i,0,s) a.push_back(nums[i]);
   FOR(i,s,l) b.push_back(nums[i]);
   FOR(i,l,n) a.push_back(nums[i]);
   
//   DEBUG(a.size());
//   DEBUG(b.size());
   boothsAlgorithm(b);
   
   ll t=INT_MAX;
   if(b.size()!=0) t=b[0];
   ll i=0;
   while(i<a.size() && a[i]<=t) cout<<a[i++]<<" ";
   for(auto it: b) cout<<it<<" ";
   while(i<a.size()) cout<<a[i++]<<" ";
   cout<<"
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