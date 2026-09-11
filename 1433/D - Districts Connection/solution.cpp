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
 
 
void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    
    ll val,h=0;
    
    unordered_map<int,int> freq;
    FOR(i,0,n){
        cin>>nums[i];
        freq[nums[i]]++;
    }
    
    if(freq.size()==1){
        cout<<"No
";
        return;
    }
    
    cout<<"Yes
";
    vector<int> same;
    int loc=-1;
    for(int i=1;i<n;i++){
        if(nums[i]==nums[0]) same.push_back(i+1);
        else{
            if(loc==-1) loc=i+1;
            cout<<1<<" "<<i+1<<"
";
        }
    }
    
    for(auto it: same) cout<<loc<<" "<<it<<"
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