#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
 
void solve()
{
    ll n,k,w;
    cin>>n>>k;
    vector<ll> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    ll l=1,h=1e9;
    while(l<=h){
        ll mid=l+((h-l)/2);
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]+2*mid)*(nums[i]+2*mid);
            if(sum>k){
                h=mid-1;
                break;
            }
        }
        if(sum==k){
            cout<<mid<<"
";
            return;
        }
        else if(sum<k) l=mid+1;
        else h=mid-1;
    }
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
 