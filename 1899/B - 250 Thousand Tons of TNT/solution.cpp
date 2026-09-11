#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
vector<int> fact(int n){
    vector<int> factor;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            factor.push_back(i);
            if(i!=(n/i))factor.push_back(n/i);
        }
    }
    return factor;
}
void solve()
{
   ll n,h=INT_MIN,l=INT_MAX,ans=INT_MIN;
   cin>>n;
   vector<int> nums(n);
   for(int i=0;i<n;i++) cin>>nums[i];
   
    vector<int> factor=fact(n);
    for(auto size: factor){
        ll sum=0,count,j=0;
        h=LLONG_MIN,l=LLONG_MAX;
        for(int i=0;i<n/size;i++){
            count=0,sum=0;
            while(count<size){
                sum+=nums[j++];
                count++;
            }
            l=min(l,sum);
            h=max(h,sum);
        }
        // cout<<h<<" "<<l<<"
";
        ans=max(ans,h-l);
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
 