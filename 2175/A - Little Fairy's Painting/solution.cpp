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
    unordered_set<int> temp;
    for(ll i=0;i<n;i++) {
        cin>>nums[i];
        temp.insert(nums[i]);
    }
    sort(nums.begin(),nums.end());
    auto it = upper_bound(nums.begin(),nums.end(),temp.size()-1);
    ll value = it-nums.begin();
    cout<<nums[min(n-1,value)]<<"
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
 