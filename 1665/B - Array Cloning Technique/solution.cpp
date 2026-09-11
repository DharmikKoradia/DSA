#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve(){
    int n,freq=0,ans=0;
    cin>>n;
    vector<int> nums(n);
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        mpp[nums[i]]++;
    }
    for(auto val: mpp){
        freq=max(freq,val.second);
    }
    while(freq<n){
        ans++;
        if(2*freq>n) ans+=n-freq;
        else ans+=freq;
        freq=freq<<1;
    }
    cout<<ans<<"
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
 