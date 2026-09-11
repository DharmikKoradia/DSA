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
    ll n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    ll j=2;
    while(j<LLONG_MAX){
        for(int i=0;i<n;i++){
            if(__gcd((ll)nums[i],(ll)j)==1){
                cout<<j<<"
";
                return;
            }
        }
        j++;
    }
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